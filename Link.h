#ifndef LINK_H
#define LINK_H
#include <vector>
#include <iostream>
struct Node{
    std::string fileName;
    char key;
    Node *next;

    Node(){}; // default constructor

    Node(std::string initName, Node *initNext, char initMessage)
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
        void readFile(std::string);
        void search(std::string);
        std::string getFileName(char);
        
        char calcASC(int);
        void printFiles();
        int getSizeVector();
    protected:
    private:
        Node *head;
        Node *tail;
        std::vector<Node*> array;
};

#endif // NODE_H