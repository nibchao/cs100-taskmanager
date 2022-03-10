#ifndef __PERSONALTASK_HPP__
#define __PERSONALTASK_HPP_

#include "generalTask.hpp"
#include "generalTask.cpp"
#include <iostream>
#include <string>
using namespace std;


class PersonalTask : public generalTask{

public:
        PersonalTask(std::string title1, std::string des, std::string classif, int prior, int dur, std::string date1): generalTask(title1, des, classif, prior, dur, date1){};

        ~PersonalTask(){};

        virtual void setClassification(std::string classif2){
                this->editClassification(classif2);
                return; };


        virtual void printTask(){return;};
                //general task not yet implemented so subject to change
};
                //                //
#endif
                //
