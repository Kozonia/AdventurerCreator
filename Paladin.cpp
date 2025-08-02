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
		return "The " + className + " meditates for a moment.";
	}
	else
	{
		return "The " + className + " cannot seek out their deity in this state.";
	}
}

string Paladin::castAura(string aura)
{
	return "The " + className + " casts Aura of " + aura + ".\n";
}

string Paladin::pickAura()
{
	return auraList[rand() % 3];
}

string Paladin::attack()
{
	return "the " + className + " attacks at the target";
}