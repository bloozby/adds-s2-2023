#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"

using namespace std;

int main(){
    BubbleSort b;
    vector<int> numbers = {1,3,5,4,-5,100,7777,2014};
    cout << "numbers before bubblesort: ";
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
    cout << "numbers after bubblesort: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        if (i != numbers.size()-1)
        {
            cout << numbers[i] << ", ";
        } else {
            cout << numbers[i] << endl;
        }
    }

    vector<int> numbers2 = {1,3,5,4,-5,100,7777,2014};
    QuickSort q;
    cout << "numbers before Quicksort: ";
    for (int i = 0; i < numbers2.size(); i++)
    {
        if (i != numbers2.size()-1)
        {
            cout << numbers2[i] << ", ";
        } else {
            cout << numbers2[i] << endl;
        }
    }
    
    numbers2 = q.sort(numbers2);
    cout << "numbers after Quicksort: ";
    for (int i = 0; i < numbers2.size(); i++)
    {
        if (i != numbers2.size()-1)
        {
            cout << numbers2[i] << ", ";
        } else {
            cout << numbers2[i] << endl;
        }
    }
    
    
    return 0;
}