
#include "architecture/statechartEngine/ICondition.h"
#include "messages/AllMessagesHeader.h"			
#include "activities/ApproachBall/ApproachBall.h"			
#include "tools/toString.h"
#include "tools/logger.h"
			
class TrCond_ApproachBallTO0_3_2_3_5_3 : public statechart_engine::ICondition {
			
public:
	/* ballfound==0 ||readyTokick */
	void UserInit () {
		_blk->subscribeTo("behavior", 0);
		_blk->subscribeTo("vision", 0);
	}

	bool Eval() {
		Logger::Instance().WriteMsg("TrCond_ApproachBallTO0_3_2_3_5_3", "  ", Logger::Info);
	//	boost::shared_ptr<const ObservationMessage> obsm = _blk->readSignal<ObservationMessage>("vision");
		boost::shared_ptr<const HeadToBMessage> hbm = _blk->readState<HeadToBMessage>("behavior");
		boost::shared_ptr<const WorldInfo> wimsg  = _blk->readData<WorldInfo>("behavior");
		
		ApproachBall ab;
		boost::shared_ptr<const GameStateMessage> gsm = _blk->readState<GameStateMessage>("behavior");
		if(gsm.get()!=0 && gsm->player_state()==PLAYER_PLAYING)
			return true;
		if(hbm.get()!=0 && hbm->ballfound()==0)
			return true;
		if(wimsg.get()!=0 && wimsg->balls_size()!=0 && ab.readyToKick(wimsg))
				return true;
		if(wimsg.get()!=0 && wimsg->balls_size()!=0 && ab.ballAway(wimsg))
			return true;
		return false;
    }
};
