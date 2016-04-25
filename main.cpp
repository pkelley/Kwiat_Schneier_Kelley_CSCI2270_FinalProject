#include <iostream>
#include "Link.h"
 using namespace std;

 int main(int argc, char *argv[])
 {
    string file = argv[1];
    Link Files;
    Files.createList(file);
     
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
