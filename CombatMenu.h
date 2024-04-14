#include<iostream>
#include<cstdlib>
using namespace std;

float FIRE=3, EARTH=3, WATER=3, AIR=3;


void spellList()
{
    //clear screen

    cout << "1. FIRE\n";
    cout << "2. EARTH\n";
    cout << "3. WATER\n";
    cout << "4. AIR\n";
    cout << "5. Combine\n";
    cout << "6. Return\n\n"

}

void castType()
{
    //clear screen

    int userNum, firstSpell, secondSpell, thirdSpell;

    cout << "1. Single spell\n";
    cout << "2. Double spell\n";
    cout << "3. Triple spell\n\n";

    cin >> userNum;

    switch(userNum)
    {
        case 1:
            spellList();

            cin >> firstSpell;

            break;
        
        case 2:

            spellList();
            cin >> firstSpell;

            spellList();
            cin >> secondSpell;

            

    }

}

void CombatMenu()
{
    int playerChoice;

    do{
    //clear screen
    //there are blank number of enemies (Something to count how many enemies?)

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
            spellList();


            break;

        case 2:
            srand(time(0));

            int escape;

            escape = rand() % 2;

            if(escape == 0)
                {
                    //insert clear screen!
                    cout << "You got away safely!";
                    break;
                }
    }
    }
    while(/*All enemies are dead*/);
}