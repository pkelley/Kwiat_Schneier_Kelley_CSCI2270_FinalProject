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
	string str;
	Node* array[10];
	while(getline(inFile, str)){
		//by spaces
        int count = 0;
        string s(str);
        istringstream iss(s);
                do{
                    string sub;
                    iss >> sub;
                    if(sub != "") {
                    	Node* node = new Node;
    					//cout<<sub<<endl;
    					node->fileName = sub;
    					node->next = NULL;
    					node->key = "a";//calcASC(count);
    					//cout<<"work"<<endl;
    					array[count] = node;
    					count++;
                    }
                }while (iss); 
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

