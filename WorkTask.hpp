#ifndef __WORKTASK_HPP__
#define __WORKTASK_HPP__

#include "generalTask.hpp"

using namespace std;

class WorkTask: public generalTask {
private:
	int priority;
public:
	WorkTask(string taskStr1, string taskStr2, string taskStr3, int taskInt1)
		: generalTask(taskStr1,taskStr2,taskStr3), priority(taskInt1) {}
	
	
	void setPriority(int);
	
	int getPriority();
	
};

#endif

