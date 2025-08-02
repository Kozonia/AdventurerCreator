#include "Class.h"

Class::Class()
{
	className = "commonfolk";
}

string Class::getClassName()
{
	return className;
}

void Class::setClassName(string name)
{
	className = name;
}