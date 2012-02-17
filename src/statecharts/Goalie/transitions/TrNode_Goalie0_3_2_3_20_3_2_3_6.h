
#include "architecture/statechartEngine/ICondition.h"
#include "messages/AllMessagesHeader.h"		
#include "tools/BehaviorConst.h"	
// 0.3.2.3.2TOfollowBall
class TrCond_Goalie0_3_2_3_20_3_2_3_6 : public statechart_engine::ICondition {
			
public:

	void UserInit () {
		_blk->updateSubscription("behavior",msgentry::SUBSCRIBE_ON_TOPIC);

	}

	bool Eval() {
		/* behavior.State.HeadToBMessage.ballfound()>0 && ballAway(behavior.Data.WorldInfo) */
		
		boost::shared_ptr<const HeadToBMessage> var_1901744185 = _blk->readState<HeadToBMessage> ("behavior" );
		boost::shared_ptr<const WorldInfo> var_1071592760 = _blk->readData<WorldInfo> ("behavior" );

		
		if ( var_1901744185.get() != 0  && var_1071592760.get() != 0 ){	
				return ( var_1901744185->ballfound()>0 && ballAway(var_1071592760) );
		}return false;

		
    }
};
		