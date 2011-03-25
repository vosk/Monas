
#include "architecture/statechartEngine/ICondition.h"
#include "architecture/archConfig.h"
#include "tools/logger.h"
#include "tools/toString.h"
#include "messages/RoboCupGameControlData.h"	
#include "messages/Gamecontroller.pb.h"
			
class TrCond_FollowTheBall_one_or_more_times_TO0_3_2_3_3_5 : public statechart_engine::ICondition {
			
public:

	void UserInit () { 
		_blk->subscribeTo("behavior", 0);
		}

	bool Eval() {
		 boost::shared_ptr<const GameStateMessage> gsm = _blk->readState<GameStateMessage> ("behavior");
   if (gsm.get()!=0 && gsm->player_state()!=PLAYER_PLAYING){
		 
	// Logger::Instance().WriteMsg("TrCond_FollowTheBall_one_or_more_times_TO0_3_2_3_3_6",  " TRUE !PLAYING", Logger::Info);
		 return true;
		 }
     if( gsm->player_state()==PLAYER_PLAYING){	
	//	Logger::Instance().WriteMsg("TrCond_FollowTheBall_one_or_more_times_TO0_3_2_3_3_6",  " FALSE PLAYING", Logger::Info);
        return false;
		}
	// Logger::Instance().WriteMsg("TrCond_FollowTheBall_one_or_more_times_TO0_3_2_3_3_6",  " TRUE", Logger::Info);
	 return true;
    }
};
	


#include "architecture/statechartEngine/IAction.h"
#include "architecture/archConfig.h"
#include "tools/logger.h"
#include "tools/toString.h"
#include "messages/motion.pb.h"
			
class TrAction_FollowTheBall_one_or_more_times_TO0_3_2_3_3_5 : public statechart_engine::IAction {
			
public:

	MotionWalkMessage* wmot;

	void UserInit () { 
		_blk->subscribeTo("motion", 0);
		wmot = new MotionWalkMessage();
	}

	int Execute() {

		wmot->set_command("setWalkTargetVelocity");
		wmot->set_parameter(0, 0);
		wmot->set_parameter(1, 0);
		wmot->set_parameter(2, 0);
		wmot->set_parameter(3, 1);
		_blk->publishSignal(*wmot, "motion");
		return 0;
    }


};
		