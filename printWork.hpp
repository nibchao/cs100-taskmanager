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
                        cout << pointer->getTitle() << "work task temp";
                }
};

#endif

