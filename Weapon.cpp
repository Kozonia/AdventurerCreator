#include "Weapon.h"


Weapon::Weapon()
{
	weaponType = "sword";
	damageType = "slashing";
	isEnchanted = false;
	isFocus = false;
	weaponLvl = 0;
	srand(time(0));
}

Weapon::Weapon(string weaponType, string damageType, bool enchant, bool focus, int lvl)
{
	this->weaponType = weaponType;
	this->damageType = damageType;
	isEnchanted = enchant;
	isFocus = focus;
	weaponLvl = lvl;
	srand(time(0));
}

int Weapon::calculatePhysicalDamage()
{
	if (weaponType == "sword" || weaponType == "mace")
	{
		return (rand() % 6 + 1) + (rand() % 6 + 1) + weaponLvl;  //Simulates 2d6 plus weapon lvl
	}
	if (weaponType == "axe")
	{
		return (rand() % 12 + 1) + weaponLvl; //Simulates 1d12 plus weapon lvl
	}
	if (weaponType == "staff" || weaponType == "bow")
	{
		return (rand() % 8 + 1) + weaponLvl; //Simulates 1d8 plus weapon lvl
	}
	if (weaponType == "wand")
	{
		return (rand() % 4 + 1) + weaponLvl; //Simulates 1d4 plus weapon lvl
	}
	else
	{
		return 0;
	}
}

void Weapon::Attack()
{
	cout << "You attack with your " << weaponType << " and deal " << calculatePhysicalDamage() << " " << damageType << " damage to the target." << endl;
}

void Weapon::Cast(string spell)
{
	if (isFocus)
	{
		cout << "You cast " << spell << " on the target." << endl;
	}
	else
	{
		cout << "This weapon cannot be used to cast spells as it has not been attuned with the essence of magic." << endl;
	}
}

string Weapon::getWeaponType()
{
	return weaponType;
}

string Weapon::getDamageType()
{
	return damageType;
}

bool Weapon::getEnchantStatus()
{
	return isEnchanted;
}

bool Weapon::getFocusStatus()
{
	return isFocus;
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

void Weapon::setEnchantStatus(bool status)
{
	isEnchanted = status;
}

void Weapon::setFocusStatus(bool status)
{
	isFocus = status;
}

void Weapon::setWeaponLvl(int lvl)
{
	weaponLvl = lvl;
}