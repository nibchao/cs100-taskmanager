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
                        cout << pointer->getTitle() << endl;
                        cout << pointer->getDescription() << endl;
                        cout << pointer->getClassification() << endl;
                        cout << pointer->getPriority() << endl;
                        cout << pointer->getDuration() << endl;
                        cout << pointer->getDate() << endl << endl;
                }
};

#endif

