#include "WorkTask.hpp"
#include <string>

using namespace std;

void WorkTask::setPriority(int value){
	priority = value;
}

int WorkTask::getPriority(){
	return priority;
}
