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

#ifndef StringRegistry_H
#define StringRegistry_H


#include <string>
#include <boost/functional/hash.hpp>
#include <map>
#include <set>
#include <vector>


/**
	Perfect string hasher library
**/

class StringRegistry
{

public:

	StringRegistry()
	{
		nextid = 1	;
		rt.push_back("");
	};
	/**Register new string and return new id **/
	std::size_t registerNew(std::string const& s)
	{
		std::size_t lookup = getId(s);

		if(lookup != 0)
			return lookup;

		stringidpair p;
		p.id = nextid++;
		p.s = s;
		std::size_t hashs = hasher(s);
		ft[hashs].insert(p);
		rt.push_back(s);
		boost::hash_combine(seed, hashs);
		return p.id;
	}
	std::size_t registryHash() const
	{
		return seed;
	};
	std::size_t size() const
	{
		return nextid - 1;
	};
	std::size_t getId(std::string const& s) const
	{
		std::size_t hashs = hasher(s);
		fttype::const_iterator ftit = ft.find(hashs);

		if(ftit == ft.end())
		{
			return 0;
		}

		std::set<stringidpair>::const_iterator fit;

		for(fit = (*ftit).second.begin(); fit != (*ftit).second.end(); ++fit)
		{
			if((*fit).s == s)
				return (*fit).id;
		}

		return 0;
	}
	std::string getString(std::size_t id) const
	{
		if(id > rt.size())
			return "";

		return rt[id];
	}

private:
	typedef struct spair_s
	{
		std::string s;
		std::size_t id;
		bool operator<(struct spair_s const & a) const
		{
			return id < a.id;
		};
		bool operator==(struct spair_s const & a)const
		{
			return id == a.id;
		};
	} stringidpair;
	//From HASH to pair of ids,and strings for lookup
	typedef std::map<std::size_t, std::set<stringidpair> > fttype;
	//From id, to string
	typedef std::vector<std::string> rttype;
	boost::hash<std::string> hasher;
	fttype ft;//from hash to id;
	rttype rt;//from id to string :)
	std::size_t nextid;
	std::size_t seed;

};




#endif /* StringRegistry_H */
