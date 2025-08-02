#ifndef ADVENTURER_H
#define ADVENTURER_H
#include <iostream>
#include "Weapon.h"
#include "Armor.h"
#include "Class.h"
using namespace std;
class Adventurer
{
protected:
	string name;
	string race;
	string background;
	int level;
	int hpPerLvl;
	int speed;
	Armor* AdventurerArmor;
	Weapon* AdventurerWeapon;
	Class* AdventurerClass;
public:
	Adventurer();
	Adventurer(string name, string race, string background, int lvl, Armor* AdventurerArmor, Weapon* AdventurerWeapon, Class* AdventurerClass);
	void act();
	void examine(string obj);
	void move(int feet); //can move less than or equal to the speed amount
	void adventurerInfo(); //Describes adventurer
	void setName(string name);
	void setRace(string race);
	void setBackground(string background);
	void setLevel(int lvl);
	void setSpeed(int speed);
	string getName();
	string getRace();
	string getBackground();
	int getLevel();
	int getSpeed();

};
#endif
