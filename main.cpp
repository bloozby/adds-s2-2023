
#include "Truckloads.h"
#include <iostream>

using namespace std;

int main(){
    Truckloads t;
    int crates;
    int load;
    cout << "How many crates?" << endl << ": ";
    cin >> crates;
    cout << "how many crates per load?" << endl << ": ";
    cin >> load;
    int trucks = t.numTrucks(crates, load);
    cout << "you will need " << trucks << " trucks.";


    return 0;
}