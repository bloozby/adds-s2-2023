#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList 
{
private:
    Node* head;
public:
    LinkedList(); //default constructor
    LinkedList(int* array, int len); // A constructor that creates a list of from a C-array of length len.
    ~LinkedList(); //destructor that deletes all nodes
    void insertPosition(int pos, int newNum);
    bool deletePosition(int pos);
    int get(int pos);
    int search(int target);
    void printList();
    Node* traverse(int index);
    int length();
};


#endif