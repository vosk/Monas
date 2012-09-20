/**
 * @author Cbm
 *
 * Version : $Id$
 * This file was generated by Aldebaran Robotics ModuleGenerator
 */

#include "mainmodule.h"

#include "hal/robot/generic_nao/kAlBroker.h"
#include "hal/robot/generic_nao/robot_consts.h"
#include <alproxies/almemoryproxy.h>
#include <alvalue/alvalue.h>
#include <alcommon/alproxy.h>
#include <alcommon/albroker.h>

//______________________________________________
// constructor
//______________________________________________
mainModule::mainModule(boost::shared_ptr<AL::ALBroker> broker, const std::string& name ): AL::ALModule(broker, name )
{
	setModuleDescription( "This is the Kouretes Team root module " );
	functionName( "Start", "mainModule" ,  "Method to start Talws" );
	BIND_METHOD( mainModule::Start );
	functionName( "Stop", "mainModule" ,  "Method to stop Talws" );
	BIND_METHOD( mainModule::Stop );
	boost::shared_ptr<AL::ALMemoryProxy> memory;

	try
	{
		memory = broker->getMemoryProxy();
		KRobotConfig::Instance().setConfig(KDeviceLists::Interpret::BODY_ID, memory->getData("Device/DeviceList/ChestBoard/BodyNickName"));
		KRobotConfig::Instance().setConfig(KDeviceLists::Interpret::HEAD_ID, memory->getData("RobotConfig/Head/HeadId"));
	}
	catch (AL::ALError& e)
	{
		Logger::Instance().WriteMsg("Sensors", "Error in getting memory proxy", Logger::FatalError);
	}

	std::cout << "KRobot - Found Body ID: '" << KRobotConfig::Instance().getConfig(KDeviceLists::Interpret::BODY_ID) << "'" << std::endl;
	std::cout << "KRobot - Found Head ID: '" << KRobotConfig::Instance().getConfig(KDeviceLists::Interpret::HEAD_ID) << "'" << std::endl;
	KAlBroker::Instance().SetBroker ( broker );
	tal = new Talws();
}

//______________________________________________
// destructor
//______________________________________________
mainModule::~mainModule()
{
	delete tal;
}


void mainModule::Start()
{
	tal->Start();
}

void mainModule::Stop()
{
	tal->Stop();
}