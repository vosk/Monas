#ifndef XMLHandler_H
#define XMLHandler_H

#include <QWidget>
#include <vector>
#include <map>
#include <string>
#include <QDebug>
#include <QTimer>
#include <QList>
#include <QFileDialog>
#include <math.h>
#include <QString>
#include <fstream>
#include <QTreeWidgetItem>
#include <boost/date_time/posix_time/posix_time.hpp>
#include "HostsComboBox.h"
#include "architecture/XmlManager/XmlManager.h"
#include "architecture/archConfig.h"
#include "../../src/messages/GUICommunication.pb.h"

namespace Ui {
    class XMLHandler;
}

class XMLHandler : public QWidget
{
    Q_OBJECT
	
public:
    explicit XMLHandler(QWidget *parent = 0);
    ~XMLHandler();

    Ui::XMLHandler* getXMLUi() {return ui;}
	
signals:
	void NewHostAdded(QString,QString);
	void OldHostRemoved(QString);
	void GameStateMsgUpdate(QString,QString,QString);
	void LWRHSubscriptionRequest(QString);
	void LWRHUnsubscriptionRequest(QString);
	void sendConfigMessage(ExternalConfig msg);
	
public slots:
	void addComboBoxItem(QString, QString);
	void removeComboBoxItem(QString);
	void setLWRHGameStateInfo(QString, QString, QString);
	void SubscriptionHandler(QString);
	void UnsubscriptionHandler(QString);
	void genericAckReceived(GenericACK ack, QString hostid);
	
private slots:
	void retransmitMessage();
	void pbHandOfPressed();
	void sendPressed();
	void editItemOrNot(QTreeWidgetItem *item, int col);
	void itemChanged(QTreeWidgetItem *item, int col);
	void selectActivities(QTreeWidgetItem *item, int col);
	void changeCt();
private:
	void addChildsRecursive(QTreeWidgetItem *parent, QString name, QString data, XmlManagerNode *currentNode, std::string currentKey);
	void addAttributeChild(QTreeWidgetItem *parent, QString name, QString data, std::string currentKey);
	void initializeActivitiesTree();
	void updateTreeStructure(std::string headID, std::string bodyID);
	void updateXMLFiles();
	
private:
	static const int MAX_RETRANSMITS = 15;
	
    HostsComboBox* availableXMLHosts;
	Ui::XMLHandler *ui;
	QTimer *timer;
	XmlManager xmlStructure;
	
	std::string headid;
	std::string bodyid;
	
	std::map<std::string,std::string> changes;
	QString	oldValue;

	int oldChecksum;
	
	ExternalConfig outmsg, lastmsg;
	
	//variables for the ack method
	bool lastMessageACKed;
	int numOfRetransmits;
	boost::posix_time::ptime timestamp;
};

#endif // XMLHandler_H
