
#include "architecture/statechartEngine/ICondition.h"
#include "messages/AllMessagesHeader.h"		
#include "tools/BehaviorConst.h"	
// 0.2.2.5.4.1_TO_GoToPosition
class TrCond_GoalieYellow0_2_2_5_4_10_2_2_5_4_2 : public statechart_engine::ICondition {		
public:
	void UserInit () {
		_blk->updateSubscription("behavior",msgentry::SUBSCRIBE_ON_TOPIC);

	}
	bool Eval() {
		/* behavior.State.LocalizeDone.moveon()  */
		boost::shared_ptr<const LocalizeDone> var_373152964 = _blk->readState<LocalizeDone> ("behavior" );
	
				return ( (var_373152964.get()!=0 && var_373152964->moveon() ) );	
    }
};
		
#include "architecture/statechartEngine/IAction.h"
#include "architecture/statechartEngine/TimoutAciton.h"
// 0.2.2.5.4.1_TO_GoToPosition
class TrAction_GoalieYellow0_2_2_5_4_10_2_2_5_4_2 : public statechart_engine::
				TimeoutAction {
		/* TimeoutAction.behavior.250 */
	public:	TrAction_GoalieYellow0_2_2_5_4_10_2_2_5_4_2() : statechart_engine::TimeoutAction( "behavior", 250 ) { 
		;
	 }
};

		