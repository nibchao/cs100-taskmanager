#ifndef __PRINTWORK_HPP__
#define __PRINTWORK_HPP__

#include "printTasks.hpp"
#include "WorkTask.hpp"

class printWork : public printTasks
{
        private:
                WorkTask* pointer;
        public:
                printWork(WorkTask* ptr): pointer(ptr) { }
		void print()
                {
                        cout << "=Work Task=" << endl;
                        cout << "Title: " << pointer->getTitle() << endl;
                        cout << "Description: " << pointer->getDescription() << endl;
                        cout << "Classification: " << pointer->getClassification() << endl;
                        cout << "Priority: " << pointer->getPriority() << endl;
                        cout << "Duration: " << pointer->getDuration() << endl;
                        cout << "Date: " << pointer->getDate() << endl << endl;
                }
};

#endif

