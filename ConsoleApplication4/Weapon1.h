#pragma once
#include <string>
using namespace std;

class Characteristic;

enum class WeaponEnum
{
	ONEHANDED,
	TWOHANDED,
	BOW,
	CROSSBOW
};

class Weapon1
{
protected:
	string name;
	int damage;
	float weight;
	float maxWeight;
	WeaponEnum type;

public:
	Weapon1(string name, float weight, int damage, float maxWeight, WeaponEnum t);
	
	virtual void printInfo() const;
	float isTooHeavy(const float maxWeight);
	float totalWeight(float otherWeight);
	float totalWeight(const Weapon1& newWeight);

	~Weapon1();

	string getName();
	float getWeight();

	virtual void Attack() = 0;

	virtual int getDamage() const;
	WeaponEnum getType();

	void setDamage(int d);

	friend class Characteristic;

	bool operator>(const Weapon1& other);
	bool operator<(const Weapon1& other);

	

};