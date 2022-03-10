#ifndef __TASKLIST_HPP__
#define __TASKLIST_HPP__

#include <iostream>
#include <vector>

#include "generalTask.hpp"
#include "generalTask.cpp"

#include "WorkTasks.hpp"
//#include "WorkTasks.h"
#include "PersonalTask.hpp"
#include "studyTask.hpp"
//#include "StudyTask.hpp"

#include "printPersonal.hpp"
#include "printWork.hpp"
#include "printStudy.hpp"
#include "printTasks.hpp"

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
				printtask.at(cnt)->print();
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
