/* Create a program that takes a number of randomly summoned enemies into a string array, then
takes the number summoned, then lists the enemies summoned.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int elemcount, addint, enemycount, elemcount;
    string enemies[elemcount];
    enemycount = 2 + Player::lvl;
    for (int n = 1; n < elemcount; n++){
		cin >> enemies[n];
	}
	cout <<"Enemies summoned:\n";
	for (int i = 0; i < enemycount; i++){
        int pick = rand() % elemcount;
        cout << enemies[pick] << endl;
	}
    return 0;
}
