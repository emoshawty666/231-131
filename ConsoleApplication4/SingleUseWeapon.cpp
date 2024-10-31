#include "SingleUseWeapon.h"
#include <iostream>
using namespace std;

SingleUseWeapon::SingleUseWeapon() : Weapon1("Unknown Singleuse Weapon", 0, 0, 0, WeaponEnum::ONEHANDED), used(false) {}

SingleUseWeapon::SingleUseWeapon(string name, float weight, int damage, int maxWeight, WeaponEnum type) : Weapon1(name, weight, damage, maxWeight, type), used(false) {}


void SingleUseWeapon::Attack()
{
	if (used)
	{
		cout << "Weapon was used" << endl;
	}
	else
	{
		cout << "Attack singleuse weapon" << endl;
		used = true;
	}
}