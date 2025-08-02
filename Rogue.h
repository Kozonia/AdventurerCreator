#ifndef ROGUE_H
#define ROGUE_H
#include "Class.h"
//Focus on sneak attack, stealing, and trap making
class Rogue : public Class
{
private:
	bool isHidden;
public:
	Rogue();
	string hide();
	string steal(string obj);
	string buildTrap();
	virtual string attack();
};
#endif;

