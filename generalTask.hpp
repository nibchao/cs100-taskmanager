#ifndef __GENERALTASK_HPP__
#define __GENERALTASK_HPP__

#include <string>
#include <iostream>

using namespace std;

class generalTask
{
	private:
		string title;
		string description;
		string classification;
		int priority;
		int duration;
		string date;
	public:
		generalTask(string, string, string, int, int, string);
		~generalTask() { };
		string getTitle();
		string getDescription();
		string getClassification();
		int getPriority();
		int getDuration();
		string getDate();
		void editTitle(string);
		void editDescription(string);
		void editClassification(string);
		void editPriority(int);
		void editDuration(int);
		void editDate(string);
		virtual void printTask() = 0;
		virtual void setClassification(string) = 0;
};

#endif
