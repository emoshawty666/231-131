#include "MagicWeapon.h"
#include <iostream>
using namespace std;

MagicWeapon::MagicWeapon() : Weapon1("Something", 0, 0, 0, WeaponEnum::ONEHANDED), extraDamage(0) {}

MagicWeapon::MagicWeapon(string name, float weight, int damage, int maxWeight, WeaponEnum t, int extraDamage) : Weapon1(name, weight, maxWeight, damage, t), extraDamage(extraDamage){}

int MagicWeapon::getExtraDamage()
{
	return extraDamage;
}
void MagicWeapon::printInfo() const
{
	Weapon1::printInfo();
	cout << "Extra Magic Damage: " << extraDamage << endl;
}

int MagicWeapon::getDamage() const
{
	return damage + extraDamage;
}

void MagicWeapon::Attack()
{
	cout << "Attack with magic weapon" << endl;
}
