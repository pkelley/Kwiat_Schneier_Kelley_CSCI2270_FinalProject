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
        message = initMessage;
    }

};

class Link
{
    public:
        Link();
        ~Link();
        void readFile(std::string, std::string);
        void search(std::string);
        //void transmitMsg(char *); //this is like a string
        int calcASC(std::string);
        void printFiles();
    protected:
    private:
        Node *head;
        Node *tail;
};

#endif // NODE_H