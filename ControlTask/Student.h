#include"Header.h"

class Student
{
private:
	static int count;
protected:
	string name;
	int mark;
public:
	static const int MIN_MARK = 0;
	static const int MAX_MARK = 10;

	Student();
	Student(string name, int mark);
	~Student();

	string getName();
	void setName(string name);
	int getMark();
	void setMark(int mark);

	virtual string getInfo(); 
	virtual int getIq();

	bool operator==(Student student);
	bool operator!=(Student student);


};

