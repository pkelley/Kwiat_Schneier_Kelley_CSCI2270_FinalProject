# Kwiat_Schneier_Kelley_CSCI2270_FinalProject

This project will essentially be a keyboard that plays a different sound each time you hit a letter. The program will use a library called SFML in order to read keyboard signals and play the sounds as a result. We will encorporate a hash table in order to store and accsess the different sounds and their names quickly and efficiently. Methods will include a find function, a function that creates the table, as well as many additional methods.  

g++ -std=c++11 keySound.cpp main.cpp Link.cpp -o sfml -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-network -lsfml-system 

sudo apt-get install libsfml-dev
