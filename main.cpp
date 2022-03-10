#include <iostream>
#include <sstream>
#include "TaskList.hpp"
#include "personalTask.cpp"
#include "WorkTask.cpp"
#include "studyTask.cpp"

using namespace std;

// function prototypes
int printMainMenu();
string getTaskTitle();
string getTaskDescription();
string getTaskClassification();
int getTaskPriority();
int getTaskDuration();
string getTaskDate();
//

int main()
{
	TaskList* tasklist = new TaskList();
	string title = "";
	string description = "";
	string classification = "";
	int priority = 0;
	int duration = 0;
	string date = "";

	int input = 0;
	do
	{
		input = printMainMenu();
		switch (input)
		{
			case 1: // add a task by getting the task information
				title = getTaskTitle();
				description = getTaskDescription();
				classification = getTaskClassification();
				if (classification == "Personal" || classification == "personal")
				{
					date = getTaskDate();
					tasklist->createPersonalTask(new PersonalTask(title, description, classification, date));
				}
				else if (classification == "Work" || classification == "work")
				{
					priority = getTaskPriority();
					tasklist->createWorkTask(new WorkTask(title, description, classification, priority));
				}
				else if (classification == "Study" || classification == "study")
				{
					duration = getTaskDuration();
					tasklist->createStudyTask(new StudyTask(title, description, classification, duration));
				}
				break;
			case 2: // prints the tasks in the tasklist
				cout << "Printing all tasks in the task list." << endl;
				tasklist->printTaskList();
				break;
			case 3: // edit task title
				title = getTaskTitle();
				classification = getTaskClassification();
				tasklist->editTask(title, classification);
				break;
			case 9:
				cout << "Ending task manager." << endl << endl; 
				break;
			default:
				cout << endl << "Invalid input. Enter any key to return." << endl;
				cin.clear();
				cin.ignore(10000, '\n');
				break;
		}	
	}
	while (input != 9);
	delete tasklist;
	return 0;
}

int printMainMenu()
{
	int input = 0;
	cout << "===Task Manager Main Menu===" << endl;
	cout << "1) Add a task" << endl;
	cout << "2) Print all tasks" << endl;
	cout << "3) Edit a task" << endl;
	cout << "9) End program" << endl;	

	cout << "Enter menu option: ";
	cin >> input;
	cin.clear();
	cin.ignore(10000, '\n');

	return input;
}

string getTaskTitle()
{
	string taskTitle = "";
	cout << "Enter the task title: ";
	getline(cin, taskTitle);
	cout << endl;
	return taskTitle;
}

string getTaskDescription()
{
	string taskDescription = "";
	cout << "Enter the task description: ";
	getline(cin, taskDescription);
	cout << endl;
	return taskDescription;
}

string getTaskClassification()
{
	string taskClassification = "";
	cout << "Enter the task classification: ";
	getline(cin, taskClassification);
	while (taskClassification != "Personal" && taskClassification != "personal" &&
		taskClassification != "Work" && taskClassification != "work" &&
		taskClassification != "Study" && taskClassification != "study")
	{
		cout << endl << "Error: Invalid classification. Accepted classifications are [Personal, Work, Study]." << endl << endl;
		cout << "Enter the task classification: ";
		getline(cin, taskClassification);
	}
	cout << endl;
	return taskClassification;
}

int getTaskPriority()
{
	int taskPriority = 0;
	string str = "";
	cout << "Enter the work task's priority: ";

	while (getline(cin, str))
	{
		stringstream stream(str);
		if (stream >> taskPriority)
		{
			if (stream.eof() && taskPriority > 0)
			{
				break;
			}
		}
		cout << endl << "Error: Invalid task priority. Task priority must be a value greater than 0." << endl;
		cout << endl << "Enter the work task's priority: ";
	}
	cout << endl;
	return taskPriority;
}

int getTaskDuration()
{
	int taskDuration = 0;
	string str = "";
	cout << "Enter the study task's duration (how many minutes it will take): ";

	while (getline(cin, str))
	{
		stringstream stream(str);
		if (stream >> taskDuration)
		{
			if (stream.eof() && taskDuration > 0)
			{
				break;
			}
		}
		cout << endl << "Error: Invalid task duration. Task duration must be a value greater than 0 minutes." << endl;
		cout << endl << "Enter the study task's duration (how many minutes it will take): ";
	}
	cout << endl;
	return taskDuration;
}

string getTaskDate()
{
	string taskDate = "";
	cout << "Enther the personal task date: ";
	getline(cin, taskDate);
	cout << endl;
	return taskDate;
}
