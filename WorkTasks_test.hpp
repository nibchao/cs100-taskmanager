#ifndef WorkTasks_test_hpp
#define WorkTasks_test_hpp

#include "gtest/gtest.h"
#include "WorkTasks.h"

TEST(WorkTasks, testNum1){
	WorkTasks* task = new WorkTasks("17:00", "Oct 24", "Zoom", "Meeting with someone",8,"did not attend");
	EXPECT_EQ(8,task->getHowImportant());
	EXPECT_EQ("did not attend", task->getCurrentStatus());
	delete task;
}


TEST(WorkTasks, testNum2){
        WorkTasks* task = new WorkTasks("15:00", "Oct 25", "Zoom", "Meeting with someone",8,"did not attend");
        task->howImportant(10);
	EXPECT_EQ(10,task->getHowImportant());
	task->whatState("in progress");
        EXPECT_EQ("in progress", task->getCurrentStatus());
	delete task;
}



#endif
