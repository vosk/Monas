#ifndef BEHAVIOR_H
#define BEHAVIOR_H

#include "architecture/executables/IActivity.h"

#include "messages/motion.pb.h"
#include "messages/SensorsMessage.pb.h"
#include "messages/VisionObservations.pb.h"
#include "messages/Kimage.pb.h"
#include "messages/Gamecontroller.pb.h"
#include "messages/ObstacleAvoidanceMessage.pb.h"
#include "messages/WorldInfo.pb.h"
#include "tools/XML.h"
#include "tools/XMLConfig.h"
#include "architecture/archConfig.h"

#include <boost/date_time/posix_time/posix_time.hpp>

#define PITCHMIN -0.55
#define	PITCHMAX 0.33
#define YAWMIN 0.8
#define YAWMAX 1.35
#define PITCHSTEP 0.3
#define YAWSTEP 0.4

#define OVERSH 0.08
#define WAITFOR 40

#define INIT_VALUE -111.0
#define numOfFakeObstacles 15

ACTIVITY_START
class Behavior: public IActivity
{

public:
	ACTIVITY_CONSTRUCTOR(Behavior);
	std::string ACTIVITY_VISIBLE GetName()
	{
		return "Behavior";
	}
	void ACTIVITY_VISIBLE  UserInit();
	void ACTIVITY_VISIBLE  Reset();
	int ACTIVITY_VISIBLE IEX_DIRECTIVE_HOT Execute();

	void read_messages();

	void GetGameState();
	bool ClosestRobot();
	void GetPosition();
	void UpdateOrientationPlus();
	void CheckForBall();
	int MakeTrackBallAction();
	int MakeTrackBallActionNoBmsg();
	void checkForPenaltyArea();

	void HeadScanStepRaster();
	void HeadScanStepHigh(float yaw_limit);
	void HeadScanStepSmart();
	void HeadScanStepIntelligent();
	float lookAtPointYaw(float x, float y);
	float lookAtPointPitch(float x, float y);
	float lookAtPointRelativeYaw(float x, float y);
	float lookAtPointRelativePitch(float x, float y);

	enum ROLES
	{
	    ATTACKER=0, CENTER_FOR
	};

	void Kick(int side);

private:

	void velocityWalk(double ix, double iy, double it, double f);
	void littleWalk(double x, double y, double th);
	void approachBall(double ballX, double ballY);
	void approachBallNewWalk(double ballX, double ballY);
	void approachBallRoleDependent(double ballX, double ballY);

	void stopRobot();
	void generateFakeObstacles();
	void pathPlanningRequestRelative(float target_x, float target_y, float target_phi);
	void pathPlanningRequestAbsolute(float target_x, float target_y, float target_phi);
	void gotoPosition(float target_x, float target_y, float target_phi);

	void calibrate();

	bool readConfiguration(const std::string& file_name); 		//this function reads team's configuration info from XML file
	bool readRobotConfiguration(const std::string& file_name); 	//this function reads robot's initial position in the field from XML file
	bool readGoalConfiguration(const std::string& file_name); 	//this function reads the position of the goals

	float dist(float x1, float y1, float x2, float y2);
	void test();

	/* Incoming Messages */
	boost::shared_ptr<const AllSensorValuesMessage> allsm;
	boost::shared_ptr<const BallTrackMessage>  bmsg;
	boost::shared_ptr<const GameStateMessage>  gsm;
	boost::shared_ptr<const ObstacleMessageArray>  om;
	boost::shared_ptr<const WorldInfo>  wim;
	boost::shared_ptr<const SharedWorldInfo>  swim;

	/* Outgoing Messages */
	MotionWalkMessage* wmot;
	MotionHeadMessage* hmot;
	MotionActionMessage* amot;
	LocalizationResetMessage* locReset;
	PathPlanningRequestMessage* pprm;
	ObstacleMessage* fom; //fake obstacle message

	int leftright;
	float headpos;

	short ballfound;
	bool scanforball;
	bool startscan;
	bool scanOK;
	bool pathOK;
	float targetYaw;
	float targetPitch;
	SensorData HeadYaw;
	SensorData HeadPitch;
	float psign, ysign;
	unsigned waiting;
	int calibrated;

	int forball, forpost;

	bool kickoff;
	float initX[2], initY[2], initPhi[2]; // initial game position in the field!!!!
	float fakeObstacles[numOfFakeObstacles][2]; // fake obstacles to avoid entering the penalty area.
	double oppGoalX, oppGoalY, ownGoalX, ownGoalY;
	double oppGoalLeftX, oppGoalLeftY, oppGoalRightX, oppGoalRightY;
	double ownGoalLeftX, ownGoalLeftY, ownGoalRightX, ownGoalRightY;
	float cX, cY, ct;
	float bd, bb, bx, by, posx, posy;
	float trackYaw, trackPitch;
	int side;
	float robot_x, robot_y, robot_phi, robot_confidence;

	bool readytokick;
	int back;
	int direction;
	double orientation;

	int gameState;
	int teamColor;
	int playerNumber;
	int role;

	bool readRobotConf;

	boost::posix_time::ptime lastmove, lastball, lastwalk, lastplay, lastpenalized, ballseen, lastrolechange;
};

ACTIVITY_END
#endif
