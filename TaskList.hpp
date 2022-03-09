#ifndef __TASKLIST_HPP__
#define __TASKLIST_HPP__

#include <iostream>
#include <vector>
#include "generalTask.hpp"
#include "generalTask.cpp"
#include "WorkTasks.h"
#include "PrintTasks.h"
#include "studytask.hpp"

using namespace std;

class TaskList
{
	private:
		vector<generalTask*> tasklist;
		vector<printTasks*> printtask;
	public:
		TaskList() { }
		~TaskList()
		{
			for (int cnt = 0; cnt < tasklist.size(); cnt++)
			{
				delete tasklist[cnt];
				delete printtask[cnt];
			}
		}
		void printTaskList()
		{
			for (int cnt = 0; cnt < tasklist.size(); cnt++)
			{
				printtask.at(cnt)->printTask();
			}
		}
		void createPersonalTask(PersonalTask* personalTaskPointer)
		{
			tasklist.push_back(personalTaskPointer);
			printtask.push_back(new printPersonal(personalTaskPointer));
		}
		void deletePersonalTask(PersonalTask* personalTaskPointer)
		{
			delete personalTaskPointer;
		}
		void createWorkTask(WorkTask* workTaskPointer)
		{
			tasklist.push_back(workTaskPointer);
			printtask.push_back(new printWork(workTaskPointer));
		}
		void deleteWorkTask(WorkTask* workTaskPointer)
		{
			delete workTaskPointer;
		}
		void createStudyTask(StudyTask* studyTaskPointer)
		{
			tasklist.push_back(studyTaskPointer);
			printtask.push_back(new printStudy(studyTaskPointer));
		}
		void deleteStudyTask(StudyTask* studyTaskPointer)
		{
			delete studyTaskPointer;
		}
};

#endif
