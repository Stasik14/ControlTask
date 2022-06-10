#include "Student.h"

int Student::count = 0;

Student::Student()
{
	count++;
	name = "no name";
	mark = 0;
	
}

Student::Student(string name,  int mark)
{
	count++;
	this->name = name;
	this->mark = mark;
}

Student::~Student()
{
	count--;
}

string Student::getName()
{
	return name;
}

void Student::setName(string initName)
{
	this->name = name;
}

int Student::getMark()
{
	return mark;
}

void Student::setMark(int mark)
{
	if (mark >= MIN_MARK && mark <= MAX_MARK)
	{
		this->mark = mark;
	}
}

string Student::getInfo()
{
	return name + "; mark = " + to_string(mark);
}

int Student::getIq() {
	return mark * 11;
}
	