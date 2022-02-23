#ifndef __STUDYTASK_HPP__
#define __STUDYTASK_HPP_

#include "generalTask.hpp"
#include <iostream>
#include <string>
using namespace std;


class StudyTask : public generalTask {

public:
	StudyTask(string title, string des, string classif, int prior, int dur, string date): generalTask(title, des, classif, prior, dur, date){}

	StudyTask() : generalTask(){}
	~StudyTask(){delete this;}
	
	virtual void setClassification(std::string classif){
		this->editClassification(classif); }
		//general task not yet implemented so subject to change
}

#endif

