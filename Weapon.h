#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include "time.h"
using namespace std;
class Weapon
{
private:
	string weaponType; //sword, axe, mace, staff, wand, bow
	string damageType; //slashing, piercing, bludgeoning, magic
	int weaponLvl; //up to a +3 to damage at lvl 3 (max lvl is 3 and starts at 0)
public:
	Weapon();
	Weapon(string weaponType, string damageType, int lvl);
	string getWeaponType();
	string getDamageType();
	int getWeaponLvl();
	void setWeaponType(string type);
	void setDamageType(string type);

	void setWeaponLvl(int lvl);
};
#endif
