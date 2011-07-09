
#include "architecture/statechartEngine/ICondition.h"
#include "messages/AllMessagesHeader.h"			
#include "tools/toString.h"
#include "tools/logger.h"
#include "activities/ApproachBall/ApproachBall.h"				
			
class TrCond_0_3_2_3_2TOkick : public statechart_engine::ICondition {
			
public:

		/* ballfound!=0 and !ballaway and readyTokick */
	void UserInit () {
		_blk->subscribeTo("behavior", 0);
		_blk->subscribeTo("vision", 0);
	}

	bool Eval() {
		Logger::Instance().WriteMsg("TrCond_0_3_2_3_2TOkick"," ", Logger::Info);
		//boost::shared_ptr<const ObservationMessage> obsm = _blk->readSignal<ObservationMessage>("vision");
		boost::shared_ptr<const HeadToBMessage> hbm = _blk->readState<HeadToBMessage>("behavior");
		boost::shared_ptr<const WorldInfo> wimsg  = _blk->readData<WorldInfo>("behavior");
		
		ApproachBall ab;
		if(hbm.get()!=0 && hbm->ballfound()!=0){
			if(wimsg.get()!=0 && wimsg->balls_size()!=0 && !ab.ballAway(wimsg) && ab.readyToKick(wimsg))
				return true;
		}
		return false;
    }
};
		