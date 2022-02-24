ifndef WORKTASKS_H
#endif WORKTASKS_H

#define

class WorkTasks{
private:
	int rate;
	string state;

public:

	WorkTasks();
	
	WorkTasks(string, string, string, int , int, string){}
	~WorkTasks(){
		state.clear();
	}

};

#endif

