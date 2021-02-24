#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>


using namespace std;

class Weapon
{
    public:
        Weapon();
        Weapon(string name, int price, int power);

        void setName(string name);
        void setPrice(int price);
        void setPower(int power);

        string getName() const;
        int getPrice() const;
        int getPower() const;
        
        
    private:
        string Name;
        int Price;
        int Power;

};
#endif
