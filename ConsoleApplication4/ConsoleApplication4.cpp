#include "Weapon1.h"
#include "Characteristic.h"
#include "MyMath.h"
#include "Player.h"
#include "MagicWeapon.h"
#include "SingleUseWeapon.h"
#include "DualWield.h"
#include <iostream>
using namespace std;


int main()
{
   //Weapon1 sword("Sword", 11, 10, 5, WeaponEnum::ONEHANDED);
   //Weapon1 axe("Axe", 23, 15, 7, WeaponEnum::TWOHANDED);
  
   //sword.printInfo();
   //axe.printInfo();


   /* float maxWeight = 4.0;
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

  
    Weapon1* bow = new Weapon1("Bow", 30, 7, 3, WeaponEnum::BOW);
    bow->printInfo();

    maxWeight = 50;
    if (bow->isTooHeavy(maxWeight)) {
        cout << "The bow is too heavy to lift: " << maxWeight << endl;
    }
    else {
        cout << "The bow can be lifted: " << maxWeight << endl;
    }*/

    //4.  Проверьте работу Get и Set методов.

    //cout << "Sword name:" << sword.getName() << endl;
    //cout << "Sword weight:" << sword.getWeight() << endl;
    //cout << "Sword damage:" << sword.getDamage() << endl;
    //


    //sword.setDamage(12);
    //cout << "New sword damage: " << sword.getDamage() << endl;
  
    //Characteristic Luna(20);
    //cout << "Luna's strength: " << Luna.getStrength() << endl;

    ////7. Создайте в классе Characteristic функцию GetDamage, возвращающую суммы силы и урон от переданного оружия.
    //int totalDamage = Luna.getDamage(sword);
    //cout << "Total damage of strength and weapon damage is " << totalDamage << endl;

    //delete bow;


   float a = 12.5;
   float b = 2;

   cout << "Add: " << MyMath::Add(a, b) << endl;
   cout << "Sub: " << MyMath::Sub(a, b) << endl;
   cout << "Mult: " << MyMath::Mult(a, b) << endl;
   cout << "Div: " << MyMath::Div(a, b) << endl;

   cout << "Total number of method calls: " << MyMath::getOperation() << endl;


   //3. Используя if, выведите текстовое представление типа оружия у объекта.
   // cout << "Weapon type of sword - ";
   // if (sword.getType() == WeaponEnum::ONEHANDED)
   // {
   //     cout << "One-handed" << endl;
   // }
   // else if (sword.getType() == WeaponEnum::TWOHANDED)
   // {
   //     cout << "-handed" << endl;
   // } else if (sword.getType() == WeaponEnum::BOW)
   // {
   //     cout << "Bow" << endl;
   // } else if (sword.getType() == WeaponEnum::CROSSBOW)
   // {
   //     cout << "Crossbow" << endl;
   // }

   //4. Создайте структуру игрока со следующими переменными : id(уникальный идентификатор), логин и пароль.
    Player zxcOpium;
    zxcOpium.id = 242;
    zxcOpium.login = "opium";
    zxcOpium.password = "somethingthere";

    zxcOpium.printInfo();

    /*MagicWeapon BookOfShadows("Book of Shadows", 2, 6, 4, WeaponEnum::ONEHANDED, 10);
    cout << "Book of Shadows characteristics " << endl;
    BookOfShadows.printInfo();

    MagicWeapon defaultMagicWeapon;
    cout << "\nDeafult Magic Weapon parameters: " << endl;
    defaultMagicWeapon.printInfo();
    cout << "\nExtra damage of Book of Shadows: " << BookOfShadows.getExtraDamage() << endl;

    cout << "Total damage of magic weapon: " << BookOfShadows.getDamage() << endl;*/

   /* if (BookOfShadows > sword)
    {
        cout << BookOfShadows.getDamage() << " > " << sword.getDamage() << endl;
        cout << "Magic weapon has more damage" << endl;
    }
    else
    {
        cout << sword.getDamage() << " >= " << BookOfShadows.getDamage() << endl;
        cout << "Sword has more or equal damage" << endl;
    }

    if (sword < BookOfShadows)
    {
        cout << sword.getDamage() << " < " << BookOfShadows.getDamage() << endl;
        cout << "Sword has less damage" << endl;
    }
    else
    {
        cout << BookOfShadows.getDamage() << " <= " << sword.getDamage() << endl;
        cout << "Book of shadows has less or equal damage" << endl;
    }*/

   MagicWeapon magicSword("Book of Shadows", 2, 6, 4, WeaponEnum::ONEHANDED, 10);

   magicSword.Attack();

   SingleUseWeapon bomb("Bomb", 3, 12, 5, WeaponEnum::ONEHANDED);

   bomb.Attack();
   bomb.Attack();
   bomb.Attack();

   DualWield<MagicWeapon, SingleUseWeapon> dualWielder(magicSword, bomb);
    
   dualWielder.getLeftHand();

   SingleUseWeapon grenade("Grenade", 1.2, 50,4, WeaponEnum::ONEHANDED);

   DualWield <MagicWeapon, int> dualWielder2(grenade, 0101);
   cout << "Right hand weapon ID: " << dualWielder2.getRightHand() << endl;

}

