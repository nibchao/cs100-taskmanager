
#include "PrintTasks.h"
using namespace std;

void print( printTask* task) 
{
	cout << "=Task='" << endl;
	cout << "Title: " << task->getTitle() << endl;
	cout << "Description: " << task->getDescription() << endl;
        cout << "Classification: " << task->getClassification() << endl;
        cout << "Duration: " << task->getDuration() << endl << endl;
}


