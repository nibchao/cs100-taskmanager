#include "WorkTasks.hpp"
#include <string>

using namespace std;

void WorkTask::howImportant(int importance){
	urgency = importance;
}

void WorkTask::whatStatus(string status){
	condition = status;
}

int WorkTask::getUrgency(){
	return urgency;
}

string WorkTask::getCurrentCondition(){
	return condition;
}

