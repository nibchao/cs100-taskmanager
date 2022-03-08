#ifndef __WORKTASKS_HPP__
#define __WORKTASKS_HPP__


class WorkTasks{
private:
	int urgency;
	string condition;

public:

	//WorkTasks();
	
	WorkTasks(string task_A, string task_B, string task_C, int urgency, int, string task_Status){}
	
	~WorkTasks(){
		condition.clear();
	}
	
	void howImportant(int);
	
	void whatStatus(string);
	
	int getUrgency();
	
	string getCurrentCondition();

};

#endif

