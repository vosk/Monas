
#include "architecture/statechartEngine/ICondition.h"
#include "messages/timeout.pb.h"		
#include <boost/date_time/posix_time/ptime.hpp>

#include <boost/date_time/posix_time/posix_time_types.hpp>
#include "tools/logger.h"
#include "tools/toString.h"
	
class TrCond_decisionTOdecision : public statechart_engine::ICondition {
			
public:
void UserInit () {
		_blk->subscribeTo("behavior",0); 
		}

	bool Eval() {
				//Logger::Instance().WriteMsg("TrCond_decisionTOdecision", "TRUE", Logger::Info);
	//	boost::shared_ptr<const TimeoutMsg> tmsg = _blk->read_state<TimeoutMsg> ("TimeoutMsg");
		//std::string stime = tmsg->wakeup();
		//if (tmsg==0 || stime==""){
			//std::cout<<"*************Transition TrCond_decisionTOdecision FALSE  tmsg==0 *****************"<<std::endl;
			//return false;
		//}
		//int statetimeout = (boost::posix_time::microsec_clock::local_time() - boost::posix_time::from_iso_string(stime) ).total_microseconds();
		
		//if(statetimeout>0){
			//std::cout<<"*************Transition TrCond_decisionTOdecision TRUE *****************"<<std::endl;
			//return true;
			//}
		//std::cout<<"*************Transition TrCond_decisionTOdecision FALSE *****************"<<std::endl;
		//return false;
		//Refresh state
		_blk->publish_all();
		SysCall::_usleep(200000);
		_blk->process_messages();
		/* TRUE */
		return true;

	
    }
	
};
		