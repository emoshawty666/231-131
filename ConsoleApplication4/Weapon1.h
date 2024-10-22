#pragma once
#include <string>
using namespace std;


class Characteristic;


class Weapon1
{
private:
	string name;
	int damage;
	float weight;
	float maxWeight;
	
public:
	Weapon1(const string& name, int damage, float weight, float maxWeight);
	void printInfo();
	float isTooHeavy(const float maxWeight);
	float totalWeight(float otherWeight);
	float totalWeight(const Weapon1& newWeight);

	~Weapon1();

	string getName();
	float getWeight();
	int getDamage();

	void setDamage(int d);

	friend class Characteristic;


};

