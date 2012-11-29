#ifndef STATE_H_
#define STATE_H_ 1

#include "IAction.h"
#include "Transitions/TransitionSegmentBase.h"
#include "IEvent.h"
#include "IParameter.h"

#include "architecture/narukom/narukom.h"
#include "architecture/narukom/pub_sub/blackboard.h"

#include "architecture/XmlManager/XmlManager.h"

#include "architecture/periodicthread.h"

#ifdef RUN_ON_NAO
#include "hal/robot/generic_nao/robot_consts.h"
#endif

#include "Containers.h"

#include <string>
#include <vector>

namespace statechart_engine
{

	class State
	{

	public:

		State ( std::string name, State* parent, IAction* entryAction = 0, IAction* exitAction = 0 );

		virtual ~State ();

		bool isActive () const;

		virtual bool isRunning () const;

		virtual int Activate ();
		virtual int DeActivate ();

		virtual bool Step ( IEvent* ev = 0, IParameter* param = 0);

		int AddTransition ( TransitionSegmentBase* transition );

		virtual void SetActive ( State* );

		State* GetParent () const;

		virtual Blackboard* AddChild ( State* ); //TODO

		Narukom* GetCom () const; //TODO add const

		Blackboard* GetBlackboard () const; //TODO add const

		XmlManager* GetXmlManager () const; //TODO add const

		virtual volatile int* GetIsRunningRef () const;

		virtual const std::string GetName () const;

	protected:

		std::string _name;

		IAction* _entryAction;
		IAction* _exitAction;

		State* _parent;

		bool _isActive;

		volatile int* _isRunning;

		typedef Containers::TransitionContainer TransitionsCont;
		typedef Containers::TransitionContainerIterator TransitionsContIter;

		TransitionsCont _transitions;

		Narukom* _com;

		Blackboard* _blk;

		XmlManager* _xml;

	};

}

#endif /* STATE_H_ */
