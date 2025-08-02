#include <iostream>
#include "Adventurer.h"
#include "Weapon.h"
#include "Armor.h"
#include "Wizard.h"
#include "Rogue.h"
#include "Paladin.h"


int main()
{
	Class* WizardClass = new Wizard();
	Weapon Staff("staff", "spellcasting", 0);
	Armor Robes("unarmored", "cloth", true, 0);

	Class* RogueClass = new Rogue();
	Weapon Sickle("sickle", "slashing", 0);
	Armor LightArmor("light", "leather", false, 0);

	Class* PaladinClass = new Paladin();
	Weapon Maul("maul", "blugeoning", 0);
	Armor HeavyArmor("heavy", "platemail", false, 0);

	Adventurer Adventurer1("Alex", "Elf", "Noble", 1, &Robes, &Staff, WizardClass);
	Adventurer Adventurer2("Nora", "Drow", "Urchin", 1, &LightArmor, &Sickle, RogueClass);
	Adventurer Adventurer3("Thomas", "Human", "Knight", 1, &HeavyArmor, &Maul, PaladinClass);


	Adventurer1.adventurerInfo();
	cout << endl;
	Adventurer2.adventurerInfo();
	cout << endl;
	Adventurer3.adventurerInfo();
	cout << endl;
	
	Adventurer1.act();
	cout << endl;
	Adventurer2.act();
	cout << endl;
	Adventurer3.act();
	cout << endl;

	return 0;
}