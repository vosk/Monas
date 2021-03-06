#ifndef _XARMANAGER_H_H
#define _XARMANAGER_H_H 1

#include <vector>
#include "ISpecialAction.h"




#include "hal/robot/generic_nao/aldebaran-motion-extra.h"



class XarManager
{

public:

	static std::vector<ISpecialAction*> LoadActionsXAR(AL::ALFrameManagerProxy *frame);

	struct XarBehavior
	{
		std::string filename;
		std::string name;
		std::string identifier;
	};

};

#endif //_XARMANAGER_H_H
