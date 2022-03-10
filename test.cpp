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


int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
