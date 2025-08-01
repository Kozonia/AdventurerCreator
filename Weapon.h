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
	bool isEnchanted; //overcomes non-magical resistance if enchanted
	bool isFocus; //if true then it counts as a spellcasting focus and can cast spells
	int weaponLvl; //up to a +3 to damage at lvl 3 (max lvl is 3 and starts at 0)
public:
	Weapon();
	Weapon(string weaponType, string damageType, bool enchant, bool focus, int lvl);
	int calculatePhysicalDamage();
	void Attack(); //prints attack message
	void Cast(string spell); // prints spell message (must be focus)
	string getWeaponType();
	string getDamageType();
	bool getEnchantStatus();
	bool getFocusStatus();
	int getWeaponLvl();
	void setWeaponType(string type);
	void setDamageType(string type);
	void setEnchantStatus(bool status);
	void setFocusStatus(bool status);
	void setWeaponLvl(int lvl);
};
#endif
