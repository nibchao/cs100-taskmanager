#include "gtest/gtest.h"

#include "generalTask.hpp"
#include "generalTask.cpp"

TEST(generalTaskTest, BlankInputs)
{
	generalTask* t = new generalTask("", "", "", 0, 0, "");
	EXPECT_EQ(t->getTitle(), "");
	EXPECT_EQ(t->getDescription(), "");
	EXPECT_EQ(t->getClassification(), "");
	EXPECT_EQ(t->getPriority(), 0);
	EXPECT_EQ(t->getDuration(), 0);
	EXPECT_EQ(t->getDate(), "");
}

TEST(generalTaskTest, AllInputs)
{
	generalTask* t = new generalTask("Title", "Description", "personal", 2, 10, "March");
	EXPECT_EQ(t->getTitle(), "Title");
	EXPECT_EQ(t->getDescription(), "Description");
	EXPECT_EQ(t->getClassification(), "personal");
	EXPECT_EQ(t->getPriority(), 2);
	EXPECT_EQ(t->getDuration(), 10);
	EXPECT_EQ(t->getDate(), "March");
}

TEST(generalTaskTest, editTaskInfo)
{
	generalTask* t = new generalTask("", "", "", 0, 0, "");
	t->editTitle("new title");
	t->editDescription("new desc");
	t->editPriority(3);
	t->editDuration(15);
	t->editDate("jan");
	EXPECT_EQ(t->getTitle(), "new title");
        EXPECT_EQ(t->getDescription(), "new desc");
        EXPECT_EQ(t->getClassification(), "");
        EXPECT_EQ(t->getPriority(), 3);
        EXPECT_EQ(t->getDuration(), 15);
        EXPECT_EQ(t->getDate(), "jan");
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
