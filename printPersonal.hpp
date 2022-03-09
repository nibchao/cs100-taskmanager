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
			cout << pointer->getTitle() << "personal task temp";
		}
};

#endif
