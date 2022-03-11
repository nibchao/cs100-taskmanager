#ifndef __TASKLIST_HPP__
#define __TASKLIST_HPP__

#include <iostream>
#include <vector>

#include "generalTask.hpp"
#include "generalTask.cpp"

#include "WorkTask.hpp"
#include "personalTask.hpp"
#include "studyTask.hpp"

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
			if (tasklist.size() == 0)
			{
				cout << "Task list was empty." << endl << endl;
				return;
			}
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
		void editTaskTitle(string taskName, string classification, string description)
		{
			for (int cnt = 0; cnt < tasklist.size(); cnt++)
			{
				if ((tasklist.at(cnt)->getTitle() == taskName) && (tasklist.at(cnt)->getDescription() == description))
				{
					string newTitle = "";
					string oldTitle = tasklist.at(cnt)->getTitle();
					if (classification == "personal" || classification == "Personal")
					{
						cout << "Enter the personal task's new name: ";
					}
					else if (classification == "work" || classification == "Work")
					{
						cout << "Enter the work task's new name: ";
                                        }
					else if (classification == "study" || classification == "Study")
                                        {
                                                cout << "Enter the study task's new name: ";
                                        }
                                        getline(cin, newTitle);
                                        tasklist.at(cnt)->editTitle(newTitle);
                                        cout << oldTitle << " has been renamed to " << newTitle << "." << endl << endl;
                                        return;
				}
			}
			cout << "Task with title of " << taskName << ", description of " << description << " and classification " << classification << " was not found." << endl << endl;
		}
		void editTaskDescription(string taskName, string classification, string description)
                {
                        for (int cnt = 0; cnt < tasklist.size(); cnt++)
                        {
                                if ((tasklist.at(cnt)->getTitle() == taskName) && (tasklist.at(cnt)->getDescription() == description))
                                {
                                        string newDescription = "";
                                        string oldDescription = tasklist.at(cnt)->getDescription();
                                        if (classification == "personal" || classification == "Personal")
                                        {
                                                cout << "Enter the personal task's new description: ";
                                        }
                                        else if (classification == "work" || classification == "Work")
                                        {
                                                cout << "Enter the work task's new description: ";
                                        }
                                        else if (classification == "study" || classification == "Study")
                                        {
                                                cout << "Enter the study task's new description: ";
                                        }
                                        getline(cin, newDescription);
                                        tasklist.at(cnt)->editDescription(newDescription);
                                        cout << oldDescription << " description has been changed to " << newDescription << " description." << endl << endl;
                                        return;
                                }
                        }
			cout << "Task with title of " << taskName << ", description of " << description << " and classification " << classification << " was not found." << endl << endl;
                }
		void editTaskClassification(string taskName, string classification, string description)
                {
                        for (int cnt = 0; cnt < tasklist.size(); cnt++)
                        {
                                if ((tasklist.at(cnt)->getTitle() == taskName) && (tasklist.at(cnt)->getDescription() == description))
                                {
                                        string newClassification = "";
                                        string oldClassification = tasklist.at(cnt)->getClassification();
					cout << "Changing a task's classification can create hybrid tasks. An example is making a personal task with a priority field (unique to work tasks)." << endl;
                                        if (classification == "personal" || classification == "Personal")
                                        {
                                                cout << "Enter the personal task's new classification: ";
                                        }
                                        else if (classification == "work" || classification == "Work")
                                        {
                                                cout << "Enter the work task's new classification: ";
                                        }
                                        else if (classification == "study" || classification == "Study")
                                        {
                                                cout << "Enter the study task's new classification: ";
                                        }
                                        getline(cin, newClassification);
					while (newClassification != "Personal" && newClassification != "personal" &&
						newClassification != "Work" && newClassification != "work" &&
						newClassification != "Study" && newClassification != "study")
					{
						cout << endl << "Error: Invalid classification. Accepted classifications are [Personal, Work, Study]." << endl << endl;
						cout << "Enter the " << oldClassification << " task's new classification: ";
						getline(cin, newClassification);
					}
                                        tasklist.at(cnt)->editClassification(newClassification);
                                        cout << oldClassification << " classification has been changed to " << newClassification << "." << endl << endl;
                                        return;
                                }
                        }
			cout << "Task with title of " << taskName << ", description of " << description << " and classification " << classification << " was not found." << endl << endl;
                }
		/*void editTaskDate(string taskName, string classification, string description)
                {
                        for (int cnt = 0; cnt < tasklist.size(); cnt++)
                        {
                                if ((tasklist.at(cnt)->getTitle() == taskName) && (tasklist.at(cnt)->getDescription() == description))
                                {
                                        string newDate = "";
                                        string oldDate = tasklist.at(cnt)->getDate();
					if (oldDate == "")
					{
						cout << "Enter the personal task's new date (hybrid task): ";
					}
					else
					{
                                        	cout << "Enter the personal task's new date: ";
					}
                                        getline(cin, newDate);
                                        tasklist.at(cnt)->setDate(newDate);
					if (oldDate == "")
					{
						cout << taskName << " has the date field added with a date of " << newDate << "." << endl << endl;
					}
					else
					{
						cout << oldDate << " has been changed to " << newDate << "." << endl << endl;
					}
                                        return;
                                }
                        }
			cout << "Task with title of " << taskName << ", description of " << description << " and classification " << classification << " was not found." << endl << endl;
                }*/ // this is not possible to do, but maybe possible with visitor pattern? not sure
};

#endif
