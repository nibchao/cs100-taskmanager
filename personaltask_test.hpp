#ifndef _PERSONALTASK_TEST_HPP_
#define _PERSONALTASK_TEST_HPP_

#include "gtest/gtest.h"

#include "personalTask.hpp"
#include <string>

using namespace std;

TEST(PersonalTaskTest, baserun){

        PersonalTask* task = new PersonalTask("title","description", "Personal", 3, 40, "March 13");
        task->setClassification("Personal task");
        EXPECT_EQ(task->getClassification(), "Personal task");

}

TEST(PersonalTaskTest, Secondrun){

        PersonalTask* task = new PersonalTask("title","description", "Personal", 3, 40, "March 13");
        task->setClassification("Do taxes");
        EXPECT_EQ(task->getClassification(), "Do taxes");

}



#endif

