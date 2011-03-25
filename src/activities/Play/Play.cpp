#include "Play.h"
#include "architecture/archConfig.h"

#include "tools/logger.h"
#include "tools/toString.h"
#include "messages/RoboCupGameControlData.h"
namespace {
	ActivityRegistrar<Play>::Type temp("Play");
}
using namespace std;
Play::Play() {
}

void Play::UserInit() {
	 _blk->process_messages();
	readConfiguration(ArchConfig::Instance().GetConfigPrefix() + "/team_config.xml");

	_blk->subscribeTo("vision", 0);
	_blk->subscribeTo("sensors", 0);
	_blk->subscribeTo("behavior", 0);

	wmot = new MotionWalkMessage();
	wmot->add_parameter(0.0f);
	wmot->add_parameter(0.0f);
	wmot->add_parameter(0.0f);
	wmot->add_parameter(0.0f);

	amot = new MotionActionMessage();
	bhmsg = new BToHeadMessage();
	lastObsm = new ObservationMessage();

	ballfound = 0;
	calibrated = 0;

	play = false;
	kickoff = false;

	scancompleted = false;
	curraction = 0;
	prevaction = 0;

	readytokick = false;
	back = 0;
	direction = 1;
	isScaning = false;

	obstacleFront = false;
	gameState = PLAYER_INITIAL;
	oldGameState = PLAYER_INITIAL;
	teamColor = TEAM_BLUE;
	orientation = 0;

	srand(time(0));

	Logger::Instance().WriteMsg("Play", "Initialized", Logger::Info);
}

int Play::Execute() {
	cout << "Execute" << endl;
	prevaction = curraction;
	oldGameState = gameState;
	read_messages();

	if (hbm != 0) {
		calibrated = hbm->calibrated();
		ballfound = hbm->ballfound();
	}
	if(scm != 0){
		scancompleted = scm->scancompleted();
	}else{
		scancompleted = false;
	}

	if(obsm!=0)
		lastObsm->CopyFrom(*obsm);
	else
		readytokick = false;

	cout << "calibrated " << calibrated << "Play" << endl;
	cout << "ballfound " << ballfound << "Play" << endl;
	cout << "scancompleted " << scancompleted << "Play" << endl;

	if (gsm != 0) {
		Logger::Instance().WriteMsg("Play", " Player_state " + _toString(gsm->player_state()), Logger::ExtraExtraInfo);
		gameState = gsm->player_state();
		//teamColor = gsm->team_color();

		if (gameState == PLAYER_PLAYING) {
			if (calibrated == 2) {
				play = true;
			} else if (calibrated == 0) {
				curraction = CALIBRATE;
			} else if (calibrated == 1) {
				// wait
			}
		} else if (gameState == PLAYER_INITIAL) {
			play = false;
		} else if (gameState == PLAYER_READY) {
			play = false;
			curraction = CALIBRATE;
		} else if (gameState == PLAYER_SET) {
			play = false;
			kickoff = gsm->kickoff();
			orientation = 0;
		} else if (gameState == PLAYER_FINISHED) {
			play = false;
		} else if (gameState == PLAYER_PENALISED) {
			play = false;
			curraction = CALIBRATE;
			littleWalk(0.0, 0.0, 0.0, 1);
		}
	}

	if (gameState == PLAYER_PLAYING) {
		if (calibrated == 2) {
			play = true;
		}else if (calibrated == 0) {
			curraction = CALIBRATE;
		}
	}

	//if (play) mgltest();
	//return 1;

	if (play) {

		float X = 0.0, Y = 0.0, theta = 0.0;
		float bd = 0.0, bx = 0.0, by = 0.0, bb = 0.0;
		float posx=0.14, posy=0.035;
		//if (obsm != 0) {

			/*if (obsm->regular_objects_size() > 0) {
				if (((obsm->regular_objects(0).object_name() == "BlueGoal") && (teamColor == TEAM_RED)) || ((obsm->regular_objects(0).object_name() == "YellowGoal") && (teamColor
						== TEAM_BLUE))) {
					double ogb = obsm->regular_objects(0).bearing();
					if (fabs(ogb) < +45 * TO_RAD) {
						orientation = 0;
					} else if (ogb > +45 * TO_RAD) {
						orientation = 1;
					} else if (ogb < -45 * TO_RAD) {
						orientation = 3;
					}
				}

				if (((obsm->regular_objects(0).object_name() == "YellowGoal") && (teamColor == TEAM_RED)) || ((obsm->regular_objects(0).object_name() == "BlueGoal") && (teamColor
						== TEAM_BLUE))) {
					double mgb = obsm->regular_objects(0).bearing();
					if (fabs(mgb) < +45 * TO_RAD) {
						orientation = 2;
					} else if (mgb > +45 * TO_RAD) {
						orientation = 3;
					} else if (mgb < -45 * TO_RAD) {
						orientation = 1;
					}
				}
				Logger::Instance().WriteMsg("Play", "Orientation: " + _toString(orientation) + " Team Color " + _toString(teamColor), Logger::Info);
			}*/

			if (ballfound > 0) {
				curraction = BALLTRACK;
				isScaning = false;
				int side ;//= 1;
				bd = lastObsm->ball().dist();
				bb = lastObsm->ball().bearing();
				bx = lastObsm->ball().dist() * cos(lastObsm->ball().bearing()); //kanw tracking me to swma
				by = lastObsm->ball().dist() * sin(lastObsm->ball().bearing());
				side = (bb > 0) ? 1 : -1;

				Logger::Instance().WriteMsg("Play", "Measurements - Distance: " + _toString(bd) + "  Bearing: " + _toString(bb) + "  BX: " + _toString(bx) + "  BY: "
						+ _toString(by), Logger::Info);


				readytokick=true;
                if ( fabs( bx - posx ) > 0.015 || fabs( by - (side*posy) ) > 0.015) {
                    //Y = gainFine * ( by - (side*posy) );
                    readytokick = false;
                }

				if (!readytokick) {
                    if(bd>0.5){
                        float X=0,Y=0,th=0;
                        if(fabs(bx)>0.15) X=1;
                        if(fabs(by)>0.15) Y=0.3*side;
                        velocityWalk(X,Y,0.2*bb,1);
                    }
                    else
                    {
                        float offsety=side*posy;
                        float g=0.3;
                        littleWalk((bx-posx)*g,(by-offsety)*g,0,1);
                    }
				}
			}
		//} else {
		//	readytokick = false;
	//	}

		/* Ready to take action */
		if (readytokick) {
			obstacleFront = false;
			//if (om!=0)
			//if (om->direction(1) == 1)
			//obstacleFront = true;

			if (kickoff) {
				//if (mglRand()<0.5) {
				if ((mglRand() < 1.0) && !obstacleFront) {
					littleWalk(0.2, 0.0, 0.0, 2);
				} else {
					if (by > 0.0) {
						amot->set_command("SoftLeftSideKick");
						direction = -1;
					} else {
						amot->set_command("SoftRightSideKick");
						direction = +1;
					}
					_blk->publishSignal(*amot, "motion");
				}
				kickoff = false;
			} else {

				/* **************** Targetted Kicks ********************** */
				/*if (orientation == 0) {
					if (by > 0.0)
						amot->set_command("LeftKick");
					else
						amot->set_command("RightKick");
				} else if (orientation == 1) {
					amot->set_command("HardLeftSideKick");
					direction = -1;
				} else if (orientation == 3) {
					amot->set_command("HardRightSideKick");
					direction = +1;
				} else if (orientation == 2) {
					if (by > 0.0)
						amot->set_command("LeftBackKick");
					else
						amot->set_command("RightBackKick");
				} else {
					if (by > 0.0)
						amot->set_command("SoftLeftSideKick");
					else
						amot->set_command("SoftRightSideKick");
				}

				_blk->publishSignal(*amot, "motion");*/

				/* **************** End of Targetted Kicks ********************** */

				/* **************** Randomized Kicks ********************** */
				//if (mglRand()<0.6) {
				////if ( (mglRand()<1.0) && !obstacleFront ) {
				if (by > 0.0)
					amot->set_command("LeftKick");
				else
					amot->set_command("RightKick");
				_blk->publishSignal(*amot, "motion");
				//}
				//else if (mglRand()<0.5) {
				//if (by > 0.0) {
				//amot->set_command("HardLeftSideKick");
				//direction = -1;
				//}
				//else {
				//amot->set_command("HardRightSideKick");
				//direction = +1;
				//}
				//}
				//else {
				//if (by > 0.0)
				//amot->set_command("LeftBackKick");
				//else
				//amot->set_command("RightBackKick");
				//}
				//Publisher::publish(amot, "motion");
				//back = 0;
				/* **************** End of Randomized Kicks ********************** */
			}

			readytokick = false;
		}

		if (!readytokick && ballfound==0 && !isScaning) {
			velocityWalk(0.0, 0.0, 0.0, 1.0);
			curraction = SCANFORBALL;
			isScaning = true;
		}

		if (!readytokick && scancompleted && ballfound==0) {
			littleWalk(0.0, 0.0, direction * 45 * TO_RAD, 5);
			curraction = SCANFORBALL;
		}

	} else if (!play) { // Non-Play state
		velocityWalk(0.0, 0.0, 0.0, 1.0);
		isScaning = false;
		if (curraction!= CALIBRATE || (oldGameState==gameState && (gameState==PLAYER_PENALISED || gameState== PLAYER_READY)))
			curraction = DONOTHING;
	}
	bhmsg->set_headaction(curraction);

	cout << "headAction " << curraction << "Play" << endl;

	_blk->publishSignal(*bhmsg, "behavior");

	return 0;
}

void Play::read_messages() {

	gsm = _blk->readState<GameStateMessage> ("behavior");
	bmsg = _blk->readSignal<BallTrackMessage> ("vision");
	obsm = _blk->readSignal<ObservationMessage> ("vision");
	//om   = _blk->readSignal<ObstacleMessage> ("ObstacleMessage");
	hbm = _blk->readState<HeadToBMessage> ("behavior");
	scm = _blk->readSignal<ScanMessage> ("behavior");

	Logger::Instance().WriteMsg("Play", "read_messages ", Logger::ExtraExtraInfo);

}

double Play::mglRand() {
	return rand() / double(RAND_MAX);
}

void Play::velocityWalk(double x, double y, double th, double f) {
	wmot->set_command("setWalkTargetVelocity");
	wmot->set_parameter(0, x);
	wmot->set_parameter(1, y);
	wmot->set_parameter(2, th);
	wmot->set_parameter(3, f);
	_blk->publishSignal(*wmot, "motion");
}

void Play::littleWalk(double x, double y, double th, int s) {
	//cout << x << " y " << y << " th " << th<<endl;
	wmot->set_command("walkTo");
	wmot->set_parameter(0, x);
	wmot->set_parameter(1, y);
	wmot->set_parameter(2, th);
	_blk->publishSignal(*wmot, "motion");
}

bool Play::readConfiguration(const std::string& file_name) {
	XMLConfig config(file_name);

	int playernum = -1;
	if (!config.QueryElement("player", playernum))
		Logger::Instance().WriteMsg("Play", "Configuration file has no player, setting to default value: " + _toString(playernum), Logger::Error);

	//If color is changed default configuration color does need to be changed
	std::string color = "blue";
	teamColor = TEAM_BLUE;
	if (!config.QueryElement("default_team_color", color))
		Logger::Instance().WriteMsg("Play", "Configuration file has no team_color, setting to default value: " + color, Logger::Error);
	if (color == "blue")
		teamColor = TEAM_BLUE;
	else if (color == "red")
		teamColor = TEAM_RED;
	else
		Logger::Instance().WriteMsg("Play", "Undefined color in configuration, setting to default value: " + color, Logger::Error);

	return true;
}
