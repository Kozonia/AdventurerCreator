#include "Weapon.h"


Weapon::Weapon()
{
	weaponType = "sword";
	damageType = "slashing";
	weaponLvl = 0;
}

Weapon::Weapon(string weaponType, string damageType, int lvl)
{
	this->weaponType = weaponType;
	this->damageType = damageType;
	weaponLvl = lvl;
}

string Weapon::getDamageType()
{
	return damageType;
}

string Weapon::getWeaponType()
{
	return weaponType;
}

int Weapon::getWeaponLvl()
{
	return weaponLvl;
}

void Weapon::setWeaponType(string type)
{
	weaponType = type;
}

void Weapon::setDamageType(string type)
{
	damageType = type;
}

void Weapon::setWeaponLvl(int lvl)
{
	weaponLvl = lvl;
}