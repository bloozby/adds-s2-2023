#include "LinkedList.h"
#include "Node.h"

#include <iostream>

using namespace std;


int main(){
    int array[4]={1,2,3,4};
    LinkedList a(array,4);
    a.printList();
    cout << endl << endl;
    cout << a.search(7) << endl;
    cout << a.get(5) << endl;
    return 1;
}