#include "RecursiveBinarySearch.h"

RecursiveBinarySearch::RecursiveBinarySearch(){

}

int RecursiveBinarySearch::getindex(){
    return this->index;
}

int RecursiveBinarySearch::binarySearch(std::vector<int> array, int start, int end, int target){
    if(start > end){
        return -1;
    }
    int mid = (start + end)>>1; // divided by two

    // Base condition (target value is found)
    if (target == array[mid]){
        return mid;
    }

    // discard all elements in the right search space
    // including the mid element
    else if (target < array[mid]) {
        return binarySearch(array, start, mid - 1, target);
    }

    // discard all elements in the left search space
    // including the mid element
    else{
        return binarySearch(array, start + 1, end, target);
    }
}

bool RecursiveBinarySearch::search(std::vector<int> array, int target){
    this->index = binarySearch(array, 0, array.size() - 1, target);
    if (this->index == -1)
    {
        return false;
    } else {
        return true;
    }
    
}