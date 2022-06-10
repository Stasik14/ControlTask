#include "Student.h"

class Group
{
	friend class Manager;

private:
	static int count;
	string name;
	int size;
	Student* list;
public:
	Group();
	Group(string name);
	Group(string name, Student* list, int size);
	~Group();

	Student get(int index);
	void add(Student student);
	int getSize();

	string getInfo();

	bool operator+(Group group);
	bool operator<(Group group);
	bool operator>(Group group);
	bool operator<=(Group group);
	bool operator>=(Group group);
	


};

