#ifndef _STUDYTASK_TEST_HPP_
#define _STUDYTASK_TEST_HPP_

#include "gtest/gtest.h"

#include "studyTask.hpp"
#include <string>

using namespace std;

TEST(StudyTaskTest, baserun){

	StudyTask* task = new StudyTask("title","description", "study", "March 13");
	EXPECT_EQ(task->getDate(), "March 13");
	
}
TEST(StudyTaskTest, secondRun){

        StudyTask* task = new StudyTask("title","description", "study", "March 13");
        task->setDate("January 1");
        EXPECT_EQ(task->getDate(), "January 1");

}



#endif
