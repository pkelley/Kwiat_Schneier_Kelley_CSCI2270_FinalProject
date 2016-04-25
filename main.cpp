#include <iostream>
#include "Link.h"
 using namespace std;

 int main()
 {
     bool quit=false;
     while(!quit)
     {
         cout<<"===Main Menu==="<<endl;
         cout<<"1. Print Sounds"<<endl;
         cout<<"2. Find Key"<<endl;
         cout<<"3. Play Sounds"<<endl;
         cout<<"4. Quit"<<endl;
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
