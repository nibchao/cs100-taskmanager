#ifndef __TASKLIST_HPP__
#define __TASKLIST_HPP__

#include <iostream>
#include <vector>
// #include "generalTask.hpp" uncomment this in the future

using namespace std;

class TaskList
{
	private:
		vector<int> TaskList; //  temporary line while generalTask is not implemented yet
		// vector<generalTask*> TaskList; uncomment this when generalTask is implemented
	public:
		TaskList() { }

		~TaskList()
		{
			for (int cnt = 0; cnt < TaskList.size(); cnt++)
			{
				delete TaskList[cnt];
			}
		}

		void printTask() { };

		void printTaskList()
		{
			for (int cnt = 0; cnt < TaskList.size(); cnt++)
			{
				TaskList.at(cnt)->printTask();
			}
		}

		void createTaskList(TaskList* taskListPointer)
		{
			TaskList.push_back(taskListPointer);
		}

		void deleteTaskList()
		{
			~TaskList();
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
