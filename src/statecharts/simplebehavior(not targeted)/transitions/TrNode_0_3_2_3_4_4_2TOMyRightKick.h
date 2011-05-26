
#include "architecture/statechartEngine/ICondition.h"
#include "messages/VisionObservations.pb.h"
#include "architecture/archConfig.h"
#include "messages/RoboCupGameControlData.h"		
#include "messages/Gamecontroller.pb.h"	
#include "tools/logger.h"
#include "tools/toString.h"
			
class TrCond_0_3_2_3_4_4_2TOMyRightKick : public statechart_engine::ICondition {
			
public:

	void UserInit () { 
		_blk->subscribeTo("behavior", 0);
		_blk->subscribeTo("vision", 0);
      }

	bool Eval() {
		//_blk->process_messages();
		//boost::shared_ptr<const GameStateMessage> gsm = _blk->read_state<GameStateMessage> ("GameStateMessage");
		boost::shared_ptr<const ObservationMessage> obsm = _blk->readSignal<ObservationMessage> ("vision");
		
	//	if(gsm.get()==0)
	//		return false;
	//	else
	 if (obsm.get()==0){
			//std::cout<<"*************Transition MyRightKick FALSE*****************"<<std::endl;
			//Logger::Instance().WriteMsg("TrCond_0_3_2_3_4_4_2TOMyRightKick", "FALSE", Logger::Info);
			return false;
		}else if (!(obsm->ball().dist() * sin(obsm->ball().bearing()) > 0.0) ) {//&& gsm->player_state()==PLAYER_PLAYING) {
			//std::cout<<"*************Transition MyRightKick TRUE*****************"<<std::endl;
			//Logger::Instance().WriteMsg("TrCond_0_3_2_3_4_4_2TOMyRightKick", "TRUE", Logger::Info);
			return true;
		}else{
			//std::cout<<"*************Transition MyRightKick FALSE*****************"<<std::endl;
			//Logger::Instance().WriteMsg("TrCond_0_3_2_3_4_4_2TOMyRightKick", "FALSE", Logger::Info);
			return false;
		}
    } 
};
		
