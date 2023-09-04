#include <iostream>
#include <sstream>
#include <string>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;

int main(){

    //get data
    
    string input;
    vector<int> numbers;
    cout << "input: ";
    getline(cin, input);
    istringstream iss(input);
    int data;
    while(iss >> data){
        numbers.push_back(data);
    }
    
    //sort using quicksort
    QuickSort q;
    numbers = q.sort(numbers);

    // binary search

    RecursiveBinarySearch r;
    bool tf;
    tf = r.search(numbers, 1);

    
    if (tf == true)
    {
        cout << "true ";
    } else {
        cout << "false";
    }
    
    for (int i = 0; i < numbers.size(); i++)
    {
        if (i != numbers.size()-1)
        {
            cout << numbers[i] << " ";
        } else {
            cout << numbers[i] << endl;
        }
    }
    
    return 0;
}