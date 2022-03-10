#ifndef __WORKTASKS_HPP__
#define __WORKTASKS_HPP__
#include "generalTask.hpp"
using namespace std;

class WorkTasks: public generalTask {
private:
	int urgency;
	string taskState;
public:
	WorkTasks(string taskStr1, string taskStr2, string taskStr3, string taskStr4, int taskInt1, string taskStr5)
		: generalTask(taskStr1,taskStr2,taskStr3,taskStr4), urgency(taskInt1), taskState(taskStr5) {}
	
	~WorkTasks(){
		taskState.clear();
	}
	
	void howImportant(int);
	
	void whatState(string);
	
	int getHowImportant();
	
	string getCurrentStatus();
};

#endif

