#include "generalTask.hpp"

generalTask::generalTask(string title, string description, string classification) : title(title),
 description(description),
 classification(classification) { }

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
