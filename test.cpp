#include "gtest/gtest.h"

#include "TaskList.hpp"

#include "WorkTask.cpp"
#include "personalTask.cpp"
#include "studyTask.cpp"

#include <string>

using namespace std;

TEST(TaskListTest, printBlankTaskList)
{
	TaskList* tasklist = new TaskList();
	tasklist->printTaskList();
	delete tasklist;
}

TEST(TaskListTest, printPersonalTask)
{
	TaskList* tasklist = new TaskList();
	PersonalTask* task = new PersonalTask("p task title", "p task description", "Personal", "March 11");
	tasklist->createPersonalTask(task);
	tasklist->printTaskList();
	task->setDate("");
	//task->~PersonalTask();
	delete tasklist;
}

TEST(TaskListTest, printWorkTask)
{
	TaskList* tasklist = new TaskList();
	WorkTask* task = new WorkTask("w task title", "w task description", "Work", 2);
	tasklist->createWorkTask(task);
	tasklist->printTaskList();
	delete tasklist;
}

TEST(TaskListTest, printStudyTask)
{
	TaskList* tasklist = new TaskList();
	StudyTask* task = new StudyTask("s task title", "s task description", "study", 40);
	tasklist->createStudyTask(task);
	tasklist->printTaskList();
	delete tasklist;
}

TEST(WorkTask, test1)
{
	WorkTask* task = new WorkTask("Zoom","Meeting with someone","Work", 8);
	EXPECT_EQ(8,task->getPriority());
	delete task;
}

TEST(WorkTask, test2)
{
	WorkTask* task = new WorkTask("Zoom","Meeting with someone","work", 8);
  	task->setPriority(0);
	EXPECT_EQ(0,task->getPriority());
	delete task;
}

TEST(StudyTaskTest, baserun)
{
  	StudyTask* task = new StudyTask("title","description", "study", 40);
  	EXPECT_EQ(task->getDuration(), 40);
	delete task;
}
TEST(StudyTaskTest, secondRun)
{
  	StudyTask* task = new StudyTask("title","description", "study", 40);
  	task->setDuration(22);
  	EXPECT_EQ(task->getDuration(), 22);
	delete task;
}

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

TEST(TaskListTest, printAllTask)
{
	TaskList* tasklist = new TaskList();
	PersonalTask* task1 = new PersonalTask("p task title", "p task description", "Personal", "March 11");
	WorkTask* task2 = new WorkTask("w task title", "w task description", "Work", 2);
	StudyTask* task3 = new StudyTask("s task title", "s task description", "study", 40);
	tasklist->createPersonalTask(task1);
	tasklist->createWorkTask(task2);
	tasklist->createStudyTask(task3);
	tasklist->printTaskList();
	task1->setDate("");
	//task1->~PersonalTask();
	delete tasklist;
}
	
int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
