#ifndef ADVENTURER_H
#define ADVENTURER_H
#include <iostream>
#include "Weapon.h"
using namespace std;
class Adventurer
{
private:
	int name;
	int Level; //up to 5
	int hpPerLvl;
	string armorType; // none, light, medium, heavy
	Weapon weapon;

};
#endif
