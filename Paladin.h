#ifndef PALADIN_H
#define PALADIN_H
#include "Class.h"
#include <vector>;
//Focus on auras that buff self and allies, commune with diety, and keep track of isOathBroken?
class Paladin : public Class
{
private:
	vector<string> auraList;
	bool isOathBroken;
public:
	Paladin();
	string communeWithDiety();
	string castAura(string aura);
	string pickAura();
	virtual string attack();

};
#endif
