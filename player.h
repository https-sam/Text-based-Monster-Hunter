#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "weapon.h"

using namespace std;

class Player
{
    public:
        Player();
        Player(string name, int health, int power, int money, Weapon weapons[100], int level, int exp);
        void setName(string name);
        void setHealth(int health);
        void setPower(int power);
        void setMoney(int money);
        void setWeapon(Weapon weapon);
        void setWeaponSell(Weapon weapon, int index);
        void setWeaponsCount(int num);
        void decreaseWeaponsCount(int num);
        void setPotion(int num);
        void setLevel(int level);
        void setExp(int exp);


        string getName() const;
        int getHealth() const;
        int getPower() const;
        int getMoney() const;
        int getWeaponCount() const;
        Weapon getWeapon(int index) const;
        int getPotion() const;
        int getLevel() const;
        int getExp() const;
  

    private:
        string Name;
        int Health;
        int Power;
        int Money;
        int weaponsCount = 0;
        static const int weaponSize = 100;
        Weapon Weapons[weaponSize];  //limits the inventory size to 100
        int Potion;
        int Level;
        int PlayerExp;
    
        
};
#endif