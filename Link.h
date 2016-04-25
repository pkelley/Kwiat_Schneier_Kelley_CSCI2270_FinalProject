#ifndef LINK_H
#define LINK_H
#include <iostream>
struct Node{
    std::string fileName;
    std::string key;
    Node *next;

    Node(){}; // default constructor

    Node(std::string initName, Node *initNext, std::string initMessage)
    {
        fileName = initName;
        next = initNext;
        key = initMessage;
    }

};

class Link
{
    public:
        Link();
        ~Link();
        void createList(std::string);
        void readFile(std::string, std::string);
        void search(std::string);
        //void transmitMsg(char *); //this is like a string
        std::string calcASC(int);
        void printFiles();
    protected:
    private:
        Node *head;
        Node *tail;
};

#endif // NODE_H