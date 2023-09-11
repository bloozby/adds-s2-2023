#ifndef NODE_H
#define NODE_H

class Node
{
private:
    int data;
    Node* link;
public:
    Node();
    Node(int num, Node* lnk);
    void setData(int dta);
    void setLink(Node* lnk);
    void printData();
    friend class LinkedList;
};

#endif