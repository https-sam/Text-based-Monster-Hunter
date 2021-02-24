#include "player.h"
#include "monster.h"
#include "weapon.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include <unistd.h>

using namespace std;

// This function takes user input(from choices) and returns a monster
Monster chooseMonster(int choice)
{  
    //defiene monsters' details
    Monster Rathian = Monster("Rathian", "throat", 100, 4, 20, 340);
    Monster Cavesnake = Monster("Cavesnake", "head", 120, 9, 30, 450);
    Monster Grieveling = Monster("Grieveling", "legs", 140, 9, 40, 550);
    Monster Mistclaw = Monster("Mistclaw", "eyes", 250, 10, 50, 740);
    Monster Steammorph = Monster("Steammorph", "stomach", 290, 11, 60, 880);
    Monster Abyssbrood = Monster("Abyssbrood", "arms", 340, 12, 100, 930);
    Monster Cavernghoul = Monster("Cavernghoul", "head", 480, 15, 120, 1500);
    Monster Phasetaur = Monster("Phasetaur", "legs", 550, 17, 150, 2200);
    Monster Netherflayer = Monster("Netherflayer", "eyes", 600, 18, 200, 3300);
    Monster Phantomcreep = Monster("Phantomcreep", "legs", 1400, 30, 500, 4500);

    Monster ret; // return value

    if(choice == 11)  // if user choses random, then set choice to a random number between 1-10
    {
        srand(time(NULL));
        choice = rand() % 10 + 1; 
    }

    if(choice == 1)
    ret = Rathian;

    else if(choice == 2)
    ret = Cavesnake;

    else if(choice == 3)
    ret = Grieveling;

    else if(choice == 4)
    ret = Mistclaw;

    else if(choice == 5)
    ret = Steammorph;

    else if(choice == 6)
    ret = Abyssbrood;

    else if(choice == 7)
    ret = Cavernghoul;

    else if(choice == 8)
    ret = Phasetaur;

    else if(choice == 9)
    ret = Netherflayer;

    else if(choice == 10)
    ret = Phantomcreep;

    return ret;
}

//This function prints the details of monsters.
void printMonsterDetails()
{
    int choice = 0;
    bool loop = true;

    while(loop)
    {
        cout << endl;
        cout << "[*] Enter a number of monster you'd like to check\n" << endl;
        cout << "[0] Exit" << endl;
        cout << "[1] Rathian" << endl;
        cout << "[2] Cavesnake" << endl;
        cout << "[3] Grieveling" << endl;
        cout << "[4] Mistclaw" << endl;
        cout << "[5] Steammorph" << endl;
        cout << "[6] Abyssbrood" << endl;
        cout << "[7] Cavernghoul" << endl;
        cout << "[8] Phasetaur" << endl;
        cout << "[9] Netherflayer" << endl;
        cout << "[10] Phantomcreep" << endl;
        cout << "\n>> ";
        cin >> choice;
        cout << "\n";


        if(choice == 0)
        {
            loop = false;
            break;
        }

        if(choice < 0 || choice > 10)
        cout << "[-] Invalid input" << endl;

        else if(choice == 1)
        {
            cout << "==================" << endl;
            cout << "Name: Rathian" << endl;
            cout << "Weakness: Throat" << endl;
            cout << "Reward: $20" << endl;
            cout << "==================" << endl;
        }

        else if(choice == 2)
        {
            cout << "==================" << endl;
            cout << "Name: Cavesnake" << endl;
            cout << "Weakness: head" << endl;
            cout << "Reward: $30" << endl;
            cout << "==================" << endl;
        }

        else if(choice == 3)
        {
            cout << "==================" << endl;
            cout << "Name: Grieveling" << endl;
            cout << "Weakness: legs" << endl;
            cout << "Reward: $40" << endl;
            cout << "==================" << endl;
        }   

        else if(choice == 4)
        {
            cout << "==================" << endl;
            cout << "Name: Mistclaw" << endl;
            cout << "Weakness: eyes " << endl;
            cout << "Reward: $50" << endl;
            cout << "==================" << endl;
        }

        else if(choice == 5)
        {
            cout << "==================" << endl;
            cout << "Name: Steammorph" << endl;
            cout << "Weakness: stomach " << endl;
            cout << "Reward: $60" << endl;
            cout << "==================" << endl;
        }

        else if(choice == 6)
        {
            cout << "==================" << endl;
            cout << "Name: Abyssbrood" << endl;
            cout << "Weakness: arms" << endl;
            cout << "Reward: $100" << endl;
            cout << "==================" << endl;
        }

        else if(choice == 7)
        {
            cout << "==================" << endl;
            cout << "Name: Cavernghoul" << endl;
            cout << "Weakness: head" << endl;
            cout << "Reward: $120" << endl;
            cout << "==================" << endl;
        }

        else if(choice == 8)
        {
            cout << "==================" << endl;
            cout << "Name: Phasetaur" << endl;
            cout << "Weakness: legs" << endl;
            cout << "Reward: $150" << endl;
            cout << "==================" << endl;
        }

        else if(choice == 9)
        {
            cout << "==================" << endl;
            cout << "Name: Netherflayer" << endl;
            cout << "Weakness: eyes" << endl;
            cout << "Reward: $200" << endl;
            cout << "==================" << endl;
        }

        else if(choice == 10)
        {
            cout << "==================" << endl;
            cout << "Name: Phantomcreep" << endl;
            cout << "Weakness: legs" << endl;
            cout << "Reward: $500" << endl;
            cout << "==================" << endl;
        }
    }
}


Player weaponShop(Player player)
{
    // works under a loop which keeps looping until user choses to quit
    /* option 1
        1) prints all the weapon along with the current money balance using getMoney().
        2) takes input from user to choose which weapon to buy if balance is not enough, then user won't be able to buy it
        3) subtract the amount of money cost from the balance
        4) set the purchased weapon to the Weapons using setWeapon() 
    */
    Weapon greatSword("GreatSword", 200, 12);
    Weapon longSword("LongSword", 450, 30);
    Weapon axe("Axe", 600, 42);
    Weapon bow("Bow", 900, 53);
    Weapon bowgun("Bowgun", 1200, 90);
    Weapon dualBlades("DualBlades", 2800, 120);
    Weapon hammer("Hammer", 4500, 390);
    Weapon lance("Lance", 6800, 970);

    int choice = 0;
    int choice1 = 0;
    int choice2 = 0;
    int choice3 = 0;

    bool sell = true;

    while(choice != 5)
    {
        choice = 0;
        choice1 = 0;
        choice2 = 0;
        choice3 = 0;
        
        cout << "\n===========================" << endl;
        cout << "Welcome to the weapon shop!" << endl;
        cout << "===========================" << endl;
        cout << "[*] Money Balance: $" << player.getMoney() << endl << endl;
        cout << "[1] See weapons" << endl;
        cout << "[2] Sell weapons" << endl;
        cout << "[3] Buy a weapon/potion" << endl;
        cout << "[4] Get a box" << endl;
        cout << "[5] Exit shop" << endl;
        cout << "\n>> ";
        cin >> choice;
        cout << endl;

        if(choice > 5 || choice < 0)
        cout << "[-] Invalid option" << endl;

        if(choice == 1)  // see weapons
        {
    
            while(choice1 != 9)
            {
                cout << "\n[*] Enter a number to see details\n" << endl;
                cout << "[1] GreatSword" << endl;
                cout << "[2] LongSword" << endl;
                cout << "[3] Axe" << endl;
                cout << "[4] Bow" << endl;
                cout << "[5] Bowgun" << endl;
                cout << "[6] DualBlades" << endl;
                cout << "[7] Hammer" << endl;
                cout << "[8] Lance" << endl;
                cout << "[9] Healing Potion" << endl;
                cout << "[10] Shop menu" << endl;
                cout << "\n>> ";


                cin >> choice1;

                if(choice1 < 0 || choice1 > 10 || choice == 0)
                cout << "\n[-] Invalid input" << endl;

                if(choice1 == 10)
                break;

                else
                {
                    switch(choice1) // weapon details
                    {
                        case 1:
                            cout << "==========" << endl;
                            cout << "GreatSword\nPrice: $200\nPower: 12 " << endl;
                            cout << "==========" << endl;
                            break;
                        
                        case 2:
                            cout << "==========" << endl;
                            cout << "LongSword\nPrice: $450\nPower: 30" << endl;
                            cout << "==========" << endl;
                            break;
                        
                        case 3:
                            cout << "==========" << endl;
                            cout << "Axe\nPrice: $600\nPower: 42" << endl;
                            cout << "==========" << endl;
                            break;

                        case 4:
                            cout << "==========" << endl;
                            cout << "Bow\nPrice: $900\nPower: 53" << endl;
                            cout << "==========" << endl;
                            break;

                        case 5:
                            cout << "==========" << endl;
                            cout << "Bowgun\nPrice: $1200\nPower: 90" << endl;
                            cout << "==========" << endl;
                            break;

                        case 6:
                            cout << "==========" << endl;
                            cout << "DualBlades\nPrice: $2800\nPower: 120" << endl;
                            cout << "==========" << endl;
                            break;

                        case 7:
                            cout << "==========" << endl;
                            cout << "Hammer\nPrice: $4500\nPower: 390" << endl;
                            cout << "==========" << endl;
                            break;

                        case 8:
                            cout << "==========" << endl;
                            cout << "Lance\nPrice: $6800\nPower: 970" << endl;
                            cout << "==========" << endl;
                            break;

                        case 9:
                            cout << "==========" << endl;
                            cout << "Potion\nPrice: $20\nHeal: 20HP" << endl;
                            cout << "==========" << endl;
                            break;
                    }
                }
            }  // end of loop
        } // end of option 1


        else if(choice == 2) // sell weapons
        {
            while(sell)
            {
                int num = 0;
                Weapon weapon;
                int numWeapons = player.getWeaponCount(); //the num of weapons player has

                cout << "=======================" << endl;
                cout << "Inventory - Name: Price" << endl;
                cout << "=======================" << endl;
                cout << "[*] Enter a number to sell a weapon" << endl;

                if(numWeapons == 0)
                cout << "[-] You don't have any weapons" << endl;

                cout << "\n[0] Menu" << endl;

                for (int i = 0; i < numWeapons; i++) // display all the weapons player has
                {
                    weapon = player.getWeapon(i);
                    cout << "[" << i+1 << "] " << weapon.getName() << ": $" << weapon.getPrice() << endl;
                }
                cout << "\n>> ";
                cin >> num;

                if(num == 0)
                break;

                if(num > numWeapons || num < 0) // checks that user input is correct
                {
                    cout << "\n[-] Invalid input\n" << endl;
                }


                else // if user enters a correct number
                {
                    // if the number of weapons user has is just 1, then it doesn't let user sell it
                    string choice = "";
                    weapon = player.getWeapon(num -1);
                    int price = weapon.getPrice();
                    Weapon swap;
                    cout << "\n[*] Are you sure you want to sell " << weapon.getName() << " for $" << price << "? (y/n)" << endl << endl;
                    cout << ">> ";
                    cin >> choice;
                    

                    if(choice == "y" || choice == "Y")
                    {
                        if(numWeapons != 1) // prevents from selling all weapons, so use will have at least 1 weapon in the inventory
                        {
                            int loop = numWeapons - num; // the number of times it loops

                            for (int i = 0; i < loop; i++)
                            {
                                swap = player.getWeapon(num + i); // set the weapon that's stored at the next index to the swap
                                player.setWeaponSell(swap, num+i-1); //delete the weapon user chose
                            }
                            player.decreaseWeaponsCount(1); // decrease it by 1

                            player.setMoney(player.getMoney() + price); //give money back to user
                            cout << "\n[+] Success, You earned $" << price << endl << endl;
                        }

                        else
                        {
                            cout << "\n[-] You need to have at least 1 weapon\n" << endl;
                        }
                        
                    }

                    else if(choice == "n" || choice == "N")
                    {
                        // do nothing
                    }

                    else 
                    cout << "Invalid input" << endl;

                }
            }// end of the loop
        }


        else if(choice == 3)  // buy a weapon
        {
            while(choice2 != 9)
            {
                cout << "======================" << endl;
                cout << "[1] Great Sword: $200" << endl;
                cout << "[2] Long Sword: $450" << endl;
                cout << "[3] Axe: $600" << endl;
                cout << "[4] Bow: $900" << endl;
                cout << "[5] Bowgun: $1200" << endl;
                cout << "[6] Dual Blades: $2800" << endl;
                cout << "[7] Hammer: $4500" << endl;
                cout << "[8] Lance: $6800" << endl;
                cout << "[9] Healing Potion $20" << endl;
                cout << "[10] Shop menu" << endl;
                cout << "======================" << endl;

                cout << "\n[*] Money Balance: $" << player.getMoney() << endl;
                cout << "[*] Enter the number of the item you'd like to purchase" << endl;
                cout << "\n>> ";
                cin >> choice2;


                if(choice2 == 1 && player.getMoney() >= 200)  //checks that player has enough money
                {
                    player.setWeapon(greatSword);  //sets weapon
                    player.setMoney(player.getMoney() - 200);  // subtract the price from player's balance
                    cout << "\n[+] Success, GreatSword has been added to your inventory" << endl;
                    break;
                }


                else if(choice2 == 2 && player.getMoney() >= 450)
                {
                    player.setWeapon(longSword);
                    player.setMoney(player.getMoney() - 450);
                    cout << "\n[+] Success, LongSword has been added to your inventory" << endl;
                    break;
                }
                

                else if(choice2 == 3 && player.getMoney() >= 600)
                {
                    player.setWeapon(axe);
                    player.setMoney(player.getMoney() - 600);
                    cout << "\n[+] Success, Axe has been added to your inventory" << endl;
                    break;
                }
            
                else if(choice2 == 4 && player.getMoney() >= 900)
                {
                    player.setWeapon(bow);
                    player.setMoney(player.getMoney() - 900);
                    cout << "\n[+] Success, Bow has been added to your inventory" << endl;
                    break;
                }
        

                else if(choice2 == 5 && player.getMoney() >= 1200)
                {
                    player.setWeapon(bowgun);
                    player.setMoney(player.getMoney() - 1200);
                    cout << "\n[+] Success, Bowgun has been added to your inventory" << endl;
                    break;
                }
            
                else if(choice2 == 6 && player.getMoney() >= 2800)
                {
                    player.setWeapon(dualBlades);
                    player.setMoney(player.getMoney() - 2800);
                    cout << "\n[+] Success, DualBlades has been added to your inventory" << endl;
                    break;
                }
            
                else if(choice2 == 7 && player.getMoney() >= 4500)
                {
                    player.setWeapon(hammer);
                    player.setMoney(player.getMoney() - 4500);
                    cout << "\n[+] Success, Hammer has been added to your inventory" << endl;
                    break;
                }
            
                else if(choice2 == 8 && player.getMoney() >= 6800)
                {
                    player.setWeapon(lance);
                    player.setMoney(player.getMoney() - 6800);
                    cout << "\n[+] Success, Lance has been added to your inventory" << endl;
                    break;
                }

                else if(choice2 == 9)
                {
                    int poNum = 0;
                    string poY;
                    cout << "\n[*] How many potions would you like to purchase? (Enter a number)" << endl;
                    cout << ">> ";
                    cin >> poNum;

                    cout << "[*] Total will be $" << poNum*20 << ". Would you like to purchase? (y/n)" << endl;
                    cout << ">> ";
                    cin >> poY;

                    if(poY == "Y" || poY == "y")  // if user confirms the purchase
                    {
                        if(poNum > 0)
                        {
                            if(player.getMoney() >= poNum*20)
                            {
                                player.setPotion(poNum); // add Potion(s)
                                player.setMoney(player.getMoney() - poNum*20);

                                if(poNum == 1)
                                cout << "\n[+] Success, " << poNum << " potion has been added to your inventory" << endl;

                                if(poNum >= 2)
                                cout << "\n[+] Success, " << poNum << " potions have been added to your inventory" << endl;
                                
                            }

                            else
                            {
                                cout << "[-] Not enough money" << endl;
                            }
                        }

                        else if(poNum <= 0)
                        cout << "[-] Invalud input" << endl;
                    }//

                    else if(poY == "N" || poY == "n")
                    {
                        // do nothing
                    }

                    break;
                }

                else if(10 < choice2 || choice2 < 0)
                cout << "\n[-] Invalid option" << endl;


                else
                {
                    if(choice2 != 10)
                    cout << "[-] Not enough money" << endl;
                }

                if(choice2 == 10)
                break;
            }
        }

    
        else if(choice == 4) // random box
        {
            /* option 4, -random weapon box- (costs $1200)
                1) prints the current money balance using getMoney().
                2) if balance is enough, subtract 1200 from the balance
                3) generate a random number and set a random weapon
                4) display which weapon player got
            */
            while(choice3 != 2)
            {
                int choice3 = 0;
                cout << "[*] Get a random weapon box" << endl;
                cout << "[*] Money Balance: $" << player.getMoney() << endl << endl;
                cout << "[1] Purchase: $1200" << endl;
                cout << "[2] Shop menu" << endl;
                cout << "\n>> ";
                cin >> choice3;
                cout << endl;

                if(player.getMoney() < 1200 && choice3 == 1) // if balance is < 1200, and player choses 1(buy a box)
                    cout << "\n[-] Not enough money\n" << endl;

                if(choice3 == 1 && player.getMoney() >= 1200)
                {
                    srand(time(NULL));
                    int num =  rand() % 8 + 1; //generates a number between 1-8

                    if(num == 1)
                    {
                        player.setWeapon(greatSword);
                        cout << "[+] You got GreatSword and it has been added to your inventory" << endl;
                        player.setMoney(player.getMoney() - 1200);  // subtract the price from player's balance
                    }

                    else if(num == 2)
                    {
                        player.setWeapon(longSword);
                        cout << "[+] You got LongSword and it has been added to your inventory" << endl;
                        player.setMoney(player.getMoney() - 1200);  
                    }

                    else if(num == 3)
                    {
                        player.setWeapon(axe);
                        cout << "[+] You got Axe and it has been added to your inventory" << endl;
                        player.setMoney(player.getMoney() - 1200);  
                    }

                    else if(num == 4)
                    {
                        player.setWeapon(bow);
                        cout << "[+] You got Bow and it has been added to your inventory" << endl;
                        player.setMoney(player.getMoney() - 1200);  
                    }

                    else if(num == 5)
                    {
                        player.setWeapon(bowgun);
                        cout << "[+] You got Bowgun and it has been added to your inventory" << endl;
                        player.setMoney(player.getMoney() - 1200);  
                    }

                    else if(num == 6)
                    {
                        player.setWeapon(dualBlades);
                        cout << "[+] You got DualBlades and it has been added to your inventory" << endl;
                        player.setMoney(player.getMoney() - 1200);  
                    }

                    else if(num == 7)
                    {
                        player.setWeapon(hammer);
                        cout << "[+] You got Hammer and it has been added to your inventory" << endl;
                        player.setMoney(player.getMoney() - 1200);
                    }

                    else if(num == 8)
                    {
                        player.setWeapon(lance);
                        cout << "[+] You got Lance and it has been added to your inventory" << endl;
                        player.setMoney(player.getMoney() - 1200);
                    }

                    cout << endl;
                }

                else if(choice3 == 2)
                break;
            }
        }

        else if(choice == 5)
        break;
    } // end of loop

    return player;
}

void savedata(Player player)
{
    //output the content of Player to a txt file named "data.txt" which includes: weapon count, money, number of portions, and weapons.
    
    string choice = "";
    ofstream out;

    cout << "[*] Do you want to save data? (y/n)" << endl;
    cout << ">> ";
    cin >> choice;

    if(choice == "n" || choice == "N")
    {
        // do nothing
        return;
    }

    else if(choice == "Y" || choice == "y") //output 3 types of data
    {
        int loop = player.getWeaponCount();

        out.open("data.txt");
        out << player.getWeaponCount() << endl;  // 1) weapon count
        out << player.getMoney() << endl;  // 2) money
        out << player.getPotion() << endl; // 3) number of portions
        out << player.getExp() << endl;  // 4) EXP
        out << player.getName() << endl; // 5) name


        for (int i = 0; i < loop; i++) // 6) weapon names
        {
            Weapon weapon = player.getWeapon(i);
            out << weapon.getName() << endl;
        }
        
        cout << "\n[+] Success, progress has been saved\n" << endl;
    }

    else
    {
        cout << "Invalid input" << endl;
    }
    
}

Player loadData(Player player)  // laod save data
{
    /*
        1) load the content of Player which includes: money, progress, and weapons using file stream
        2) look for a data.txt file and load the content
        3) set the date to Player, using setMoney(), setPortion(), and setWeapons()
    */

    Weapon sword("Sword", 0, 10);   // Wepaon definitions
    Weapon greatSword("GreatSword", 200, 12); 
    Weapon longSword("LongSword", 450, 30);
    Weapon axe("Axe", 600, 42);
    Weapon bow("Bow", 900, 53);
    Weapon bowgun("Bowgun", 1200, 90);
    Weapon dualBlades("DualBlades", 2800, 120);
    Weapon hammer("Hammer", 4500, 390);
    Weapon lance("Lance", 6800, 970);

    ifstream in;
    in.open("data.txt");

    if(in.fail()) // if there is no file, create a new game
    {
        string name;
        cout << "[-] Failed to find save data, creating a new game..." << endl;
        cout << "[*] Enter a username" << endl;
        cout << ">> ";
        cin >> name;
        cout << "[+] Welcome, " << name << "!!" << endl;
        ofstream out;
        out.open("data.txt");
        out << "0" << endl; // set default values
        out << "200" << endl; // money
        out << "0" << endl; // potion
        out << "0" << endl; // exp
        out << name << endl;// name
        player.setName(name);
        loadData(player); // re-load
    }

    else
    {
        string line;
        int loop = 0;
        vector <string> vec;
        int money = 0; 
        int potion = 0;
        int exp = 0;
        Weapon weapon;
        string username;

        getline(in, line); // store the number of weapons, which is stored on the first line in the file,
        loop = stoi(line); // line 1

        getline(in, line);  // set money (line 2)
        money = stoi(line);
        player.setMoney(money);

        getline(in, line);  // set potions(line 3)
        potion = stoi(line);
        player.setPotion(potion);

        getline(in, line);  // set EXP(line 4)
        exp = stoi(line);
        player.setExp(exp);
        player.setLevel(player.getExp());

        getline(in, line);  // set name(line 5)
        username = line;
        player.setName(username);


        while(getline(in, line)) // set weapons ( store wepon names in vector)
        {
            vec.push_back(line);
        }

        for(int j = 0; j < loop; j++)  // set weapons
        {
            if(vec[j] == "Sword")
            weapon = sword;

            else if(vec[j] == "GreatSword")
            weapon = greatSword;

            else if(vec[j] == "LongSword")
            weapon = longSword;

            else if(vec[j] == "Axe")
            weapon = axe;

            else if(vec[j] == "Bow")
            weapon = bow;

            else if(vec[j] == "Bowgun")
            weapon = bowgun;

            else if(vec[j] == "DualBlades")
            weapon = dualBlades;

            else if(vec[j] == "Hammer")
            weapon = hammer;
            
            else if(vec[j] == "Lance")
            weapon = lance;

            player.setWeapon(weapon); // set weapon
        }
        cout << "[+] Load successful\n" << endl;

    }// END OF ELSE

    return player;
}


/* 
        1) have user pick a monster to fight using chooseMonster() function.
        2) make a loop that ends when either user or monster's health reaches 0 
        3) in the loop, monster and user attacks each other alternately
        4) user can choose which part of monster's body to attack
        5) display eachother's health each turn
        6) if user wins set 1 at the index of 1 of the vector and set 0 if user loses
        7) if user wins, set the name of monster at the index 2 of the vector
        8) returns the vector
    */
// This function runs a fight, and returns a vector, which contains the information on if player won, a name of monster user fought, and the amount of reward user gets
Player fight(Player player)
{
    vector <string> result;
    int num = -1;
    int numWeapon = 0;
    int oldRank = player.getLevel();
    double power = 0;
    Monster opponent;
    Weapon weapon; 
    bool winLost = false;
    double playerHealth = 0;
    double monsterHealth = 0;

    while(num != 0)
    {
        int i = 0;
        bool pickMonster = true;
        
        while(pickMonster)
        {
            cout << "\n\n" << endl;
            cout << "=====================" << endl;
            cout << "Welcome to the lobby!" << endl;
            cout << "=====================" << endl;
            cout << "[*] Pick a monster to start the game\n" << endl;
            cout << "[0] Exit lobby" << endl;
            cout << "[1] Rathian" << endl;
            cout << "[2] Cavesnake" << endl;
            cout << "[3] Grieveling" << endl;
            cout << "[4] Mistclaw" << endl;
            cout << "[5] Steammorph" << endl;
            cout << "[6] Abyssbrood" << endl;
            cout << "[7] Cavernghoul" << endl;
            cout << "[8] Phasetaur" << endl;
            cout << "[9] Netherflayer" << endl;
            cout << "[10] Phantomcreep" << endl;
            cout << "[11] Random" << endl;
            cout << "\n>> ";

            cin >> num;

            if(num < 0 || num > 11)
            cout << "[-] Invalid input" << endl;

            else  // if user enters a correct number, then end the loop
            {
                pickMonster = false;
                if(num != 0)  //since 0 is quit
                {
                    opponent = chooseMonster(num); // need to think about option 0, which is exit
                    cout << "[+] You picked " << opponent.getName() << endl;
                    monsterHealth = opponent.getHealth();  // set each health
                    playerHealth = player.getHealth();
                }
            }
        }

        if(num == 0)
            break;

    //=========================== Pick a weapon ============================
        bool pickWeapon = true;
        while(pickWeapon)
        {
            int numWeapons = player.getWeaponCount(); //the num of weapons player has

            cout << "\n[*] Choose a weapon (Enter a number)" << endl;

            if(numWeapons == 0)  // user might not have any weapon, if user has just started this game
            {
                cout << "[-] You don't have any weapons" << endl;
                cout << "[*] Starting game without a weapon..." << endl;
                break;
            }

            cout << "=======================" << endl;
            cout << "Inventory - Name: Power" << endl;
            cout << "=======================" << endl;
        

            for (int i = 0; i < numWeapons; i++) // display all the weapons player has
            {
                weapon = player.getWeapon(i);
                cout << "[" << i+1 << "] " << weapon.getName() << ": " << weapon.getPower() << endl;
            }
            cout << endl;
        
            cout << "\n>> ";
            cin >> numWeapon; // different from numWeapons

            if(numWeapon < 0 || numWeapon > numWeapons || numWeapon == 0)
                cout << "[-] Invalid input" << endl;

            else  // if user enters a correct number, then end the loop
            {
                pickWeapon = false;
                weapon = player.getWeapon(numWeapon -1); // -1 is because it needs an index number
            }
        }

        //=========================== Battle ==================================
        cout << "=============" << endl;
        cout << "Battle start!" << endl;
        cout << "=============" << endl;

        while(playerHealth > 0 || monsterHealth > 0) // loops until either player os monter's health reaches 0
        {
            string part = "";
            power = weapon.getPower();

            bool heal = true;

            if(player.getWeaponCount() == 0) // if use has no weapon,
            power = 2;

            while(heal)
            {
                cout << "\n==== Your turn ==== " << endl;
                cout << "[*] Attack monster's: (Enter a number or H/Q)" << endl;
                cout << "[1] Head" << endl;
                cout << "[2] Eyes" << endl;
                cout << "[3] Throat" << endl;
                cout << "[4] Arms" << endl;
                cout << "[5] Stomach" << endl;
                cout << "[6] Legs" << endl;
                cout << "[H] Use a potion (x " << player.getPotion() << ")" << endl;
                cout << "[Q] Quit game" << endl;
                cout << "\n>> ";

                cin >> part;

                if(part == "h" || part == "H")
                {
                    if(player.getPotion() > 0)
                    {
                        playerHealth += 10; // heal(+ 10)
                        cout << "\n[+] You used a potion" << endl;
                        player.setPotion(-1);
                        cout << "[HP] You: " << playerHealth << endl;
                    }

                    else
                    {
                        cout << "\n[-] You have no healing potion" << endl;
                    }
                }

                else if(part == "q"|| part == "Q" || part == "1" || part == "2" || part == "3" || part == "4" || part == "5" || part == "6")
                break;

                else
                cout << "\n[-] Invalid input" << endl;
            }

            if(part == "Q" || part == "q")  // Quit game
            break;
            
    //=================increase power if user attacks monster's weakness=================
            if(part == "1" && opponent.getWeakness() == "head") /// print some thing like "hit the weakness!!"
            {
                power *= 1.2;
            }

            else if(part == "2" && opponent.getWeakness() == "eyes")
            {
                power *= 1.2;
            }

            else if(part == "3" && opponent.getWeakness() == "throat")
            {
                power *= 1.2;
            }

            else if(part == "4" && opponent.getWeakness() == "arms")
            {
                power *= 1.2;
            }

            else if(part == "5" && opponent.getWeakness() == "stomach")
            {
                power *= 1.2;
            }

            else if(part == "6" && opponent.getWeakness() == "legs")
            {
                power *= 1.2;
            }

            // cout << "Weakness is " << opponent.getWeakness() << endl;
            // cout << "Name is " << opponent.getName() << endl;
            // cout << "Health is " << opponent.getHealth() << endl;
            // cout << "Power is " << opponent.getPower() << endl;
    

            //====== user's turn =======
            cout << "======================" << endl;
            cout << "[+] Attack successfull" << endl;
            cout << "[*] Damage: " << power << endl;
            cout << "======================" << endl;
            monsterHealth -= power; // attack monster (subtract power from momster's health)

            if(monsterHealth < 0)  // prevents from displaying a negative number
                monsterHealth = 0;

            cout << "[HP] Monster: " << monsterHealth << endl; // display stats
            cout << "[HP] You: " << playerHealth << endl;

            if(monsterHealth <= 0) // if user wins ================
            {
                //cout << "You won the game" << endl;
                result.push_back("1"); // index 0
                result.push_back(opponent.getName()); // idex 1

                string reward = to_string(opponent.getReward()); // store the reward as a string at index 2
                result.push_back(reward);  // index 2

                result.push_back(to_string(opponent.getExp())); // index 3 EXP
                winLost = true;
                break;
            }

            //====================== monster's turn ==================================
            cout << "\n[*] Monster is attacking you....." << endl;
            sleep(1); // delay, because it is kind of boring to see all the details at once
            cout << endl;
            cout << "===============================" << endl;
            cout << "[-] You got attacked by monster" << endl;
            cout << "[*] Damage: " << opponent.getPower() << endl;
            cout << "===============================" << endl;

            playerHealth -= opponent.getPower();

            if(playerHealth < 0)  // pr__events from displaying a negative number
                playerHealth = 0;

            cout << "[HP] Monster: " << monsterHealth << endl; // display stats
            cout << "[HP] You: " << playerHealth << endl;

            if(playerHealth <= 0)
            {
                //cout << "You lost the game" << endl;
                result.push_back("0");
                result.push_back(opponent.getName());
                winLost = true;
                break;
            }


        }// end of this whole loop

       // 6) if user wins set 1 at the index of 1 of the vector and set 0 if user lose
       
       if(winLost) //if either monster or user loses, then terminate the loop
       break;
    }

    if(num == 0)  // prevents segmentation faults
    {
        result.push_back("2"); // 2 means that player quit the game( by setting it to 2, next print_set_result function will not work)
        result.push_back("none");
    }


//============= print result ============================================================
    string win = result[0];
    int winLose = stoi(win);
    int reward = 0;
    string MonsterName = result[1];

    if(winLose == 1) //if user wins
    {
        reward = stoi(result[2]); //set reward
        int exp = stoi(result[3]); // EXP
        player.setMoney(player.getMoney() + reward);
        player.setExp(exp);
        player.setLevel(player.getExp());

        cout << "\n=========================" << endl;
        cout << "       - Result - " << endl;
        cout << "      " << MonsterName << endl;

        if(oldRank < player.getLevel())
        {
            cout << "   RANK UP!! Rank: " << player.getLevel() << endl;
        }

        cout << "[+] You won" << endl;
        cout << "[+] You earned $" << reward << endl;
        cout << "[+] You earned " << exp << "EXP" << endl;
        cout << "\n[*] Money Balance: $" << player.getMoney() << endl;
        cout << "[*] Current EXP: " << player.getExp() << "EXP" << endl;
        cout << "[*] Rank: " << player.getLevel() << endl;
        cout << "=========================\n" << endl;

    }

    else if(winLose == 0) //if user loses
    {
            cout << "\n==============" << endl;
            cout << "- Result -" << endl;
            cout << MonsterName << endl;
            cout << "[-] You lost" << endl;
            cout << "==============\n" << endl;
    }

        return player;
}


void printInventory(Player player)  // this function takes a player and prints all weapons player has
{
    Weapon weapon;
    int numWeapons = player.getWeaponCount();
    bool hasWeapon = true;

    if(numWeapons == 0) // if user doesn't has any weapon
    {
        cout << "\n[-] You don't have any weapons" << endl;
        hasWeapon = false;
    }

    if(hasWeapon)
    {
        cout << "\n   [Inventory]" << endl;
        cout << "==== Weapons ====" << endl;

        for (int i = 0; i < numWeapons; i++)
        {
            weapon = player.getWeapon(i);
            cout << "[" << i+1 << "] " << weapon.getName() << endl;
        }
        cout << "=================" << endl;
        cout << "\n";

        if(player.getPotion() > 0)
        {
            cout << "======= Potions =======" << endl;
            cout << "[1] Healing Potion x " << player.getPotion() << endl;
            cout << "========================\n" << endl;
        }
    }
}


void menu()
{
    Player player;
    vector <string> result;
    bool run = true;
    int choice = 0;

    player = loadData(player); // load data
    
    while(run)
    {
        cout << "====================" << endl;
        cout << "      Welcome!" << endl;
        cout << "====================" << endl;
        cout << "Username: " << player.getName() << endl;
        cout << "Rank: " << player.getLevel() << endl;
        cout << "EXP: " << player.getExp() << endl;
        cout << "Money: $" << player.getMoney() << endl;
        cout << "\n[1] See Monsters" << endl;
        cout << "[2] Shop" << endl;
        cout << "[3] Game Lobby" << endl;
        cout << "[4] Inventory" << endl;
        cout << "[5] Save" << endl;
        cout << "[6] Quit" << endl;
        cout << "\n>> ";
        cin >> choice;

        if(choice == 1)
            printMonsterDetails();

        else if(choice == 2)
            player = weaponShop(player);

        else if(choice == 3)
            player = fight(player);

        else if(choice == 4)
            printInventory(player);

        else if(choice == 5)
            savedata(player);

        else if(choice == 6)
        {
            string choice = "";
            cout << "[*] Are you sure you want to quit the game? All unsaved data will be lost (y/n)" << endl;
            cout << "\n>> ";
            cin >> choice;

            if(choice == "y" || choice == "Y")
            {
                cout << "Quitting..." << endl;
                break;
            }

            else if(choice == "n" || choice == "N")
            {
                // do nothing
            }

            else
            {
                cout << "[-] Invalid input" << endl;
            }
        }
    }
}


int main()
{
    menu(); // run main menu
    return 0;
}