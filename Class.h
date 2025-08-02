#ifndef CLASS_H
#define CLASS_H
#include <iostream>
using namespace std;
class Class
{
protected:
	string className;
public:
	Class();
	virtual string attack() = 0;
	string getClassName();
	void setClassName(string name);

};
#endif

