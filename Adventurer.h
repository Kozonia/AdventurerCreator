#ifndef ADVENTURER_H
#define ADVENTURER_H
#include <iostream>
#include "Weapon.h"
#include "Armor.h"
using namespace std;
class Adventurer
{
private:
	string name;
	string race;
	string background;
	int level; //up to 5 (martial classes get extra attack at lvl 5 and spellcaster amount of spells goes up each lvl)
	int hpPerLvl; //base is 4 (changes by class based on average of dice roll; base is 1d6)
	int speed; //how many feet per round (base is 30)
	Armor Armor; //How do i implement in constructor?
	Weapon Weapon; //How do i implement in constructor?
public:
	Adventurer();
	Adventurer(string name, string race, string background, int lvl);
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
