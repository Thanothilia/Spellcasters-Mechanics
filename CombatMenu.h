#include<iostream>
#include<cstdlib>
#include<gotocamp.h>
using namespace std;



void spellList()
{
    //clear screen

    cout << "1. FIRE\n";
    cout << "2. EARTH\n";
    cout << "3. WATER\n";
    cout << "4. AIR\n";
    cout << "5. Return\n\n";

}

void spells(float &fire, float &earth, float &water, float &air, float dmg, int choice)
{
    switch(choice)
        {
            case 1:
                fire = dmg;
                break;

            case 2:
                earth = dmg;
                break;

            case 3:
                water = dmg;
                break;

            case 4:
                air = dmg;
                break;     

        }
    
}

void castType(float &fire, float &earth, float &water, float &air, float dmg)
{
    //clear screen

    int userNum, firstSpell, secondSpell, thirdSpell;

    cout << "1. Single spell\n";
    cout << "2. Double spell\n";
    cout << "3. Triple spell\n\n";

    cin >> userNum;

    while(userNum != 1 && userNum != 2 && userNum != 3)
        {
            //clear screen
            cout << "Please enter a valid choice!\n\n";

            cout << "1. Single spell\n";
            cout << "2. Double spell\n";
            cout << "3. Triple spell\n\n";

            cin >> userNum;
        }

    switch(userNum)
    {
        case 1:
            spellList();

            cin >> firstSpell;
            
            spells(fire,earth,water,air,dmg,firstSpell);
            
            break;
        
        case 2:

            spellList();

            cin >> firstSpell;
            
            spells(fire,earth,water,air,dmg,firstSpell);

            spellList();
            cin >> secondSpell;
            spells(fire,earth,water,air,dmg,secondSpell);
            
            break;

        case 3:

            spellList();
            cin >> firstSpell;
            spells(fire,earth,water,air,dmg,firstSpell);

            spellList();
            cin >> secondSpell;
            spells(fire,earth,water,air,dmg,secondSpell);

            spellList();
            cin >> thirdSpell;
            spells(fire,earth,water,air,dmg,thirdSpell);

            break;

    }

}

void CombatMenu()
{
    int playerChoice;

    do{
    //clear screen
    //there are blank number of enemies (Something to count how many enemies?)
    float FIRE=0, EARTH=0, WATER=0, AIR=0;
    float uniDmg = 3;

    cout<<"1. Fight"<<endl;
    cout<<"2. Flee"<<endl;
    cin >> playerChoice;
        

    while(playerChoice != 1 && playerChoice != 2)
        {
            //clear screen
            cout << "Please enter a valid choice!\n";
            continue; //check this to make sure this goes back to our VERY first loop
        }
        

    switch(playerChoice)
        {
            case 1:
                castType(FIRE,EARTH,WATER,AIR,uniDmg);


                break;

            case 2:
                srand(time(0));

                int escape;

                escape = rand() % 2;

                if(escape == 0)
                    {
                        //insert clear screen!
                        cout << "You got away safely!";
                        gotocamp();
                    }
        }
        }
    while(/*Check for dead enemies*/);
}
