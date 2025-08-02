#include "Wizard.h"


Wizard::Wizard()
{
	className = "Wizard";
	spellbook = { "Fireball", "Color Spray", "Cone of Cold", "Chain Lightning", "Acid Arrow" };
	srand(time(0));
}

string Wizard::castSpell(string spell)
{
	return " casts " + spell;
}

string Wizard::pickSpell()
{
	return spellbook[rand() % 5];
}

string Wizard::attack()
{
	return "the " + className + castSpell(pickSpell());
	
}