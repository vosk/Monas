#ifndef _KMEXMANAGER_H_H
#define _KMEXMANAGER_H_H 1

#include <vector>
#include <map>
#include "ISpecialAction.h"
#include "tools/XML.h"
#include "tools/XMLConfig.h"
#include "ISpecialAction.h"
#include "KmexAction.h"
#include "KmeAction.h"
#include "hal/robot/generic_nao/robot_consts.h"
#include "hal/robot/generic_nao/aldebaran-kme.h"

class KmexManager
{

public:

	static std::vector<KmexAction*> LoadActionsXML(const std::string& file_name, std::map < std::string,
	        boost::shared_ptr<ISpecialAction> > SpActions);



private:

	typedef std::map < std::string,
	        boost::shared_ptr<ISpecialAction> > SpAssocCont;

};

#endif //_KMEXMANAGER_H_H
