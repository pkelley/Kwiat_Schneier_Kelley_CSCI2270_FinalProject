#include "Link.h"
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
using namespace std;

Link::Link()
{
    //constructor
}
Link::~Link()
{
    //destructor
}
void Link::createList(string fileName){
	ifstream inFile;
	inFile.open(fileName);
	string line;
	Node* array[8];
	while(getline(inFile, line)){
		istringstream ss(line);
		string token;
		//by spaces
        int count = 0;
		while(getline(ss, token)) {
    		Node* node;
    		node->fileName = token;
    		node->next = NULL;
    		node->key = calcASC(count);
    		array[count] = node;
    		count++;
		}
    }
    for(int i=0; i<7; i++){
    	array[i]->next = array[i+1];
    }
}
void Link::readFile(string fileName){

}
void Link::search(string value){
	
}

string Link::calcASC(int value){
	
}
void Link::printFiles(){

}

