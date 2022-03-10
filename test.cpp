#include "gtest/gtest.h"

#include "personalTask.hpp"
#include <string>

using namespace std;

TEST(PersonalTaskTest, baserun){

        PersonalTask* task = new PersonalTask("title","description", "March 13");
        EXPECT_EQ(task->getDate(), "March 13");

}

TEST(PersonalTaskTest, Secondrun){

        PersonalTask* task = new PersonalTask("title","description", "Personal", "March 13");
        task->setDate("January 1");
        EXPECT_EQ(task->getDate(), "January 1");

}


int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
