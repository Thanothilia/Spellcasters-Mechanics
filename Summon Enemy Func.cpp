#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
void enemysummon(int& enemies)
{
    int elemcount, enemycount;
    int enemies [4] = {0, 0, 0, 0};
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
    return 0;
}
