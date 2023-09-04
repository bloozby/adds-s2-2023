#include "BubbleSort.h"

BubbleSort::BubbleSort(){}

std::vector <int> BubbleSort::sort(std::vector<int> list){
    bool swapped = true;
    while(swapped){
        swapped = false;
        for (int i = 0; i < list.size()-1; i++)
        {
            if (list[i]>list[i+1] )
            {
                list[i] += list[i+1];
                list[i+1] = list[i] - list[i+1];
                list[i] -=list[i+1];
                swapped = true;
            }
        }
    }
    return list;
}