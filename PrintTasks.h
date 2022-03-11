#ifndef PRINT_TASKS_H
#define PRINT_TASKS_H

#include "generalTask.h"
#include "studyTask.h"
#include "workTask.h" 
#include "personaltask.h"

class printTask:public generalTask
{
	private:
		personalTask* task1;
		workTask*     task2;
		studyTask*    task3;


	public:
		printTask(printTask* t) : task(t){}	
		virtual void print(printTask* ) = 0;	

};

#endif



