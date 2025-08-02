#include "Adventurer.h"

Adventurer::Adventurer()
{
	name = "";
	race = "";
	background = "";
	level = 1;
	hpPerLvl = 4;
	speed = 30;
	AdventurerArmor = nullptr;
	AdventurerWeapon = nullptr;
}

Adventurer::Adventurer(string name, string race, string background, int lvl, Armor* AdventurerArmor, Weapon* AdventurerWeapon, Class* AdventurerClass)
{
	this->name = name;
	this->race = race;
	this->background = background;
	level = lvl;
	hpPerLvl = 4;
	speed = 30;
	this->AdventurerArmor = AdventurerArmor;
	this->AdventurerWeapon = AdventurerWeapon;

}

void Adventurer::examine(string obj)
{
	cout << name << " examines the " << obj << " closely." << endl;
}

void Adventurer::move(int feet)
{
	if (feet <= speed)
	{
		cout << name << " moves " << feet << " feet closer to the target." << endl;
	}
	else
	{
		cout << name << " does not have enough movement to move " << feet << " feet." << endl;
	}
	
}

void Adventurer::adventurerInfo()
{
	cout << "Name: " << name << endl << "Race: " << race << endl
		<< "Background: " << background << endl << "Class: " << className << endl
		<< "Level: " << level << endl;
}

void Adventurer::setName(string name)
{
	this->name = name;
}

void Adventurer::setRace(string race)
{
	this->race = race;
}

void Adventurer::setBackground(string background)
{
	this->background = background;
}

void Adventurer::setLevel(int lvl)
{
	level = lvl;
}

void Adventurer::setSpeed(int speed)
{
	this->speed = speed;
}

string Adventurer::getName()
{
	return name;
}

string Adventurer::getRace()
{
	return race;
}

string Adventurer::getBackground()
{
	return background;
}

int Adventurer::getLevel()
{
	return level;
}

int Adventurer::getSpeed()
{
	return speed;
}

void Adventurer::act()
{
	cout << name << " " << AdventurerClass->attack() << endl;
}
