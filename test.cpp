#include "gtest/gtest.h"

#include "personalTask.cpp"
#include "personalTask.hpp"

#include <string>

using namespace std;

TEST(PersonalTaskTest, baserun)
{
        PersonalTask* task = new PersonalTask("title","description", "personal", "March 13");
        EXPECT_EQ(task->getDate(), "March 13");
        delete task;
}

TEST(PersonalTaskTest, Secondrun)
{
        PersonalTask* task = new PersonalTask("title","description", "Personal", "March 13");
        task->setDate("January 1");
        EXPECT_EQ(task->getDate(), "January 1");
        delete task;
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
