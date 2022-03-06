#include "gtest/gtest.h"

#include "TaskList.hpp"
#include "WorkTask.h"
#include "PrintTasks.h"
#include "generalTask.hpp"
#include "generalTask.cpp"
#include "studytask.hpp"

using namespace std

TEST(TaskListTest, printBlankTaskList)
{
	TaskList TaskList;
	TaskList.printTaskList();
}

TEST(TaskListTest, printPersonalTask)
{
	TaskList TaskList;
	PersonalTask* task = new PersonalTask("p task title", "p task description", "Personal", 1, 20, "March 11");
	TaskList.createPersonalTask(task);
	TaskList.printTaskList();
}

TEST(TaskListTest, printWorkTask)
{
	TaskList TaskList;
	WorkTask* task = new WorkTask("w task title", "w task description", "Work", 2, 30, "March 12");
	TaskList.createWorkTask(task);
	TaskList.printTaskList();
}

TEST(TaskListTest, printStudyTask)
{
	TaskList TaskList;
	StudyTask* task = new StudyTask("s task title", "s task description", "study", 3, 40, "March 13");
	TaskList.createStudyTask(task);
	TaskList.printTaskList();
}

TEST(TaskListTest, printAllTask)
{
	TaskList TaskList;
	PersonalTask* task = new PersonalTask("p task title", "p task description", "Personal", 1, 20, "March 11");
	WorkTask* task = new WorkTask("w task title", "w task description", "Work", 2, 30, "March 12");
	StudyTask* task = new StudyTask("s task title", "s task description", "study", 3, 40, "March 13");
	TaskList.createPersonalTask(task);
	TaskList.createWorkTask(task);
	TaskList.createStudyTask(task);
	TaskList.printTaskList();
}
	
int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
