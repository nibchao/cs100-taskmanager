#include "personalTask.hpp"
#include <string>

using namespace std;

void personalTask::setDate(string newDate)
{
	date = newDate;
}

string personalTask::getDate()
{
	return date;
}
