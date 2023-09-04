#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch{
private:
    int binarySearch(std::vector<int> array, int start, int end, int target);
    int index;
public:
    RecursiveBinarySearch();
    bool search(std::vector<int> array, int target);
    int getindex();
};

#endif