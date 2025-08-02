#ifndef WIZARD_H
#define WIZARD_H
#include "Class.h"
#include <vector>
//Focus on spellcasting
class Wizard : public Class
{
private:
	vector<string> spellbook;
public:
	Wizard();
	string castSpell(string spell);
	string pickSpell();
	virtual string attack();

};
#endif

