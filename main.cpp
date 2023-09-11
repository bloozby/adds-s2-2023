#include "LinkedList.h"
#include "Node.h"

using namespace std;


int main(){
    int array[4]={1,2,3,4};
    LinkedList a(array,4);
    a.printList();
    return 1;
}