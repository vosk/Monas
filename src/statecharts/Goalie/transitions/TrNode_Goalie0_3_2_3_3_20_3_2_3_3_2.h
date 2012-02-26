
#include "architecture/statechartEngine/ICondition.h"
#include "messages/AllMessagesHeader.h"		
#include "tools/BehaviorConst.h"	
// ScanTOScan
class TrCond_Goalie0_3_2_3_3_20_3_2_3_3_2 : public statechart_engine::ICondition {
			
public:

	void UserInit () {
		_blk->updateSubscription("behavior",msgentry::SUBSCRIBE_ON_TOPIC);

	}

	bool Eval() {
		/* TimeoutCheck(behavior) &&  behavior.State.GameStateMessage.player_state()==PLAYER_PLAYING && (behavior.State.HeadToBMessage ==NULL || behavior.State.HeadToBMessage.ballfound()==0) */
		
		boost::shared_ptr<const GameStateMessage> var_621149599 = _blk->readState<GameStateMessage> ("behavior" );
		boost::shared_ptr<const HeadToBMessage> var_1901744185 = _blk->readState<HeadToBMessage> ("behavior" );
		boost::shared_ptr<const TimeoutMsg > msg = _blk->readState< TimeoutMsg > ("behavior");

		
		_blk->process_messages();
		if( msg.get() == 0){
			return true;
		}
 		if(msg->wakeup()=="")
			return true;

		if ( var_1901744185.get() == 0 )
			 return true;
 		if ( var_621149599.get() != 0  ){	
				return ( boost::posix_time::from_iso_string(msg->wakeup())<boost::posix_time::microsec_clock::local_time() &&  var_621149599->player_state()==PLAYER_PLAYING && ( var_1901744185->ballfound()==0) );
		}return false;

		
    }
};
		
#include "architecture/statechartEngine/IAction.h"
#include "architecture/statechartEngine/TimoutAciton.h"
// ScanTOScan
class TrAction_Goalie0_3_2_3_3_20_3_2_3_3_2 : public statechart_engine::
				TimeoutAction {
		/* TimeoutAction.behavior.250 */
	public:	TrAction_Goalie0_3_2_3_3_20_3_2_3_3_2() : statechart_engine::TimeoutAction( "behavior", 250 ) { 
		;
	 }
};

		