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
		vector<generalTask*> TaskList;
	public:
		TaskList() { }
		~TaskList()
		{
			for (int cnt = 0; cnt < TaskList.size(); cnt++)
			{
				delete TaskList[cnt];
			}
		}
		void printTaskList()
		{
			for (int cnt = 0; cnt < TaskList.size(); cnt++)
			{
				TaskList.at(cnt)->printTask();
			}
		}
		void createPersonalTask(PersonalTask* personalTaskPointer)
		{
			TaskList.push_back(new PersonalTask(personalTaskPointer));
		}
		void deletePersonalTask(PersonalTask* personalTaskPointer)
		{
			delete personalTaskPointer;
		}
		void createWorkTask(WorkTask* workTaskPointer)
		{
			TaskList.push_back(new WorkTask(workTaskPointer));
		}
		void deleteWorkTask(WorkTask* workTaskPointer)
		{
			delete workTaskPointer;
		}
		void createStudyTask(StudyTask* studyTaskPointer)
		{
			TaskList.push_back(new StudyTask(studyTaskPointer));
		}
		void deleteStudyTask(StudyTask* studyTaskPointer)
		{
			delete studyTaskPointer;
		}
};

#endif
