#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(){
    this->head = nullptr;
}

LinkedList::LinkedList(int* array, int len){
    this->head=nullptr;
    for (int i = 0; i < len; i++)
    {
        insertPosition(0,array[len-i-1]);
    }
}

LinkedList::~LinkedList(){
    while(head != nullptr)
    {
        Node* temp = head;
        head = head->link;
        delete temp;
    }
    
}

void LinkedList::insertPosition(int pos, int newNum){
    if (pos == 0)
    {
        head = new Node(newNum, head);
        return;
    }

    Node* prevNode = traverse(pos-1);

    if (prevNode == nullptr)
    {
        return;
    }

    Node* newNode = new Node(newNum, prevNode->link);
    prevNode->link = newNode;  
}

bool LinkedList::deletePosition(int pos){
    if (pos == 1)
    {
        Node* del = traverse(pos);
        head = traverse(pos+1);
        delete del;
        return true;
    } else if(pos > 1 && pos < length()){
        Node* prevNode = traverse(pos-1);

        Node* del = traverse(pos);
        prevNode->link = traverse(pos+1);
        delete del;
        return true;
    } else {
        return false;
    }
}

int LinkedList::get(int pos){
    return traverse(pos)->data;
}

int LinkedList::search(int target){
    int position = 1;
    Node* currNode = head;
    while (currNode != nullptr && traverse(position)->data != target) {
        currNode = currNode->link;
    position++;
    }
    return position;
}

void LinkedList::printList(){
    Node* currNode = head;
    std::cout << "[";
    while (currNode != nullptr){
        if (currNode->link != nullptr){
            std::cout << currNode->data << " ";
            currNode = currNode->link;
        } else{
            std::cout << currNode->data << "]";
            currNode = currNode->link;
        }
    }
}

Node* LinkedList::traverse(int index){
    int position = 1;
    Node* currNode = head;
    while (currNode != nullptr && position < index) {
        currNode = currNode->link;
    position++;
    }
    return currNode;
}

int LinkedList::length(){
    int position = 1;
    Node* currNode = head;
    while (currNode != nullptr) {
        currNode = currNode->link;
    position++;
    }
    return position;
}