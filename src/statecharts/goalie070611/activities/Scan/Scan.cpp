
#include "Scan.h"


namespace {
    ActivityRegistrar<Scan>::Type temp("Scan");
}

int Scan::Execute() {
	Logger::Instance().WriteMsg("Scan",  " execute", Logger::Info);
	hbm = _blk->readState<HeadToBMessage> ("behavior");
	//scnm = _blk->readSignal<ScanMessage> ("behavior");

	
	LedChangeMessage leds;
	LedValues* l = leds.add_leds();
	l->set_chain("r_ear");
	l->set_color( "off");
	_blk->publishSignal(leds, "leds");	
	if( hbm.get()!=0 ){
		if( hbm->ballfound()>0){
			headaction = BALLTRACK;
			//forball =0;
			//forpost =0;
			//Logger::Instance().WriteMsg(GetName (),  " BALLTRACK", Logger::Info);
		}
		else{		

			//if(scnm!=0 && scnm->scancompleted()){
				//littleWalk(0.0f, 0.0f, 45*TO_RAD);
				//lastTurn = boost::posix_time::microsec_clock::universal_time() + boost::posix_time::seconds(4);
			//}else{
				//if(lastTurn<= )
			velocityWalk(0.0,0.0, 0.0, 1.0);
			//}

		//	if(forball%51!=0 ){
				headaction = SCANFORBALL;
			//	forball++;
			//}else{
				
				//headaction = HIGHSCANFORBALL;
				//forpost++;
				//if( forpost%19==0)
					//forball++;
		//	}
			//Logger::Instance().WriteMsg(GetName (),  " SCANFORBALL", Logger::Info);
		}
	}
		
	bhmsg->set_headaction(headaction);
	_blk->publishSignal(*bhmsg, "behavior");
	
	return 0;
}

void Scan::UserInit () {
	_blk->subscribeTo("behavior", 0);
	headaction = SCANFORBALL;
	bhmsg = new BToHeadMessage();
//	lastTurn = boost::posix_time::microsec_clock::universal_time();
	
//	forpost = 0;
//	forball = 0;
	wmot.add_parameter(0.0f);
	wmot.add_parameter(0.0f);
	wmot.add_parameter(0.0f);
	wmot.add_parameter(0.0f);	
}

std::string Scan::GetName () {
	return "Scan";
}

void Scan::velocityWalk(double x, double y, double th, double f) {
	//Logger::Instance().WriteMsg(GetName (),  " VelocityWalk", Logger::Info);
	wmot.set_command("setWalkTargetVelocity");
	wmot.set_parameter(0, x);
	wmot.set_parameter(1, y);
	wmot.set_parameter(2, th);
	wmot.set_parameter(3, f);
	_blk->publishSignal(wmot, "motion");
}

void Scan::littleWalk(double x, double y, double th) {
	//cout << x << " y " << y << " th " << th<<endl;
	wmot.set_command("walkTo");
	wmot.set_parameter(0, x);
	wmot.set_parameter(1, y);
	wmot.set_parameter(2, th);
	_blk->publishSignal(wmot, "motion");
}


