
#ifndef _WalktoPost_h_
#define _WalktoPost_h_ 1

#include "architecture/IActivity.h"
#include "messages/motion.pb.h"
#include "messages/SensorsMessage.pb.h"
#include "messages/VisionObservations.pb.h"
#include "messages/Gamecontroller.pb.h"
#include "messages/ObstacleAvoidanceMessage.pb.h"
#include "messages/BehaviorMessages.pb.h"

#ifndef TO_RAD
#define TO_RAD 0.01745329f
#endif	

#define DONOTHING 0
#define CALIBRATE 1
#define SCANFORBALL 2
#define SCANFORPOST 3
#define BALLTRACK 4
			
class WalktoPost : public IActivity {
			
public:
	
	int Execute ();
	
	void UserInit ();
	
	std::string GetName ();
	
private:	
		MotionWalkMessage* wmot;
		BToHeadMessage* bhmsg;
		boost::shared_ptr<const ObservationMessage> obsm;
		boost::shared_ptr<const GameStateMessage> gsm;
		int headaction;

		void velocityWalk(double x, double y, double th, double f);
		void littleWalk(double x, double y, double th, int s);		
};

#endif // _WalktoPost_h_
	