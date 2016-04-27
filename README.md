# Kwiat_Schneier_Kelley_CSCI2270_FinalProject

Project Summary:
This project will essentially be a keyboard that plays a different sound each time you hit a letter. The program will use a library called SFML in order to read keyboard signals and play the sounds as a result. We will encorporate a linked list and 2 classes in order to store and accsess the different sounds and their names quickly and efficiently. Methods will include a search function, a function that reads in the filenames and creates the list a class that plays the sounds and a print function.  

Dependancies:

The program requires you download sfml onto your computer, instructions are in the How to Run section of the ReadMe.

System Requirements:

Linux already has sfml within it's libraries so step 1 of the How to Run is not necessary in this case. In order to install the library, mac and windows systems must download the software first and then install.

Other Helpful Tips:

-If you wish to download other sounds all you need to do is download the sound and put in the "loops" folder, add the filename to the sounds.txt file and run! 

-Once you are in the program the menu will guide you through, if you want to search a sound pull up the print option to view files, then the search option and enter one of the filenames. It will give you the corresponding key. Press "play sound" and enter the key. In order to stop the function from playing sounds hit escape and it will take you back to the menu. 

-The "a" key/corresponding file is really faint! If you can't hear it on your computer try another key.

How to Run

1. If you are NOT linux You must first google the library sfml c++ and download the library. If you are using linux (the xubuntu vm) you can skip straight to step 2.

2. You must then install the library sfml onto your vm, to do this copy and paste: sudo apt-get install libsfml-dev into your terminal and allow the library to download onto your vm. 

3. You must then clone the url of the project using git clone "url" 

4. Then in the terminal navigate to the repository and copy and paste: g++ -std=c++11 keySound.cpp main.cpp Link.cpp -o sfml -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-network -lsfml-system into the terminal and hit enter.

5. Then enter ./sfml 

6. After the first run, you only need to enter ./sfml to run the program.

Group Members:

Helena Kwiat,
Preston Kelley,
Ian Shneier

Bugs:

The A key is really faint if you want to download another sound!


