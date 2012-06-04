#include "LWRemoteHosts.h"

#include <iostream>
using namespace std;

LWRemoteHosts::LWRemoteHosts(QComboBox *parent )
{
	parentComboBox = parent;

	parentComboBox->setIconSize(QSize(48, 48));
	parentComboBox->adjustSize();

	connect(parentComboBox, SIGNAL(activated(int)), this, SLOT(newLWRemoteHostSelected(int)));
	addComboBoxItem(tr("-1"), tr("  Please, select available host to monitor."));

	LWRequests.clear();
	myCurrentRequestedHost.clear();
}

LWRemoteHosts::~LWRemoteHosts()
{

}

void LWRemoteHosts::addComboBoxItem(QString hostId, QString hostName)
{
	QIcon icon;

	icon.addFile(QString::fromUtf8(":/KnownHostsIcons/chore_robot_on.png"), QSize(), QIcon::Normal, QIcon::Off);

	parentComboBox->addItem(icon, hostName);

	requestedLWElements *re = new LWElements(hostId, hostName, false);
	LWRequests.append(re);

	//printLWRequests();

}

void LWRemoteHosts::removeComboBoxItem(QString hostId)
{
	int hostIndex = -1;

	hostIndex = this->LWhostFinder(hostId);

	if(hostIndex != -1 && hostIndex <= parentComboBox->count())
	{
		emit LWRHUnsubscriptionRequest(hostId);
		parentComboBox->removeItem(hostIndex);
		LWRequests.removeAt(hostIndex);
	}

	//printLWRequests();

}

int LWRemoteHosts::LWhostFinder(QString hostId)
{
	int hostIndex = -1;

	for(int i = 0; i<LWRequests.count();i++)
	{
		if (LWRequests.at(i)->hostId == hostId)
		{
			hostIndex = i;
			break;
		}
	}

	return hostIndex;


}



void LWRemoteHosts::setLWRHGameStateInfo(QIcon icon, QString gsm, QString hostId)
{
	int hostIndex = this->LWhostFinder(hostId);

	if(hostIndex != -1 && hostIndex <= parentComboBox->count())
	{
		parentComboBox->setItemIcon(hostIndex, icon);
		parentComboBox->setItemText(hostIndex, gsm);

	}


}

void LWRemoteHosts::newLWRemoteHostSelected(int index)
{
	for(int i = 0; i<LWRequests.count();i++)
	{
		if(i == index)
		{
			LWRequests.at(i)->hostSelected = true;
			myCurrentRequestedHost = LWRequests.at(i)->hostId;

			emit LWRHSubscriptionRequest(LWRequests.at(i)->hostId);

		}else
		{
			LWRequests.at(i)->hostSelected = false;
		}
	}

	//printLWRequests();
	//std::cout << "Epeleksa ton ::" << myCurrentRequestedHost.toStdString() << std::endl;


}

void LWRemoteHosts::printLWRequests()
{
	std::cout << "~~~~~~~~~LWRemoteHosts::printLWRequests()~~~~~~~~~~~~~~" << std::endl;
	for(int i = 0; i<LWRequests.count();i++)
	{
		std::cout << "Host :: " << LWRequests.at(i)->hostId.toStdString()<< std::endl;
		std::cout << "Requested :: " << LWRequests.at(i)->hostSelected << std::endl;
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
}