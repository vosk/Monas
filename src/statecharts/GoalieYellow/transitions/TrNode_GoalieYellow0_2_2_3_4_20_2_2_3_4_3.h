
#include "architecture/statechartEngine/ICondition.h"
#include "messages/AllMessagesHeader.h"		
#include "tools/BehaviorConst.h"	
#include "tools/logger.h"
#include "tools/toString.h"
// ApproachBall_TO_0.2.2.3.4.3
class TrCond_GoalieYellow0_2_2_3_4_20_2_2_3_4_3 : public statechart_engine::ICondition {		
public:
	void UserInit () {
		_blk->updateSubscription("behavior",msgentry::SUBSCRIBE_ON_TOPIC);
		_blk->updateSubscription("worldstate",msgentry::SUBSCRIBE_ON_TOPIC);

	}

	bool Eval() {
		/* behavior.State.HeadToBMessage.ballfound()==0 || 
worldstate.State.GameStateMessage.player_state()!=PLAYER_PLAYING || worldstate.State.GameStateMessage==NULL|| ballAway(worldstate.Data.WorldInfo) || readyToKick(worldstate.Data.WorldInfo) */
		boost::shared_ptr<const HeadToBMessage> var_1901744185 = _blk->readState<HeadToBMessage> ("behavior" );
		boost::shared_ptr<const GameStateMessage> var_1263977940 = _blk->readState<GameStateMessage> ("worldstate" );
		boost::shared_ptr<const WorldInfo> var_1111221333 = _blk->readData<WorldInfo> ("worldstate" );

		Logger::Instance().WriteMsg("ApproachBall_TO_0.2.2.3.4.3, behavior.State.HeadToBMessage.ballfound()==0 ||  worldstate.State.GameStateMessage.player_state()!=PLAYER_PLAYING || worldstate.State.GameStateMessage==NULL|| ballAway(worldstate.Data.WorldInfo) || readyToKick(worldstate.Data.WorldInfo)" ,_toString((var_1901744185.get()!=0 && var_1901744185->ballfound()==0) ||  (var_1263977940.get()!=0 && var_1263977940->player_state()!=PLAYER_PLAYING) || var_1263977940.get()==0 || ballAway(var_1111221333) || readyToKick(var_1111221333)),  Logger::Info);
		return ( (var_1901744185.get()!=0 && var_1901744185->ballfound()==0) ||  (var_1263977940.get()!=0 && var_1263977940->player_state()!=PLAYER_PLAYING) || var_1263977940.get()==0 || ballAway(var_1111221333) || readyToKick(var_1111221333) );
    }
};
		