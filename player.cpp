#include <iostream>
#include "player.h"
#include <string>
#include <cmath>
#include <vector>
#include <fstream>  

using namespace std;

//constructors
Player::Player()  //default
{
    Health = 100;
    Power = 15;
    Money = 200;
    Weapons;
    Level = 0;
    PlayerExp = 0;
}

Player::Player(string name, int health, int power, int money, Weapon weapons[100], int level, int exp)
{
    Name = name;
    Health = health;
    Power = power;
    Money = money;
    Weapons;
    Level = level;
    PlayerExp = exp;
}

//setters
void Player::setName(string name)
{
    Name = name;
}


void Player::setHealth(int health)
{
    Health = health;
}


void Player::setPower(int power)
{
    Power = power;
}


void Player::setMoney(int money)
{
    Money = money;
}



void Player::setWeapon(Weapon weapon)
{
    if(weaponsCount < 100)
    {
        // int size = sizeof(Weapons);
        Weapons[weaponsCount] = weapon;
        weaponsCount++;
    }
}

void Player::setWeaponsCount(int num)
{
    weaponsCount = num;
}


void Player::decreaseWeaponsCount(int num)
{
    setWeaponsCount(weaponsCount - num);
}


void Player::setWeaponSell(Weapon weapon, int index)
{
    Weapons[index] = weapon;
}


void Player::setPotion(int num)
{
    Potion += num;
}

void Player::setLevel(int PlayerExp)
{
    Level = PlayerExp/1000;
}


void Player::setExp(int exp)
{
    PlayerExp += exp;
}





//getters
string Player::getName() const
{
    return Name;
}


int Player::getHealth() const
{
    return Health;
}


int Player::getMoney() const
{
    return Money;
}

int Player::getPower() const
{
    return Power;
}


int Player::getWeaponCount() const
{
    return weaponsCount;
}

Weapon Player::getWeapon(int index) const
{
    return Weapons[index];
}

int Player::getPotion() const
{
    return Potion;
}


int Player::getLevel() const
{
    return Level;
}

int Player::getExp() const
{
    return PlayerExp;
}


/*
    Weapon sword("Sword", 0, 20);
    Weapon greatSword("GreatSword", 300, 25);  // wepaon definitions
    Weapon longSword("LongSword", 450, 30);
    Weapon axe("Axe", 600, 42);
    Weapon bow("Bow", 900, 53);
    Weapon bowgun("Bowgun", 1200, 90);
    Weapon dualBlades("DualBlades", 2800, 120);
    Weapon hammer("Hammer", 4500, 390);
    Weapon lance("Lance", 6800, 970);
*/