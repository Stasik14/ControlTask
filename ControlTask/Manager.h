#include"Group.h"

class Manager
{
private:
	string group;
public:
	double calculateAvgMark(Group group);
	int calculateAvgIq(Group grop);
	int findMaxMark(Group mark);
	int findMinMark(Group mark);
	int findMaxIq(Group group);
	int findMinIq(Group group);
	string findBestStudent(Group name);
	string findWorstStudent(Group name);
	string sortStdByName(Group list, Group name);
	string sortStdByMark(Group list, Group mark);
	string sortStdByIq(Group list, Group iq);
	double calculateAvgMarkSuperStdOnly(Group group);
	int calculateAvgIqSuperStdOnly(Group grop);

};

