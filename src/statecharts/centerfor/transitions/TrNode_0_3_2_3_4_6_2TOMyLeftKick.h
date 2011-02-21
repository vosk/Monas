
#include "architecture/statechartEngine/ICondition.h"
#include "messages/VisionObservations.pb.h"
#include "architecture/archConfig.h"
#include "tools/toString.h"
#include "tools/logger.h"
			
class TrCond_0_3_2_3_4_6_2TOMyLeftKick : public statechart_engine::ICondition {
			
public:

	void UserInit () { 
		_blk->subscribeTo("vision", 0);
      }

	bool Eval() {
		boost::shared_ptr<const ObservationMessage> obsm = _blk->read_signal<ObservationMessage> ("ObservationMessage");
		
		if (obsm.get()==0){
			Logger::Instance().WriteMsg("TrCond_0_3_2_3_4_6_2TOMyLeftKick", "FALSE NO OBSM", Logger::Info);
			return false;
		}else if ((obsm->ball().dist() * sin(obsm->ball().bearing()) > 0.0) ){
			Logger::Instance().WriteMsg("TrCond_0_3_2_3_4_6_2TOMyLeftKick", "TRUE", Logger::Info);
			return true;
		}else{
			Logger::Instance().WriteMsg("TrCond_0_3_2_3_4_6_2TOMyLeftKick", "FALSE", Logger::Info);
			return false;
		}
    }
};
		
