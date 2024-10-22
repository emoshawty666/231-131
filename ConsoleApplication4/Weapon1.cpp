#include "Weapon1.h"
#include <iostream>
using namespace std;

Weapon1::Weapon1(const string& name, int damage, float weight, float maxWeight) : name(name), damage(damage), weight(weight), maxWeight(maxWeight) {}

float Weapon1::isTooHeavy(const float maxWeight)
{
	return weight > maxWeight;
}

void Weapon1::printInfo()
{
	cout << "Weapon: " << name << ", Damage: " << damage << ", Max Weight: " << maxWeight << ", Weight: " << weight << std::endl;
}


float Weapon1::totalWeight(float otherWeight)
{
	return this->weight + otherWeight;
}

float Weapon1::totalWeight(const Weapon1& newWeight)
{
	return totalWeight(newWeight.weight);
}

Weapon1::~Weapon1() {
	cout << "Weapon: " << name << ", Damage: " << damage << ", Weight: " << weight << " deleted\n";
}

string Weapon1::getName()
{
	return name;
}

float Weapon1::getWeight()
{
	return weight;
}

int Weapon1::getDamage()
{
	return damage;
}

void Weapon1::setDamage(int d)
{
	damage = d;
}

