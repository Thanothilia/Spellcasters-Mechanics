#include <iostream>
using namespace std;
void liminal(){
   char moveop;
   cout << "\n\nmoving...\n\n";
   cout << "Would you like to move on to another room (y) or return to camp? (n)\n";
   do{
        cin >> moveop;
   }
   while (moveop != 'n' && moveop != 'y');
   if (moveop == 'y'){
        cout << "\nYou move into the next room.\n\n";
        enemysummon{};
   }
   else{
        cout <<"\nYou return to camp.\n\n";
        gotocamp();
   }
   return 0;
}
