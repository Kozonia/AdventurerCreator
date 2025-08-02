#include "Rogue.h"
//Focus on sneak attack, stealing, and trap making

Rogue::Rogue()
{
	className = "Rogue";
	isHidden = false;
}

string Rogue::hide()
{
	isHidden = true;
	return "The " + className + " is hidden.";
}

string Rogue::steal(string obj)
{
	if (isHidden)
	{
		return "The " +className + " steals the " + obj + ".";
	}
	else
	{
		return "The " + className + " will be caught if they don't hide first.";
	}
}

string Rogue::buildTrap()
{
	return "The " + className + " sets a trap.";
}

string Rogue::attack()
{
	if (isHidden)
	{
		return "the " + className + " silently stabs the target.";
	}
	else
	{
		return "the " + className + " slashes at the target.";
	}
}