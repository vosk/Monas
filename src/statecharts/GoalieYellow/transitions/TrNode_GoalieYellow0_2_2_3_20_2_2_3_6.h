
#include "architecture/statechartEngine/ICondition.h"
#include "messages/AllMessagesHeader.h"		
#include "tools/BehaviorConst.h"	
#include "tools/logger.h"
#include "tools/toString.h"
// 0.3.2.3.2_TO_followBall
class TrCond_GoalieYellow0_2_2_3_20_2_2_3_6 : public statechart_engine::ICondition {		
public:
	void UserInit () {
		_blk->updateSubscription("behavior",msgentry::SUBSCRIBE_ON_TOPIC);
		_blk->updateSubscription("worldstate",msgentry::SUBSCRIBE_ON_TOPIC);

	}

	bool Eval() {
		/* behavior.State.HeadToBMessage.ballfound()>0 && 
ballAway(worldstate.Data.WorldInfo) */
		boost::shared_ptr<const HeadToBMessage> var_1901744185 = _blk->readState<HeadToBMessage> ("behavior" );
		boost::shared_ptr<const WorldInfo> var_1111221333 = _blk->readData<WorldInfo> ("worldstate" );

		Logger::Instance().WriteMsg("0.3.2.3.2_TO_followBall, behavior.State.HeadToBMessage.ballfound()>0 &&  ballAway(worldstate.Data.WorldInfo)" ,_toString((var_1901744185.get()!=0 && var_1901744185->ballfound()>0) &&  ballAway(var_1111221333)),  Logger::Info);
		return ( (var_1901744185.get()!=0 && var_1901744185->ballfound()>0) &&  ballAway(var_1111221333) );
    }
};
		