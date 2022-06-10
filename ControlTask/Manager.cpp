#include "Manager.h"

double Manager::calculateAvgMark(Group group) {
	double avg = 0;

	for (int i = 0; i < group.size; i++)
	{
		avg += group.list[i].getMark();
	}

	avg /= group.size;

	return avg;
}
