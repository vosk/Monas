#include "robotcontroller.h"
#include "messages/SensorsMessage.pb.h"
#include "hal/robot/generic_nao/robot_consts.h"

#include "tools/logger.h"
#include "tools/toString.h"
#include "tools/XMLConfig.h"


using boost::posix_time::milliseconds;


ACTIVITY_REGISTER(RobotController);
RobotController::RobotController(Blackboard &b, XmlManager &x) : IActivity(b, x) , gm(game_data) //Initialize game controller with message pointer
{
}

void RobotController::UserInit()
{
	//"Initialize Robot controller"
	readConfiguration(ArchConfig::Instance().GetConfigPrefix() + "/teamConfig.xml");
	gm.connectTo(conf.port(), conf.team_number());
	gm.setNonBlock(true);
	_blk.updateSubscription("buttonevents", msgentry::SUBSCRIBE_ON_TOPIC);
	_blk.publishState(gm_state, "worldstate");
	Logger::Instance().WriteMsg("RobotController", "Robot Controller Initialized", Logger::Info);
	lastalive = boost::posix_time::microsec_clock::universal_time();
}

void RobotController::Reset(){
}

int RobotController::Execute()
{
	static int delay;
	bool changed = false;
	bool received = gm.poll();
	boost::posix_time::ptime now = boost::posix_time::microsec_clock::universal_time();

	if(lastalive < now && received && gm_state.override_state() == OVERRIDE_DISABLED)
	{
		gm.SendAlive(conf.player_number() );
		lastalive = now + milliseconds(ALIVEMS);
	}

	//Check if the msg changes from the outer world
	gsm = _blk.readState<GameStateMessage> ("worldstate");
	if(gsm != 0){
		gm_state.CopyFrom(*gsm);
	}

	if (received && gm_state.override_state() == OVERRIDE_DISABLED)
	{
		//teams[0] one team
		//teams[1] other team
		int teamindx = game_data.teams[0].teamNumber == conf.team_number() ? 0 : 1;
		new_gm_state.set_player_number(conf.player_number());
		new_gm_state.set_team_number(conf.team_number());
		new_gm_state.set_team_color(game_data.teams[teamindx].teamColour);
		new_gm_state.set_own_goal_color(game_data.teams[teamindx].goalColour);
		new_gm_state.set_game_state(game_data.state);
		new_gm_state.set_sec_game_state(game_data.secondaryState);
		new_gm_state.set_our_score(game_data.teams[teamindx].score);
		new_gm_state.set_otherteam_score(game_data.teams[teamindx == 1 ? 0 : 1].score);
		new_gm_state.set_firsthalf(game_data.firstHalf == 1);
		new_gm_state.set_kickoff(game_data.kickOffTeam == new_gm_state.team_color());
		new_gm_state.set_penalty(game_data.teams[teamindx].players[conf.player_number() - 1].penalty);
		new_gm_state.set_previous_player_state(gm_state.player_state());
		//Depreciated PLAYER_PENALISED State does not exist any more!
		new_gm_state.set_player_state((game_data.teams[teamindx].players[conf.player_number() - 1].penalty == 0) ? game_data.state : PLAYER_PENALISED);

		//Check if changed
		if (gm_state.game_state() != new_gm_state.game_state() || gm_state.team_color() != new_gm_state.team_color() || gm_state.own_goal_color() != new_gm_state.own_goal_color()
		        || gm_state.penalty() != new_gm_state.penalty() || gm_state.player_state() != new_gm_state.player_state()
		        || gm_state.sec_game_state() != new_gm_state.sec_game_state() || gm_state.our_score() != new_gm_state.our_score() || gm_state.otherteam_score()
		        != new_gm_state.otherteam_score() || gm_state.firsthalf() != new_gm_state.firsthalf() || gm_state.kickoff() != new_gm_state.kickoff())
		{
			changed = true;
			gm_state.CopyFrom(new_gm_state);
		}
	}

	boost::shared_ptr<const ButtonMessage> bm = _blk.readSignal<ButtonMessage>("buttonevents");

	if(bm.get() != NULL)
	{
		int lbump = bm->data(KDeviceLists::L_BUMPER_L) + bm->data(KDeviceLists::L_BUMPER_R);
		int rbump = bm->data(KDeviceLists::R_BUMPER_L) + bm->data(KDeviceLists::R_BUMPER_R);
		int chest = bm->data(KDeviceLists::CHEST_BUTTON);

		if(chest == 4 || ((lbump + rbump) > 0 && chest == 2))
		{
			Logger::Instance().WriteMsg("SysCall", "Shutdown robot", LoggerClass::Info);
			gm_state.Clear();
			gm_state.set_player_number(conf.player_number());
			gm_state.set_team_number(conf.team_number());
			gm_state.set_team_color(conf.team_color());
			gm_state.set_override_state(OVERRIDE_DROPDEAD);
			SysCall::_Shutdown();
			changed = true;
		}
		else if(chest == 2) //DOUBLE CHEST CLICK
		{
			gm_state.Clear();
			gm_state.set_player_number(conf.player_number());
			gm_state.set_team_number(conf.team_number());
			gm_state.set_team_color(conf.team_color());

			if(gm_state.override_state() != OVERRIDE_DROPDEAD)
				gm_state.set_override_state(OVERRIDE_DROPDEAD);
			else
				gm_state.set_override_state(OVERRIDE_DISABLED);

			changed = true;
		}
		else if((lbump + rbump) > 0 && chest == 1)
		{
			if(gm_state.override_state() == OVERRIDE_DISABLED)
			{
				gm_state.Clear();
				gm_state.set_player_number(conf.player_number());
				gm_state.set_team_number(conf.team_number());
				gm_state.set_team_color(conf.team_color());
				gm_state.set_override_state(OVERRIDE_ENABLED);
			}
			else
				gm_state.set_override_state(OVERRIDE_DISABLED);

			changed = true;
		}
		else if(rbump > 0 && gm_state.player_state() != PLAYER_PLAYING && gm_state.override_state() != OVERRIDE_DROPDEAD)
		{
			gm_state.set_kickoff((gm_state.kickoff() + 1) % 2);
			changed = true;
		}
		else if(lbump > 0 && gm_state.player_state() != PLAYER_PLAYING && gm_state.override_state() != OVERRIDE_DROPDEAD)
		{
			gm_state.set_team_color((gm_state.team_color() + 1) % 2);
			changed = true;
		}
		else if(chest == 1 && !(received && gm_state.override_state() == OVERRIDE_DISABLED) )
		{
			switch (gm_state.player_state())
			{
			case PLAYER_INITIAL:
				gm_state.set_penalty(PENALTY_MANUAL);
				gm_state.set_game_state(STATE_PLAYING);
				gm_state.set_player_state(PLAYER_PENALISED);
				gm_state.set_previous_player_state(PLAYER_INITIAL);
				break;

			case PLAYER_PLAYING:
				gm_state.set_penalty(PENALTY_MANUAL);
				gm_state.set_game_state(STATE_PLAYING);
				gm_state.set_player_state(PLAYER_PENALISED);
				gm_state.set_previous_player_state(PLAYER_PLAYING);
				break;

			case PLAYER_PENALISED:
				gm_state.set_game_state(STATE_PLAYING);
				gm_state.set_penalty(PENALTY_NONE);
				gm_state.set_player_state(PLAYER_PLAYING);
				gm_state.set_previous_player_state(PLAYER_PENALISED);
				break;

			default:
				gm_state.set_game_state(STATE_PLAYING);
				gm_state.set_penalty(PENALTY_NONE);
				gm_state.set_player_state(PLAYER_PLAYING);
				gm_state.set_previous_player_state(PLAYER_INITIAL);
			}

			changed = true;
		}
	}

	if (changed)
	{
		sendLedUpdate();
		_blk.publishState(gm_state, "worldstate");
	}
	else if (delay++ % 50 == 0)
	{
		sendLedUpdate();
	}

	return 0;
}

void RobotController::sendLedUpdate()
{
	LedValues* chest_led = leds.add_leds();
	LedValues* rfoot_led = leds.add_leds();
	LedValues* lfoot_led = leds.add_leds();
	chest_led->set_chain("chest");
	rfoot_led->set_chain("r_foot");
	lfoot_led->set_chain("l_foot");

	if(showover && gm_state.override_state() != OVERRIDE_DISABLED)
		chest_led->set_color("on");
	else if(gm_state.override_state() == OVERRIDE_DROPDEAD)
		chest_led->set_color("on");
	else if (gm_state.player_state() == PLAYER_INITIAL || gm_state.player_state() == PLAYER_FINISHED)
		chest_led->set_color("off");
	else if (gm_state.player_state() == PLAYER_READY)
		chest_led->set_color("blue");
	else if (gm_state.player_state() == PLAYER_SET)
		chest_led->set_color("yellow");
	else if (gm_state.player_state() == PLAYER_PLAYING)
		chest_led->set_color("green");
	else if (gm_state.player_state() == PLAYER_PENALISED)
		chest_led->set_color("red");
	else
		chest_led->set_color("on");

	showover = !showover;

	if (gm_state.kickoff())
		rfoot_led->set_color("on");
	else
		rfoot_led->set_color("off");

	if (gm_state.team_color() == TEAM_BLUE)
		lfoot_led->set_color("blue");
	else
		lfoot_led->set_color("red");

	_blk.publishSignal(leds, "leds");
	leds.clear_leds();
}

bool RobotController::readConfiguration(const std::string& file_name)
{
	XMLConfig config(file_name);
	conf.Clear(); //Initialize with default values in .proto
	gm_state.Clear(); //Initialize with default values in .proto
	int value;
	gm_state.set_player_number(conf.player_number());

	if (!config.QueryElement("player", value))
	{
		Logger::Instance().WriteMsg("RobotController", "Configuration file has no player, setting to default value: " + _toString(conf.player_number()), Logger::Error);
	}
	else
	{
		conf.set_player_number(value);
		gm_state.set_player_number(value);
	}

	gm_state.set_team_number(conf.team_number());

	if (!config.QueryElement("team_number", value))
	{
		Logger::Instance().WriteMsg("RobotController", "Configuration file has no team_number, setting to default value: " + _toString(conf.team_number()), Logger::Error);
	}
	else
	{
		conf.set_team_number(value);
		gm_state.set_team_number(value);
	}

	//If color is changed default configuration color does need to be changed
	std::string color = "blue";
	gm_state.set_team_color(conf.team_color());

	if (!config.QueryElement("default_team_color", color))
		Logger::Instance().WriteMsg("RobotController", "Configuration file has no team_color, setting to default value: " + _toString(gm_state.team_color()), Logger::Error);

	if (color == "blue")
	{
		conf.set_team_color(TEAM_BLUE);
		gm_state.set_team_color(TEAM_BLUE);
	}
	else if (color == "red")
	{
		conf.set_team_color(TEAM_RED);
		gm_state.set_team_color(TEAM_RED);
	}
	else
		Logger::Instance().WriteMsg("RobotController", "undefined color in configuration, setting to default value: " + _toString(gm_state.team_color()), Logger::Error);

	if (!config.QueryElement("gm_port", value))
		Logger::Instance().WriteMsg("RobotController", "Configuration file has no gm_port, setting to default value: " + _toString(conf.port()), Logger::Error);
	else
		conf.set_port(value);

	return true;
}
