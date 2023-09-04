#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"

using namespace std;

int main(){
    BubbleSort b;
    vector<int> numbers = {1,3,5,4,-5,100,7777,2014};
    cout << "numbers before sort: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        if (i != numbers.size()-1)
        {
            cout << numbers[i] << ", ";
        } else {
            cout << numbers[i] << endl;
        }
    }
    
    numbers = b.sort(numbers);
    cout << "numbers after sort: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        if (i != numbers.size()-1)
        {
            cout << numbers[i] << ", ";
        } else {
            cout << numbers[i] << endl;
        }
    }
    
    
    return 0;
}