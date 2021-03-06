#include "Flooder.h"
#include "messages/TestMessage.pb.h"
#include "messages/WorldInfo.pb.h"
#include "core/messages/Network.pb.h"

using namespace std;

//#define UNNEEDED


ACTIVITY_REGISTER(Drain);

ACTIVITY_REGISTER(Pipe);


int Drain::Execute()
{
	KPROF_SCOPE(p, Drain::Execute());
	boost::shared_ptr<const KnownHosts> h = _blk.readState<KnownHosts>("communication");

	if(!h.get() || (h && h->entrylist_size() == 0))
	{
		boost::shared_ptr<const TestMessage> drop = _blk.readData<TestMessage>("communication");

		if(drop == NULL)
			return 0;

		TestMessage newdrop;//.CopyFrom(drop);
		newdrop.set_counter(drop->counter() - 1);
		_blk.publishData(newdrop, "communication");
		cout << "Drop reduced to:" << newdrop.counter() << endl;
	}
	else
	{
		const ::google::protobuf::RepeatedPtrField< HostEntry >& rf = h->entrylist();
		::google::protobuf::RepeatedPtrField< HostEntry >::const_iterator fit;

		for(fit = rf.begin(); fit != rf.end(); ++fit)
		{
			boost::shared_ptr<const WorldInfo> wim = _blk.readData<WorldInfo>("worldstate", (*fit).hostid());

			if(wim.get() != 0)
				cout << "WorldInfo:" << wim->myposition().x() << " " << wim->myposition().y() << endl;

			boost::shared_ptr<const TestMessage> drop = _blk.readData<TestMessage>("communication", (*fit).hostid());

			if(drop == NULL)
				continue;

			TestMessage newdrop;//.CopyFrom(drop);
			newdrop.set_counter(drop->counter() - 1);
			_blk.publishData(newdrop, "communication");
			cout << "Drop reduced to:" << newdrop.counter() << endl;
		}
	}

	p.generate_report();
	return 0;
}

void Drain::UserInit()
{
	cout << "Hey!" << endl;
	_blk.updateSubscription("communication", msgentry::SUBSCRIBE_ON_TOPIC, msgentry::HOST_ID_ANY_HOST);
	_blk.updateSubscription("worldstate", msgentry::SUBSCRIBE_ON_TOPIC, msgentry::HOST_ID_ANY_HOST);
}

void Drain::Reset(){

}

int Pipe::Execute()
{
	KPROF_SCOPE(p, Pipe::Execute());
	boost::shared_ptr<const KnownHosts> h = _blk.readState<KnownHosts>("communication");

	if(!h.get() || (h && h->entrylist_size() == 0))
	{
		std::cout << "Local" << std::endl;
		boost::shared_ptr<const TestMessage> drop = _blk.readData<TestMessage>("communication");
		TestMessage newdrop;//.CopyFrom(drop);

		if(drop != NULL)
			newdrop.set_counter(drop->counter() + 1);
		else
			newdrop.set_counter(1);

		_blk.publishData(newdrop, "communication");
		cout << "New drop to:" << newdrop.counter() << endl;
	}
	else
	{
		const ::google::protobuf::RepeatedPtrField< HostEntry >& rf = h->entrylist();
		::google::protobuf::RepeatedPtrField< HostEntry >::const_iterator fit;

		for(fit = rf.begin(); fit != rf.end(); ++fit)
		{
			std::cout << "Readingfromhost:" << (*fit).hostid() << std::endl;
			boost::shared_ptr<const TestMessage> drop = _blk.readData<TestMessage>("communication", (*fit).hostid());
			TestMessage newdrop;//.CopyFrom(drop);

			if(drop != NULL)
				newdrop.set_counter(drop->counter() + 1);
			else
				newdrop.set_counter(1);

			_blk.publishData(newdrop, "communication");
			cout << "New drop to:" << newdrop.counter() << endl;
		}
	}

	p.generate_report();
	return 0;
}

void Pipe::UserInit()
{
	cout << "Hey!" << endl;
	_blk.updateSubscription("communication", msgentry::SUBSCRIBE_ON_TOPIC, msgentry::HOST_ID_ANY_HOST);
}

void Pipe::Reset(){

}
