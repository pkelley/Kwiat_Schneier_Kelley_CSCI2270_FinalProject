#include <iostream>
#include "Link.h"
#include <string>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Audio.hpp>
#include "keySound.h"
using namespace std;

 int main()
 {
    string file = "soundFiles.txt";
    Link Files;
    Files.createList(file);

     bool quit=false;
     while(!quit)
     {
         cout<<"===Main Menu==="<<endl;
         cout<<"1. Print Sounds"<<endl;
         cout<<"2. Play Sounds"<<endl;
         cout<<"3. Search"<<endl;
         cout<<"4. Quit"<<endl;
         string answer;
         string search = "";
         cin>>answer;
         answer = answer.back();

         if(answer=="1")
         {
            Files.printFiles();
         }
         else if (answer=="2")
         {
            keySound k;
            k.buildAndPlay();
            
         }
         else if(answer=="3")
         {
            cout<<"Type file name: "<<endl;
            char a;
            cin.get(a);
            getline(cin, search);
            Files.search(search);
         }

         else if(answer=="4")
         {
             quit=true;
             cout<<"Goodbye!"<<endl;
         }
         else
         {
             cout<<"not a valid input"<<endl;
         }
     }
     return 0;
 }
