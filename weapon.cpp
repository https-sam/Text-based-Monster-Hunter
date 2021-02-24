#include <iostream>
#include "weapon.h"
#include <string>
#include <cmath>
#include <vector>
#include <fstream>  

using namespace std;


Weapon::Weapon()
{
    Name = "";
    Price = 0;
    Power = 0;
}


Weapon::Weapon(string name, int price, int power)
{
    Name = name;
    Price = price;
    Power = power;

}

//setters
void Weapon::setName(string name)
{
    Name = name;
}

void Weapon::setPrice(int price)
{
    Price = price;
}


void Weapon::setPower(int power)
{
    Power = power;
}


//getters

string Weapon::getName() const
{
    return Name;
}


int Weapon::getPrice() const
{
    return Price;   
}


int Weapon::getPower() const
{
    return Power;
}
