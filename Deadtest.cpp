#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool deadtest(float fire, float earth, float water, float air )
{
    float dmg, health;
    health = 2*level;
    switch (enemylist[enemytype])  {
    case 0:
        // Imp (fire type)
        dmg = (fire/2 + earth + water * 2 + air)
        if (dmg>health){return true;}
        else{return false;}
        break;

    case 1:
        // Fish (water type)
        dmg = (fire*2 + earth + water/2 + air)
        if (dmg>health){return true;}
        else{return false;}
        break;
    case 1:
        // Golem (earth type)
        dmg = (fire + earth/2 + water + air*2)
        if (dmg>health){return true;}
        else{return false;}
        break;
    case 1:
        // Whirlwind (wind type)
        dmg = (fire + earth*2 + water + air/2)
        if (dmg>health){return true;}
        else{return false;}
        break;
}
int main()
{

}
