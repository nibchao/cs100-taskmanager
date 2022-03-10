#ifndef __WORKTASKS_HPP__
#define __WORKTASKS_HPP__
#include "generalTask.hpp"
using namespace std;

class WorkTasks: public generalTask {
private:
	int priority;
public:
	WorkTasks(string taskStr1, string taskStr2, string taskStr3, int taskInt1)
		: generalTask(taskStr1,taskStr2,taskStr3), priority(taskInt1) {}
	
	~WorkTasks(){
	}
	
	void setPriority(int);
	
	int getPriority();
	
};

#endif

