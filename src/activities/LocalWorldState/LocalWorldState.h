#ifndef LocalWorldState_H
#define LocalWorldState_H

#include <string>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <pthread.h>
#include <netinet/in.h>
#include <math.h>
#include <csignal>

#include "core/include/IActivity.hpp"

#include "hal/robot/generic_nao/robot_consts.h"

#include "messages/SensorsMessage.pb.h"
#include "messages/VisionObservations.pb.h"
#include "messages/RoboCupGameControlData.h"
#include "messages/Gamecontroller.pb.h"
#include "messages/WorldInfo.pb.h"
#include "messages/motion.pb.h"

#include "BallFilter.h"
#include "KLocalization.h"
#include "PracticalSocket.h"

ACTIVITY_START
class LocalWorldState: public IActivity
{

public:
	ACTIVITY_CONSTRUCTOR(LocalWorldState)
	ACTIVITY_VISIBLE ~LocalWorldState()
	{
		if (serverpid != -1)
			pthread_cancel(serverpid);

		delete sock;
	}
	int ACTIVITY_VISIBLE IEX_DIRECTIVE_HOT Execute();

	void ACTIVITY_VISIBLE UserInit();
	void ACTIVITY_VISIBLE Reset();
	void ProcessMessages();

	std::string ACTIVITY_VISIBLE GetName()
	{
		return "LocalWorldState";
	}

	void RobotPositionMotionModel(KLocalization::KMotionModel & MModel);
	void calculate_ball_estimate(KLocalization::KMotionModel const & MModel);

private:
	//check if the first odometry data had come
	bool firstOdometry;

	int serverpid;

    //read xml files
    void ReadLocConf();
    void ReadFieldConf();
    void ReadFeatureConf();
    void ReadTeamConf();
    void ReadRobotConf();

	//WorldInfo message
	WorldInfo MyWorld;

	//Current agent position
	KLocalization::belief AgentPosition;

	//localization world
	KLocalization localizationWorld;

	//Observations and odometry data to feed localization
	vector<KLocalization::KObservationModel> currentObservation;
	vector<KLocalization::KObservationModel> currentAmbiguousObservation;
	KLocalization::KMotionModel robotmovement;

	//Use a particle to store the odometry data
	KLocalization::partcl TrackPoint;
	KLocalization::partcl TrackPointRobotPosition;

	//Messages to feed the guis
	LocalizationData DebugData;
	LocalizationDataForGUI DebugDataForGUI;

	//Store the odometry data from the sensors message
	SensorData PosX;
	SensorData PosY;
	SensorData Angle;

	//Our ball filter
	BallFilter myBall;

	//Message we need to read
	boost::shared_ptr<const GameStateMessage> gsm;
	boost::shared_ptr<const ObservationMessage> obsm;
	boost::shared_ptr<const RobotPositionMessage> rpsm;
	boost::shared_ptr<const LocalizationResetMessage> lrm;
	boost::shared_ptr<const MotionStateMessage> sm;
	MotionStateMessage::ActionType currentRobotAction;

	//Check if fall of the robot just began
	bool fallBegan;

	//Logger for all input and outputs for every execute cycle
	void InputOutputLogger();
	
	//Time variables
	boost::posix_time::ptime timeStart, timeStop;
	boost::posix_time::ptime lastObservationTime;
	boost::posix_time::ptime lastFilterTime;
	boost::posix_time::ptime now;

	//Usefull for gui tools
	static void * StartServer(void * kati);
	pthread_t acceptthread;
	static TCPSocket *sock;
	int LocalizationData_Load(vector<KLocalization::KObservationModel> & Observation, KLocalization::KMotionModel & MotionModel);
	int LocalizationDataForGUI_Load();
	void Send_LocalizationData();
	static bool debugmode;
	header incommingheader;
	header outgoingheader;
	int size;
	char *data;
    bool actionKick;
	bool gameMode;
};
ACTIVITY_END
#endif
