#ifndef MOONSTER_H
#define MOONSTER_H

#include <iostream>
#include <string>

using namespace std;

class Monster
{
    public:
        Monster();
        Monster(string name, string weakness, int health, int power, int reward, int exp);
        void setName(string name);
        void setWeakness(string weakness);
        void setHealth(int health);
        void setPower(int power);
        void setReward(int reward);
        void setExp(int exp);

        string getName() const;
        string getWeakness() const;
        int getHealth() const;
        int getPower() const;
        int getReward() const;
        int getExp() const;
        
        
        

    private:
        string Name;
        string Weakness;
        int Health;
        int Power;
        int Reward;
        int Exp;
        
        

};
#endif