/**
 * @author Kouretes
 *
 * Version : $Id$
 * This file was generated by Aldebaran Robotics ModuleGenerator
 */

#include <iostream>
#include "talws.h"
#include "alproxy.h"
#include "alptr.h"
#include "albroker.h"

#include "architecture/talws.h"
using namespace AL;

//______________________________________________
// constructor
//______________________________________________
talws::talws(ALPtr<ALBroker> pBroker, const std::string& pName ): ALModule(pBroker, pName )
{
  setModuleDescription( "This an autogenerated module, this description needs to be updated." );

  functionName( "DummyFunction", "talws" ,  "An autogenerated dummyFunction." );
  addParam( "msg", "A string describing a message: the module will say this message when this method is called." );
  addParam( "foo", "An example parameter." );
  setReturn( "return", "Returns the foo param." );
  BIND_METHOD( talws::dummyFunction );

    tal.Start();
}

//______________________________________________
// destructor
//______________________________________________
talws::~talws()
{

    tal.Stop();
}

//______________________________________________
// version
//______________________________________________
std::string talws::version()
{
  return ALTOOLS_VERSION( MONADWRAPPER );
}

/**
 * dataChanged. Called by ALMemory when subcription
 * has been modified.
 * @param pDataName, name of the suscribed data
 * @param pValue, value of the suscribed data
 * @param pMessage, message written by user during suscription
 */
void talws::dataChanged(const std::string& pDataName, const ALValue& pValue, const std::string& pMessage) 
{

}

/**
 * innerTest
 */
bool talws::innerTest() 
{
  bool result = true;
  // TODO: write module test code
  return result;
}

/**
 * dummy Function
 * @param pMsg Message to show on screen
 * @param pFoo the function will return this parameter
 * @return an alvalue
 */
ALValue talws::dummyFunction( const std::string& pMsg, const ALValue& pFoo )
{
  std::cout << "talws says : " << pMsg << std::endl;
  if( pFoo.isValid() )
    std::cout << "Return value: " << pFoo.toString( VerbosityMini) << std::endl;
  else
    std::cout << "The value you sent me is invalid." << std::endl;
    
  return pFoo;
}


