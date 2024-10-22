#include "Weapon1.h"
#include "Characteristic.h"
#include "MyMath.h"
#include <iostream>
using namespace std;


int main()
{
    Weapon1 sword("Sword", 11, 10, 5);
    Weapon1 axe("Axe", 23, 15, 7);

   // sword.printInfo();
   // axe.printInfo();

    float maxWeight = 4.0;
    if (sword.isTooHeavy(maxWeight)) {
        cout << "The sword is too heavy to lift: " << maxWeight << endl;
    }
    else {
        cout << "The sword can be lifted: " << maxWeight << endl;
    }

   float totalWeaponWeight = sword.totalWeight(axe);
   cout << "Total weight of the sword and axe: " << totalWeaponWeight << endl;

    float additionalWeight = 3.5;
    float totalAdditionalWeight = sword.totalWeight(additionalWeight);
    cout << "Total weight of the sword and additional weight: " << totalAdditionalWeight << endl;

  
    Weapon1* bow = new Weapon1("Bow", 30, 7, 3);
    bow->printInfo();

    maxWeight = 50;
    if (bow->isTooHeavy(maxWeight)) {
        cout << "The bow is too heavy to lift: " << maxWeight << endl;
    }
    else {
        cout << "The bow can be lifted: " << maxWeight << endl;
    }

    //4.  Проверьте работу Get и Set методов.

    cout << "Sword name:" << sword.getName() << endl;
    cout << "Sword weight:" << sword.getWeight() << endl;
    cout << "Sword damage:" << sword.getDamage() << endl;
    


    sword.setDamage(12);
    cout << "New sword damage: " << sword.getDamage() << endl;
   
    Characteristic Luna(20);
    cout << "Luna's strength: " << Luna.getStrength() << endl;

    //7. Создайте в классе Characteristic функцию GetDamage, возвращающую суммы силы и урон от переданного оружия.
    int totalDamage = Luna.getDamage(sword);
    cout << "Total damage of strength and weapon damage is " << totalDamage << endl;

    delete bow;


    float a = 12.5;
    float b = 2;

    cout << "Add: " << MyMath::Add(a, b) << endl;
    cout << "Sub: " << MyMath::Sub(a, b) << endl;
    cout << "Mult: " << MyMath::Mult(a, b) << endl;
    cout << "Div: " << MyMath::Div(a, b) << endl;
   
    cout << "Total number of method calls: " << MyMath::getOperation() << endl;

}

