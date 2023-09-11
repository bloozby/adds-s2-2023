#include "Node.h"
#include <iostream>

Node::Node(){
    this->data = 0;
    this->link = nullptr;
}

Node::Node(int num, Node* lnk){
    this->data=num;
    this->link=lnk;
}

void Node::setData(int dta){
    this->data=dta;
}

void Node::setLink(Node* lnk){
    this->link;
}

void Node::printData(){
    std::cout << this->data << std::endl;
}