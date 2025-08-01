#ifndef ARMOR_H
#define ARMOR_H
#include <iostream>
using namespace std;
class Armor
{
private:
	string armorType; //none, light, medium, heavy
	string material;
	bool isEnchanted; //gives wearer non-magical resistance
	int armorLvl; //up to lvl 3 (give wearer damage reduction equal to lvl)
public:
	Armor();
	Armor(string armorType, string material, bool enchant, int lvl);
	void setArmorType(string type);
	void setMaterial(string material);
	void setEnchantStatus(bool status);
	void setArmorLvl(int lvl);
	string getArmorType();
	string getMaterial();
	bool getEnchantStatus();
	int getArmorLvl();
};
#endif

