#include "gtest/gtest.h"

#include "TaskList.hpp"

#include "WorkTask.cpp"
#include "personalTask.cpp"
#include "studyTask.cpp"

#include <string>

using namespace std;





//TaskList


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


//WoekTask

TEST(WorkTask, testgetpriority1)
{
	WorkTask* task = new WorkTask("Zoom","Meeting with someone","Work", 8);
	EXPECT_EQ(8,task->getPriority());
	delete task;
}

TEST(WorkTask, testgetpriority2)
{
        WorkTask* task = new WorkTask("Zoom","Fire someone","Work", 3);
        EXPECT_EQ(3,task->getPriority());
        delete task;
}



TEST(WorkTask, testsetpriority1)
{
	WorkTask* task = new WorkTask("Zoom","Meeting with someone","work", 8);
  	task->setPriority(0);
	EXPECT_EQ(0,task->getPriority());
	delete task;
}

TEST(WorkTask, testsetpriority2)
{
        WorkTask* task = new WorkTask("Zoom","Lunch with investors","work", 8);
        task->setPriority(4);
        EXPECT_EQ(4,task->getPriority());
        delete task;
}






//StudyTask

TEST(StudyTaskTest, testgetduration1)
{
  	StudyTask* task = new StudyTask("title","description", "study", 40);
  	EXPECT_EQ(task->getDuration(), 40);
	delete task;
}

TEST(StudyTaskTest, testgetduration2)
{
        StudyTask* task = new StudyTask("title","description", "study", 35);
        EXPECT_EQ(task->getDuration(), 35);
        delete task;
}



TEST(StudyTaskTest, testSetduration1)
{
  	StudyTask* task = new StudyTask("title","description", "study", 40);
  	task->setDuration(22);
  	EXPECT_EQ(task->getDuration(), 22);
	delete task;
}

TEST(StudyTaskTest, testSetduration2)
{
        StudyTask* task = new StudyTask("title","description", "study", 40);
        task->setDuration(45);
        EXPECT_EQ(task->getDuration(), 45);
        delete task;
}



//PersonalTask


TEST(PersonalTaskTest, getDateTest1)
{
  	PersonalTask* task = new PersonalTask("title","description", "personal", "March 13");
  	EXPECT_EQ(task->getDate(), "March 13");
  	delete task;
}


TEST(PersonalTaskTest, getDateTest2)
{
        PersonalTask* task = new PersonalTask("title","description", "personal", "May 13");
        EXPECT_EQ(task->getDate(), "May 13");
        delete task;
}


TEST(PersonalTaskTest, setDateTest1)
{
  	PersonalTask* task = new PersonalTask("title","description", "Personal", "March 13");
  	task->setDate("January 1");
  	EXPECT_EQ(task->getDate(), "January 1");
  	delete task;
}

TEST(PersonalTaskTest, setDateTest2)
{
        PersonalTask* task = new PersonalTask("title","description", "Personal", "March 13");
        task->setDate("February 2");
        EXPECT_EQ(task->getDate(), "February 2");
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
