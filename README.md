# Kwiat_Schneier_Kelley_CSCI2270_FinalProject

Project Summary
This project will essentially be a keyboard that plays a different sound each time you hit a letter. The program will use a library called SFML in order to read keyboard signals and play the sounds as a result. We will encorporate a linked list in order to store and accsess the different sounds and their names quickly and efficiently. Methods will include a search function, a function that reads in the filenames and creates the list, and a delete function. 

Dependancies
The program requires you download sfml onto your computer instructions are in the How to Run section of the ReadMe.

System Requirements
linux already has sfml within it's libraries so all they must do is step 2 in order to install the library. Mac and windows must download the software first and then install. 

How to Run
1. If you are NOT linux You must first google the library sfml c++ in your vm and download the library. If you are using linux you can skip straight to step 2.
2. you must then install the library sfml onto your vm, to do this copy and paste sudo apt-get install libsfml-dev into your terminal and allow the library to download onto your vm. 
3. 

g++ -std=c++11 keySound.cpp main.cpp Link.cpp -o sfml -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-network -lsfml-system 


