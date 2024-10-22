#pragma once

#include "Weapon1.h"

class Characteristic
{
private:
	int strength;

public:
	
	Characteristic(int s);

	int getDamage(const Weapon1& weapon);

	int getStrength();
	

};

