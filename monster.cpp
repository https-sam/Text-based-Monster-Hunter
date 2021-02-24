#include <iostream>
#include "monster.h"
#include <string>
#include <cmath>
#include <vector>
#include <fstream>  

using namespace std;

//constructors
Monster::Monster()  //default
{
    Name = "";
    Weakness = "";
    Health = 0;
    Power = 0;
    Reward = 0;
}

Monster::Monster(string name, string weakness, int health, int power, int reward, int exp)
{
    Name = name;
    Weakness = weakness;
    Health = health;
    Power = power;
    Reward = reward;
    Exp = exp;
}

//setters

void Monster::setName(string name)
{
    Name = name;
}


void Monster::setWeakness(string weakness)
{
    Weakness = weakness;
}



void Monster::setHealth(int health)
{
    Health = health;
}


void Monster::setPower(int power)
{
    Power = power;
}


void Monster::setReward(int reward)
{
    Reward = reward;
}


void Monster::setExp(int exp)
{
    Exp = exp;
}

//getters

string Monster::getName() const
{
    return Name;
}


string Monster::getWeakness() const
{
    return Weakness;
}


int Monster::getHealth() const
{
    return Health;
}


int Monster::getPower() const
{
    return Power;
}


int Monster::getReward() const
{
    return Reward;
}   


int Monster::getExp() const
{
    return Exp;
}


