#ifndef __STUDYTASK_HPP__
#define __STUDYTASK_HPP_

#include "generalTask.hpp"

class StudyTask : public generalTask{
private:
	int duration;
public:
	StudyTask(string title1, string des, string classif, int dur): generalTask(title1, des, classif), duration(dur){};

	void setDuration(int);

	int getDuration();
};

#endif
