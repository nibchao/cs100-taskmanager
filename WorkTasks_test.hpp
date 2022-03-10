#ifndef WorkTasks_test_hpp
#define WorkTasks_test_hpp

#include "gtest/gtest.h"
#include "WorkTasks.h"

TEST(WorkTasks, testNum1){
	WorkTasks* task = new WorkTasks("Zoom","Meeting with someone","attend", 8, 60 , "Oct 24");
	EXPECT_EQ(8,task->getHowImportant());
	EXPECT_EQ("did not attend", task->getCurrentStatus());
	delete task;
}


TEST(WorkTasks, testNum2){
        WorkTasks* task = new WorkTasks("Zoom","Meeting with someone","attend", 8, 60 , "Oct 24");
        task->howImportant(10);
	EXPECT_EQ(10,task->getHowImportant());
	task->whatState("in progress");
        EXPECT_EQ("in progress", task->getCurrentStatus());
	delete task;
}



#endif
