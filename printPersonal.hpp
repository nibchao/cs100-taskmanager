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
		void print()
		{
			cout << pointer->getTitle() << endl;
			cout << pointer->getDescription() << endl;
			cout << pointer->getClassification() << endl;
			cout << pointer->getPriority() << endl;
			cout << pointer->getDuration() << endl;
			cout << pointer->getDate() << endl << endl;
		}
};

#endif
