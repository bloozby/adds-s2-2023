
#include "Truckloads.h"
#include "Reverser.h"
#include <iostream>

using namespace std;

int main(){
    /*Truckloads t;
    int trucks = t.numTrucks(15, 1);
    cout << "for a 15 crates with a load size of 1" << endl;
    cout << "you will need " << trucks << " trucks." << endl;*/

    Reverser r;
    int value;
    cout << "enter a value: ";
    cin >> value;
    int rev = r.reverseDigit(value);
    cout << "reversed: " << rev << endl;
    cout << "enter a word: ";
    string word;
    cin >> word;
    cout << "reversed: " << r.reverseString(word) << endl;

    return 0;
}