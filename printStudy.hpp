#ifndef __PRINTSTUDY_HPP__
#define __PRINTSTUDY_HPP__

#include "printTasks.hpp"

class printStudy : public printTasks
{
        private:
                StudyTask* pointer;
        public:
                printStudy(StudyTask* ptr): pointer(ptr) { }
		~printStudy()
		{
			delete pointer;
		}
		void print()
                {
			cout << "=Study Task=" << endl;
                        cout << "Title: " << pointer->getTitle() << endl;
                        cout << "Description: " << pointer->getDescription() << endl;
                        cout << "Classification: " << pointer->getClassification() << endl;
                        cout << "Duration: " << pointer->getDuration() << endl;
                }
};

#endif

