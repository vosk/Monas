#ifndef _SoftLeftSideKick_h_
#define _SoftLeftSideKick_h_ 1

#include "../../ISpecialAction.h"

#include "hal/robot/generic_nao/aldebaran-kme.h"


class SoftLeftSideKick: public ISpecialAction
{

public:
	std::string GetName ()
	{
		return "SoftLeftSideKick";
	}

	SoftLeftSideKick();

	int ExecutePost();

private:

	void Initialize();

	boost::shared_ptr<AL::ALMotionProxy> motion;

	std::vector<std::string> SoftLeftSideKick_names;
	AL::ALValue SoftLeftSideKick_times, SoftLeftSideKick_keys;

};

#endif // _SoftLeftSideKick_h_ 
