#include "gtest/gtest.h"
#include "studyTask.hpp"
#include <string>

TEST(StudyTaskTest, baserun){

        StudyTask* task = new StudyTask("title","description", "study", 40);
        EXPECT_EQ(task->getDuration(), 40);

}
TEST(StudyTaskTest, secondRun){

        StudyTask* task = new StudyTask("title","description", "study", 40);
        task->setDuration(22);
        EXPECT_EQ(task->getDuration(), 22);

}


int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
