#ifndef WorkTasks_test_hpp
#define WorkTasks_test_hpp

#include "gtest/gtest.h"
#include "WorkTasks.h"

TEST(WorkTasks, testNum1){
	WorkTasks* task = new WorkTasks("Zoom","Meeting with someone","Work", 8);
	EXPECT_EQ(8,task->getPriority());
	delete task;
}


TEST(WorkTasks, testNum2){
        WorkTasks* task = new WorkTasks("Zoom","Meeting with someone","work", 8);
        task->setPriority(0);
	EXPECT_EQ(0,task->getPriority());
	delete task;
}

#endif
