#ifndef _STUDYTASK_TEST_HPP_
#define _STUDYTASK_TEST_HPP_

#include "gtest/gtest.h"

#include "studyTask.hpp"
#include <string>

using namespace std;

TEST(StudyTaskTest, baserun){

	StudyTask* task = new StudyTask("title","description", "study", 40);
	EXPECT_EQ(task->getDuration(), 40);
	
}
TEST(StudyTaskTest, secondRun){

        StudyTask* task = new StudyTask("title","description", "study", 40);
        task->setDuration(22);
        EXPECT_EQ(task->getDuration(), 22);

}



#endif
