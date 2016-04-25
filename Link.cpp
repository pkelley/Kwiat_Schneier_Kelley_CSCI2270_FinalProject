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
	Node *arr = readFile();
    for(int i=0; i<7; i++){
    	arr[i]->next = arr[i+1];
    }
}
Node* Link::readFile(string fileName){
    ifstream inFile;
	inFile.open(fileName);
	string line;
	Node* arr[8];
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
    		arr[count] = node;
    		count++;
		}
    }
    return arr;
}
void Link::search(string value){
	Node *tmp=head;
	while(tmp!=NULL)
    {
        if(value==tmp->fileName)
        {
            cout<<"Found!"<<endl;
            cout<<tmp->fileName<<":"<<tmp->key<<endl;
            break;
        }
        tmp=tmp->next;
    }
}

string Link::calcASC(int value){

}
void Link::printFiles(){

    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->fileName<<endl;
        tmp=tmp->next;
    }

}

