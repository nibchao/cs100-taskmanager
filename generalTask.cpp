#include "generalTask.hpp"

generalTask::generalTask(string title, string description, string classification, int priority, int duration, string date) : title(title),
 description(description),
 classification(classification),
 priority(priority),
 duration(duration),
 date(date) { }

string generalTask::getTitle()
{
	return title;
}

string generalTask::getDescription()
{
	return description;
}

string generalTask::getClassification()
{
	return classification;
}

int generalTask::getPriority()
{
	return priority;
}

int generalTask::getDuration()
{
	return duration;
}

string generalTask::getDate()
{
	return date;
}

void generalTask::editTitle(string newTitle)
{
	title = newTitle;
}

void generalTask::editDescription(string newDescription)
{
	description = newDescription;
}

void generalTask::editClassification(string newClassification)
{
	classification = newClassification;
}

void generalTask::editPriority(int newPriority)
{
	priority = newPriority;
}

void generalTask::editDuration(int newDuration)
{
	duration = newDuration;
}

void generalTask::editDate(string newDate)
{
	date = newDate;
}

virtual void generalTask::printTask() const = 0;
virtual void generalTask::setClassification() const = 0;
