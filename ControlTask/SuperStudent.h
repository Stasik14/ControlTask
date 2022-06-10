#include "Student.h"

class SuperStudent : public Student{
private:
	int ability;
public:
	static const int MIN_ABILITY = 0;
	static const int MAX_ABILITY = 10;

	SuperStudent();
	SuperStudent(string name, int mark,int ability);
	~SuperStudent();
	
	int getAbility();
	void setAbility(int ability);
	string getInfo() override;
	int getIq() override;
};

