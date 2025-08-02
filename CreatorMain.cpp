#include <iostream>
#include "Adventurer.h"
#include "Weapon.h"
#include "Armor.h"
#include "Wizard.h"
#include "Rogue.h"
#include "Paladin.h"


int main()
{

	Adventurer* Adventurer1 = new Wizard();

	Adventurer1->adventurerInfo();


	return 0;
}