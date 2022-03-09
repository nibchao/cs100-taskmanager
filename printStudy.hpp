#ifndef __PRINTSTUDY_HPP__
#define __PRINTSTUDY_HPP__

#include "printTasks.hpp"
#include "StudyTask.hpp"

class printStudy : public printTasks
{
        private:
                StudyTask* pointer;
        public:
                printStudy(StudyTask* ptr): pointer(ptr) { }
                void print()
                {
                        cout << pointer->getTitle() << "study task temp";
                }
};

#endif

