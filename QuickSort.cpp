#include "QuickSort.h"

QuickSort::QuickSort(){}

QuickSort::QuickSort(std::vector<int> list){
    storage=list;
}

int QuickSort::partition (int start, int end){
    int pivot;
    if(start + 3 <= end){
        pivot = storage[start + 3];
    }
    else{
        pivot = storage[end];
    }

    int i = (start - 1); // Index of smaller element

    for (int j = start; j <= end - 1; j++)
    {
        // If current element is smaller than the pivot
        if (storage[j] < pivot){
            i++; // increment index of smaller element
            int temp = storage[i];
            storage[i] = storage[j];
            storage[j] = temp;
        }
    }
    int temp = storage[i+1];
    storage[i+1] = storage[end];
    storage[end] = temp;
    return (i + 1);
}

void QuickSort::quickSort(int start, int end){
    if (start < end){
        int part = partition(start, end);
        quickSort(start, part - 1);
        quickSort(start + 1, end);
    }
}

std::vector<int> QuickSort::sort(std::vector<int> list){
    storage = list;
    quickSort(0, storage.size() - 1);
    return getList();
}

std::vector<int> QuickSort::getList(){
    return storage;
}

void QuickSort::setList(std::vector<int> list){
    storage = list;
}

/*std::vector <int> QuickSort::sort(std::vector<int> list){
    

    // pivot and seperate into two parts
    

    //recursively call sorting

    //left part

    //right part
    

    return list;
}*/