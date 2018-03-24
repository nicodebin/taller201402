#ifndef _ConditionVariable_H_
#define _ConditionVariable_H_

#include <WinSock2.h>
#include "Lock.h"

class ConditionVariable{
	protected:
		CONDITION_VARIABLE handle;
		Lock* lock;
	public:

		ConditionVariable();
		ConditionVariable(Lock*);
		~ConditionVariable();
		void wake();
		void wakeAll();
		void sleep();
		Lock* getLock();
};

#endif