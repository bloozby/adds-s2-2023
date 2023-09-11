#include "LinkedList.h"
#include "Node.h"
#include <iostream>

using namespace std;

int main(){
    int balls[4] = {1,4,3,4};
    LinkedList a(balls, 4);
    a.printList();
    cout << a.deletePosition(-1) << endl;
    cout << endl;

    a.printList();

    cout << "first case of 4 at " << a.search(4) << endl;
    return 1;
}