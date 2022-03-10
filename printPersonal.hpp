#ifndef __PRINTPERSONAL_HPP__
#define __PRINTPERSONAL_HPP__

#include "printTasks.hpp"
#include "PersonalTask.hpp"

class printPersonal : public printTasks
{
	private:
		PersonalTask* pointer;
	public:
		printPersonal(PersonalTask* ptr): pointer(ptr) { }
		~printPersonal()
		{
			delete pointer;
		}
		void print()
                {
                        cout << "=Personal Task=" << endl;
                        cout << "Title: " << pointer->getTitle() << endl;
                        cout << "Description: " << pointer->getDescription() << endl;
                        cout << "Classification: " << pointer->getClassification() << endl;
                        cout << "Date: " << pointer->getDate() << endl << endl;
                }
};

#endif
