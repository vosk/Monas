
#include "architecture/statechartEngine/ICondition.h"
#include "messages/AllMessagesHeader.h"	
#include "activities/ApproachBall/ApproachBall.h"		
#include "tools/toString.h"
#include "tools/logger.h"
			
class TrCond_ScanTO0_3_2_3_3_3 : public statechart_engine::ICondition {
			
public:

	void UserInit () {
		_blk->subscribeTo("behavior", 0);
		_blk->subscribeTo("vision", 0);
		
	}

	bool Eval() {
		/* ballfound!=0 */
		Logger::Instance().WriteMsg("TrCond_ScanTO0_3_2_3_3_3", "  ", Logger::Info);
		ApproachBall ab;
		boost::shared_ptr<const HeadToBMessage> hbm = _blk->readState<HeadToBMessage>("behavior");
		boost::shared_ptr<const GameStateMessage> gsm = _blk->readState<GameStateMessage>("behavior");
		boost::shared_ptr<const ObservationMessage> obsm = _blk->readSignal<ObservationMessage>("vision");
		if(obsm.get()!=0 ){
			ab.readyToKick(obsm);
			ab.ballAway(obsm);
		}
		if(gsm.get()!=0 && gsm->player_state()==PLAYER_PLAYING)
			return true;
		if(hbm.get()!=0 && hbm->ballfound()!=0)
			return true;
		return false;
    }
};
		
