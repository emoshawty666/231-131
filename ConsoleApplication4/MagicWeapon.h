#pragma once
#include "Weapon1.h"
#include <iostream>
using namespace std;

class MagicWeapon : public Weapon1
{
private:
	int extraDamage;

public:
	MagicWeapon();
	MagicWeapon(string name, float weight, int damage, int maxWeight, WeaponEnum t, int extraDamage);

	int getExtraDamage();
	void printInfo() const override;

	int getDamage() const override;
	

	void Attack() override;

};

