#include "WorkTasks.hpp"
#include <string>

using namespace std;

void WorkTasks::howImportant(int value){
	urgency = value;
}

void WorkTasks::whatState(string str){
	taskState = str;
}

int WorkTasks::getHowImportant(){
	return urgency;
}

string WorkTasks::getCurrentStatus(){
	return taskState;
}
