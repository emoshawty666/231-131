#include "Weapon1.h"
#include <iostream>
using namespace std;

Weapon1::Weapon1(string name,  float weight, int damage, float maxWeight, WeaponEnum t) : name(name), damage(damage), weight(weight), maxWeight(maxWeight), type(t) {}

float Weapon1::isTooHeavy(const float maxWeight)
{
	return weight > maxWeight;
}

void Weapon1::printInfo() const
{
	cout << "Weapon: " << name << ", Damage: " << damage << ", Max Weight: " << maxWeight << ", Weight: " << weight << endl;
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

int Weapon1::getDamage() const
{
	return damage;
}

void Weapon1::setDamage(int d)
{
	damage = d;
}

WeaponEnum Weapon1::getType()
{
	return type;
}

bool Weapon1::operator>(const Weapon1& smth)
{
	return this->getDamage() > smth.getDamage();
}

bool Weapon1::operator<(const Weapon1& smth)
{
	return this->getDamage() < smth.getDamage();
}
