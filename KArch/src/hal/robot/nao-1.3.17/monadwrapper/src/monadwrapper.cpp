/**
 * \mainpage
 * \section Author
 * @author Kouretes
 *
 * \section Copyright
 * Version : $Id$
 *
 * \section Description
 *
 * This file was generated by Aldebaran Robotics ModuleGenerator
 */

#ifndef _WIN32
#include <signal.h>
#endif

#include "altypes.h"
#include "alxplatform.h"
#include "monadwrapper.h"
#include "alptr.h"
#include "albroker.h"
#include "almodule.h"
#include "albrokermanager.h"
#include "altoolsmain.h"

using namespace std;
using namespace AL;

//<EXE_INCLUDE> don't remove this comment
#include "talws.h"

//</EXE_INCLUDE> don't remove this comment

//<ODECLAREINSTANCE> don't remove this comment

//</ODECLAREINSTANCE> don't remove this comment


#ifdef MONADWRAPPER_IS_REMOTE_OFF

#ifdef _WIN32
#define ALCALL __declspec(dllexport)
#else
#define ALCALL
#endif
#else
#define ALCALL
#endif

#ifdef __cplusplus
extern "C"
{
#endif

ALCALL int _createModule( ALPtr<ALBroker> pBroker )
{      
  // init broker with the main broker instance 
  // from the parent executable
  ALBrokerManager::setInstance(pBroker->fBrokerManager.lock());
  ALBrokerManager::getInstance()->addBroker(pBroker);

    
  // create module instances
//<OGETINSTANCE> don't remove this comment
ALModule::createModule<talws>(pBroker,"talws" );

//</OGETINSTANCE> don't remove this comment 

  return 0;
}

ALCALL int _closeModule(  )
{
  // Delete module instances
//<OKILLINSTANCE> don't remove this comment

//</OKILLINSTANCE> don't remove this comment
 
  return 0;
}

# ifdef __cplusplus
}
# endif


#ifndef MONADWRAPPER_IS_REMOTE_OFF


int main(int argc, char *argv[] )
{
  // pointer on createModule
  TMainType sig;
  sig = &_createModule;

  // call main
  ALTools::mainFunction("monadwrapper",argc, argv,sig);

}

#endif
