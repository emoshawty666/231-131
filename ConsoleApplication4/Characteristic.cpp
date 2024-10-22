#include "Characteristic.h"

Characteristic::Characteristic(int s) : strength(s) {}

int Characteristic::getDamage(const Weapon1& weapon)
{
	return strength + weapon.damage;
}

int Characteristic::getStrength()
{
	return strength;
}