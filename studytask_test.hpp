#ifndef _STUDYTASK_TEST_HPP_
#define _STUDYTASK_TEST_HPP_

#include "gtest/gtest.h"

#include "studyTask.hpp"
#include <string>

using namespace std;

TEST(StudyTaskTest, baserun){

	StudyTask* task = new StudyTask("title","description", "study", 3, 40, "March 13");
	task->setClassification("study class");
	EXPECT_EQ(task->getClassification(), "study class");
	
}
TEST(StudyTaskTest, secondRun){

        StudyTask* task = new StudyTask("title","description", "study", 3, 40, "March 13");
        task->setClassification("science");
        EXPECT_EQ(task->getClassification(), "science");

}



#endif
