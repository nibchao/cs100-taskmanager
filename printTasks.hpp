#ifndef __PRINTTASKS_HPP__
#define __PRINTTASKS_HPP__

#include <iostream>
#include <vector>

using namespace std;

class printTasks
{
	private:
		generalTask* pointer;
	public:
		printTasks(generalTask* ptr) { }
		virtual void print() = 0;
};

#endif
