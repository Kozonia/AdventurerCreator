#ifndef ADVENTURER_H
#define ADVENTURER_H
#include <iostream>
#include "Weapon.h"
#include "Armor.h"
using namespace std;
class Adventurer
{
private:
	int name;
	int Level; //up to 5
	int hpPerLvl;
	Armor armorType;
	Weapon weapon;

};
#endif
