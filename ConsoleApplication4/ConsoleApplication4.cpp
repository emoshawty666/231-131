#include <iostream>
using namespace std;

class Weapon
{
public:
	int damage;
	float weight;
	string name;

	Weapon(string name, float weight, int damage) : name(name), damage(damage), weight(weight) {}

	Weapon() : name("Vandal"), damage(150), weight(15) {}


	~Weapon(){
		cout << "Object" << " " << name << " " << "deleted\n";
	}

};



int main()
{
	Weapon weapon1("Axe", 30, 23);
	Weapon weapon2;
	
	cout << "Name of weapon 1 - " << weapon1.name << ", Damage = " << weapon1.damage << ", Weight = " << weapon1.weight << endl;
	cout << "Name of weapon 2 - " << weapon2.name << ", Damage = " << weapon2.damage << ", Weight = " << weapon2.weight << endl;
	

}