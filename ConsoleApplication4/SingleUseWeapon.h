#pragma once
#include "Weapon1.h"
#include <iostream>
using namespace std;


class SingleUseWeapon : public Weapon1
{
private:
	bool used;
public:
	SingleUseWeapon();
	SingleUseWeapon(string name, float weight, int damage, int maxWeight, WeaponEnum type);

	void Attack() override;
};

