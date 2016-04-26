#include "Link.h"
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <vector>
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
	//Node* arr[10];
	//cout<<"d"<<endl;
	readFile(fileName);
	//cout<<"d"<<endl;
	//cout<<arr[0]->key<<endl;

    for(int i=0; i<array.size()-1; i++){
    	array[i]->next = array[i+1];
    	//cout<<array[i]->fileName<<endl;
    }
    head = array[0];
}
void Link::readFile(string fileName){
	ifstream inFile;
	inFile.open(fileName);
	string str;
	//Node* array[10];
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
    					node->key = calcASC(count);
    					//cout<<"work"<<endl;
    					array.push_back(node);
    					//array[count] = node;
    					//cout<<array[count]->key<<endl;
    					count++;
                    }
                }while (iss); 
    }
    for(int i=0; i<7; i++){
    	//array[i]->next = arr[i+1];
    	//cout<<array[i]->fileName<<endl;
    }
    //return array;
}
void Link::search(string value){
	Node *tmp = head;
	while(tmp!=NULL)
    {
        if(value==tmp->fileName)
        {
            cout<<"Found!"<<endl;
            cout<<tmp->fileName<<" : "<<tmp->key<<endl;
            break;
        }
        tmp=tmp->next;
    }
}
string Link::getFileName(char k){
	Node *tmp = head;
	while(tmp!=NULL)
    {
        if(k==tmp->key)
        {
            //cout<<"Found!"<<endl;
            //cout<<tmp->fileName<<" : "<<tmp->key<<endl;
            return tmp->fileName;
            break;
        }
        tmp=tmp->next;
    }
    return NULL;
}

char Link::calcASC(int value){
	value= value + 97;
	char c = (char)value;
	//cout<<c<<endl;
	//string str(c);
	return c;
}
void Link::printFiles(){

    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->fileName<<endl;
        tmp=tmp->next;
    }

}
