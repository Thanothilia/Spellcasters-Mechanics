void gotocamp(){
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
   liminal();
   return 0;
}
