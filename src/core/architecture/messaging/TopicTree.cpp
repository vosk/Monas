/*
   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License version 2 as published by the Free Software Foundation.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this library; see the file COPYING.LIB.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.
*/
#include "TopicTree.hpp"
#include "msg.h"



using namespace std;





TopicTree::TopicTree(): StringRegistry()
{
	topictree[0].parentid = 0;
	topictree[0].children.insert(registerNew("global"));
	addTopic(string("motion"), string("global"));
	addTopic(string("leds"), string("global"));
	addTopic(string("sensors"), string("global"));
	addTopic(string("buttonevents"), string("sensor"));
	addTopic(string("vision"), string("global"));
	addTopic(string("image"), string("vision"));
	addTopic(string("behavior"), string("global"));
	addTopic(string("worldstate"), string("global"));
	addTopic(string("communication"), string("global"));
	addTopic(string("pathplanning"), string("global"));
	addTopic(string("debug"), string("global"));
	addTopic(string("external"), string("global"));
	addTopic(string("log"), string("global"));
}


TopicTree::TopicTree(std::string const& root): StringRegistry()
{
	topictree[0].parentid = 0;
	topictree[0].children.insert(registerNew(root));
}

std::set<std::size_t>  TopicTree::iterateTopics(std::size_t  topic , int where) const
{
	std::set<std::size_t>  res;

	//cout<<"Check 0"<<endl;
	if(topic == 0)
		return res;

	//cout<<"Check 1"<<endl;
	std::map<std::size_t, topicdata >::const_iterator tit = topictree.find(topic);

	if(tit == topictree.end())
		return res;

	//cout<<"Check 2"<<endl;
	res.insert(topic);

	if(where == msgentry::SUBSCRIBE_ABOVE_TOPIC || where == msgentry::SUBSCRIBE_ALL_TOPIC ||
	        where == msgentry::UNSUBSCRIBE_ABOVE_TOPIC || where == msgentry::UNSUBSCRIBE_ALL_TOPIC)
	{
		do
		{
			tit = topictree.find((*tit).second.parentid);

			if(tit == topictree.end())
				break;

			res.insert((*tit).first);
		}
		while((*tit).first != (*tit).second.parentid);
	}

	if(where == msgentry::SUBSCRIBE_BELOW_TOPIC || where == msgentry::SUBSCRIBE_ALL_TOPIC ||
	        where == msgentry::UNSUBSCRIBE_BELOW_TOPIC || where == msgentry::UNSUBSCRIBE_ALL_TOPIC)
		iterateTopicsBelow(res, topic);

	return res;
}


void TopicTree::addTopic(std::string const& what, std::string const& under)
{
	size_t underid = getId(under);
	size_t newid = getId(what);

	if(newid != 0)
		return;

	newid = registerNew(what);
	topictree[underid].children.insert(newid);
	topictree[newid].parentid = underid;
};
void TopicTree::iterateTopicsBelow(std::set<std::size_t>  &res, std::size_t const topicid) const
{
	std::map<std::size_t, topicdata >::const_iterator tit = topictree.find(topicid);

	if(tit == topictree.end())
		return ;

	res.insert(topicid);
	std::set<std::size_t>::const_iterator cit = (*tit).second.children.begin();

	for(; cit != (*tit).second.children.end(); ++cit) //Recursive calls
		iterateTopicsBelow(res, *cit);
}


