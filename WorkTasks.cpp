#include "WorkTasks.hpp"
#include <string>

using namespace std;

void WorkTasks::priority(int value){
	urgency = value;
}

void WorkTasks::state(string str){
	taskState = str;
}

int WorkTasks::getHowImportant(){
	return urgency;
}

string WorkTasks::getCurrentStatus(){
	return taskState;
}
