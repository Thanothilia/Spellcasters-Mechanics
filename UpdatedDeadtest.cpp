#include<iostream>
#include<cstdlib>

using namespace std;



void deadtest(float fire, float earth, float water, float air, int* enemies){
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

int main (){
    int enemies[4] = {1, 1, 1, 1};
    int *ptrEnem = enemies;

    deadtest(3, 3, 3, 3, ptrEnem);




}

