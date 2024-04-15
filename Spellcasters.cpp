#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


namespace Player
{
    int health;
    int lvl;
    
}

void clearScrn()
{
    cout << "\033[2J\033[1;1H";
}

int *ptrEnemArr;



int *enemysummon()
{
    int elemcount, enemycount;
    int enemies [4] = {0, 0, 0, 0};

    int *ptrEnem = enemies;

    //enemy 0 imp, 1 fish, 2 golem, 3 whirlwind
    enemycount = rand() % 3 + Player::lvl;
    for (int n = 1; n < elemcount; n++){
		cin >> enemies[n];
	}
	cout <<"Enemies summoned:\n";
	for (int i = 0; i < enemycount; i++){
        int pick = rand() % 4;
        enemies[pick] ++;
	}
    if (enemies[0] > 0){cout << "Imps: " << enemies[0]<<endl;}
    if (enemies[1] > 0){cout << "Fish: " << enemies[1]<<endl;}
    if (enemies[2] > 0){cout << "Golem: " << enemies[2]<<endl;}
    if (enemies[3] > 0){cout << "Whirlwind: " << enemies[3]<<endl;}

    return ptrEnem;
}



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

void deadtest(float &fire, float &earth, float &water, float &air, int* enemies){
    float dmg, health;
    health = 2;
    if (enemies[0] > 0){
        // Imp (fire type)
        dmg = (fire/2 + earth + water * 2 + air);
        if (dmg>=health){
            cout << "Imp has been defeated! \n";
            enemies[0] = 0;
        }
        else{
            cout << "Imp is still alive...\n";
            }
    }
    if(enemies[1] > 0){
        // Fish (water type)
        dmg = (fire*2 + earth + water/2 + air);
        if (dmg>=health){
            cout << "Fish has been defeated! \n";
            enemies[1] = 0;
        }
        else{
            cout << "Fish is still alive...\n";
        }
    }
    if(enemies[2] > 0){
        // Golem (earth type)
        dmg = (fire + earth/2 + water + air*2);
        if (dmg>=health){
            cout << "Golem has been defeated! \n";
            enemies[2] = 0;
            }
        else{
            cout << "Golem is still alive...\n";
            }
    }
    if(enemies[3] > 0){
        // Whirlwind (wind type)
        dmg = (fire + earth*2 + water + air/2);
        if (dmg>=health){
            cout << "Whirlwind has been defeated! \n";
            enemies[3] = 0;
            }
        else{
            cout << "Whirlwind is still alive...\n";
            }
        }

}


void fight(float &fire, float &earth, float &water, float &air, float dmg)
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

            deadtest(fire,earth,water,air, ptrEnemArr);

    }

}

void CombatMenu()
{
    int playerChoice;

    

    do{
    clearScrn(); //clear screen

    //there are blank number of enemies (Something to count how many enemies?)


    float FIRE=0, EARTH=0, WATER=0, AIR=0;
    float uniDmg = 3;

    cout<<"1. Fight"<<endl;
    cout<<"2. Flee (btw you can't flee)"<<endl;
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
                fight(FIRE,EARTH,WATER,AIR,uniDmg);


                break;

            

        }



        }
    while(true/*FIX LATER, NEEDS TO  Check for dead enemies*/);
}

void gotocamp()
{
   char moveop;
   cout << "\n\nWelcome back to camp!\n\n";
   /*Player.health = maxhealth*/
   cout << "You have been fully healed\n";
   /*if we do integrate save system
   cout << "Saving...\n...\n...\n";*/
   cout << "Do you want to return to the dungeon (y)?\n";
    do{
        cin >> moveop;
   }
   while (moveop != 'y');
   cout << "\nYou return to the dungeon.\n\n";
   cout << "\nYou move into the next room.\n\n";
   ptrEnemArr = enemysummon();
   CombatMenu();
        
}







void liminal()
{
   char moveop;
   cout << "\n\nmoving...\n\n";
   cout << "Would you like to move on to another room (y) or return to camp? (n)\n";
   do{
        cin >> moveop;
   }
   while (moveop != 'n' && moveop != 'y');
   if (moveop == 'y'){
        cout << "\nYou move into the next room.\n\n";
        ptrEnemArr = enemysummon();
        CombatMenu();
   }
   else{
        cout <<"\nYou return to camp.\n\n";
        gotocamp();
   }
}

int main()
{
  
  liminal();

  return 0;
}
