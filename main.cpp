#include <iostream>
#include "Link.h"
#include <string>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Audio.hpp>
#include "keySound.h"
using namespace std;

 int main()
 {
    //cout<<"d"<<endl;
    string file = "soundFiles.txt";
    Link Files;
    Files.createList(file);
    //cout<<"d"<<endl;
     bool quit=false;
     while(!quit)
     {
         cout<<"===Main Menu==="<<endl;
         cout<<"1. Print Sounds"<<endl;
         cout<<"2. Play Sounds"<<endl;
         cout<<"3. Quit"<<endl;
         string answer;
         cin>>answer;

         if(answer=="1")
         {

         }
         else if (answer=="2")
         {
            keySound k;
            k.buildAndPlay();
         }

         else if(answer=="3")
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
