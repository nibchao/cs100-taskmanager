#ifndef __WORKTASKS_HPP__
#define __WORKTASKS_HPP__
#include "generalTask.hpp"
#inlcude <string>
#include <iostream>
using namespace std;

class WorkTasks{
	
private:
	int urgency;
	string condition;

public:

	WorkTasks();
	
	WorkTasks(string task_A, string task_B, string task_C, int urgency, int, string task_Status){} : generalTask(task_a, task_b, task_c, task_d), urgency(urgency_e), condition(task_F){}
	
	~WorkTasks(){
		condition.clear();
	}
	
	void howImportant(int);
	
	void whatStatus(string);
	
	int getUrgency();
	
	string getCurrentCondition();

};

#endif

