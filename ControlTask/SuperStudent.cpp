#include "SuperStudent.h"
#include "Header.h"

SuperStudent::SuperStudent()
{
	setName("no name");
	setMark(0);
	setAbility(0);

}

SuperStudent::SuperStudent(string name, int mark, int ability)
{
	setName(name);
	setMark(mark);
	setAbility(ability);
}

int SuperStudent::getAbility() {
	return ability;
}

void SuperStudent::setAbility(int ability)
{
	if (ability >= MIN_ABILITY && ability <= MAX_ABILITY)
	{
		this->ability = ability;
	}
}

string SuperStudent::getInfo()
{
	return getName() + "; mark = " + to_string(getMark())
		+ "; ability = " + to_string(getAbility());	
}

int SuperStudent::getIq() {
	return getMark() * 10 + getAbility();
}