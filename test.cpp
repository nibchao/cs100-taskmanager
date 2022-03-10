#include "gtest/gtest.h"

#include "personalTask.cpp"
#include "personalTask.hpp"

#include "generalTask.hpp"
#include "generalTask.cpp"
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

TEST(generalTaskTest, BlankInputs)
{
	generalTask* t = new generalTask("", "", "");
	EXPECT_EQ(t->getTitle(), "");
	EXPECT_EQ(t->getDescription(), "");
	EXPECT_EQ(t->getClassification(), "");
	delete t;
}

TEST(generalTaskTest, AllInputs)
{
	generalTask* t = new generalTask("Title", "Description", "personal");
	EXPECT_EQ(t->getTitle(), "Title");
	EXPECT_EQ(t->getDescription(), "Description");
	EXPECT_EQ(t->getClassification(), "personal");
	delete t;
}

TEST(generalTaskTest, editTaskInfo)
{
	generalTask* t = new generalTask("", "", "");
	t->editTitle("new title");
	t->editDescription("new desc");
	EXPECT_EQ(t->getTitle(), "new title");
  EXPECT_EQ(t->getDescription(), "new desc");
  EXPECT_EQ(t->getClassification(), "");
	delete t;
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
