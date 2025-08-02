#include "Paladin.h"


Paladin::Paladin()
{
	className = "Paladin";
	auraList = { "Vitality", "Strength", "Agility" };
	isOathBroken = false;
}

string Paladin::communeWithDiety()
{
	if (!isOathBroken)
	{
		return name + ", your deity is please to hear from you.";
	}
	else
	{
		return name + ", you can't seem to connect to your deity.";
	}
}

string Paladin::castAura(string aura)
{
	return name + " the " + className + " casts Aura of " + aura + ".\n";
}

string Paladin::pickAura()
{
	return auraList[rand() % 3];
}

string Paladin::attack()
{
	return name + " the " + className + " slashes at the target.\n";
}