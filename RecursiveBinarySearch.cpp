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
    int mid = (start + end)>>1;

    if (target == array[mid]){
        return mid;
    }

    else if (target < array[mid]) {
        return binarySearch(array, start, mid - 1, target);
    }

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