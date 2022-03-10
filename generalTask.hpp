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
	public:
		generalTask(string, string, string);
		~generalTask()
		{
			title.clear();
			description.clear();
			classification.clear();
		};
		string getTitle();
		string getDescription();
		string getClassification();
		void editTitle(string);
		void editDescription(string);
		void editClassification(string);
};

#endif
