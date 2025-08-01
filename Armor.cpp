#include "Armor.h"

Armor::Armor()
{
	armorType = "none";
	material = "none";
	isEnchanted = false;
	armorLvl = 0;
}

Armor::Armor(string armorType, string material, bool enchant, int lvl)
{
	this->armorType = armorType;
	this->material = material;
	isEnchanted = enchant;
	armorLvl = lvl;
}

void Armor::setArmorType(string type)
{
	armorType = type;
}

void Armor::setMaterial(string material)
{
	this->material = material;
}

void Armor::setEnchantStatus(bool status)
{
	isEnchanted = status;
}

void Armor::setArmorLvl(int lvl)
{
	armorLvl = lvl;
}

string Armor::getArmorType()
{
	return armorType;
}

string Armor::getMaterial()
{
	return material;
}

bool Armor::getEnchantStatus()
{
	return isEnchanted;
}

int Armor::getArmorLvl()
{
	return armorLvl;
}