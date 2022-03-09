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
                        cout << pointer->getTitle() << endl;
                        cout << pointer->getDescription() << endl;
                        cout << pointer->getClassification() << endl;
                        cout << pointer->getPriority() << endl;
                        cout << pointer->getDuration() << endl;
                        cout << pointer->getDate() << endl << endl;
                }
};

#endif

