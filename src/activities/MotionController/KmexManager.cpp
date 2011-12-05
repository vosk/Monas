#include "KmexManager.h"

#include <fstream>
#include <dirent.h>
#include "tools/logger.h"
#include "tools/toString.h"
#include "architecture/archConfig.h"

using namespace std;
using namespace KDeviceLists;

vector<KmexAction*> KmexManager::LoadActionsXML(const string& file_name, map<string,
		  boost::shared_ptr<ISpecialAction> > SpActions) {


	XML config(file_name);
	typedef vector<XMLNode<string, float, string> > NodeCont;

	vector<KmexAction*> xmlResults;

	std::map<std::string, int> jointIDs =  getJointIDs();

    NodeCont motions = config.QueryElement<string, float, string>( "Motion" );
	ostringstream motionsNum;
	motionsNum<<"Found "<<motions.size()<<" motion(s)";
	Logger::Instance().WriteMsg("KmexManager",motionsNum.str(), Logger::Info );

	for ( NodeCont::iterator it = motions.begin(); it !=motions.end(); it++ )
	{
		NodeCont MotionNameNode = config.QueryElement<string, float, string>("actionName", &(*it) );
		string MotionName = MotionNameNode[0].value;

		NodeCont jointsNodes = config.QueryElement<string, float, string>("Joints", &(*it) );
		vector<string> jointsResults;
		for ( unsigned int j=0; j<jointsNodes.size(); j++ )
		{
			jointsResults.push_back( jointsNodes[j].value );
			Logger::Instance().WriteMsg("KmexManager", "Motion: "+MotionName+" with: "+jointsResults[j], Logger::ExtraInfo );
		}
		vector<int> jointNum;
		for (unsigned int i =0; i<jointsResults.size(); i++)
		{
			jointNum.push_back(jointIDs[jointsResults[i]]);
			Logger::Instance().WriteMsg("KmexManager", "JOINTS : " + _toString(jointNum.back()), Logger::ExtraInfo);
		}

		int numOfPoses = it->attrb["numOfPoses"];
		float threshold = it->attrb["threshold"];
		int numOfJoints = it->attrb["numOfJoints"];

		vector<int> posesResults;
		NodeCont poses = config.QueryElement<string, float, string>( "Poses", &(*it));
		for (  NodeCont::iterator itIn = poses.begin(); itIn !=poses.end(); itIn++  )
		{
			posesResults.push_back(itIn->attrb["pose"]);

			Logger::Instance().WriteMsg("KmexManager", "posesResults : " + _toString(posesResults.back()), Logger::ExtraInfo);
		}
		SpAssocCont::iterator it = SpActions.find(MotionName);
		if (it == SpActions.end())
			Logger::Instance().WriteMsg("KmexManager", "SpAction " + MotionName + " not found!", Logger::Error);
		else
		{
			boost::shared_ptr<ISpecialAction> ptr = it->second;
			KmeAction* ptrdcmkme = (KmeAction*) ptr.get();
			AL::ALValue actionAngles = ptrdcmkme->ReturnALValues();
			int totalPoses = actionAngles[21].getSize();

			vector<vector <float> > anglesResults;
			vector<float> tmpAngles;

			for (int i = 0; i<numOfPoses; i++)
			{
				for (int j = 0; j<numOfJoints; j++)
				{
					tmpAngles.push_back(actionAngles[jointNum[j]][posesResults[i]]);
				}
				anglesResults.push_back(tmpAngles);
			}

			vector<vector <float> > anglesVelocity;
			vector <float> newVel;

			for (int i = 0; i<numOfPoses-1; i++)
			{
				for (int j = 0; j<numOfJoints; j++)
				{
					newVel.push_back((float)actionAngles[jointNum[j]][posesResults[i+1]] - (float)actionAngles[jointNum[j]][posesResults[i]]);
				}
				anglesVelocity.push_back(newVel);
			}

			KmexAction* curAction = new KmexAction(MotionName, numOfPoses, posesResults, totalPoses, threshold, numOfJoints, jointNum, anglesResults, anglesVelocity);
			xmlResults.push_back(curAction);
		}
	}
		return xmlResults;
}
