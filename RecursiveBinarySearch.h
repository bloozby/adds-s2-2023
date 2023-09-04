#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch{
private:
    int binarySearch(std::vector<int> array, int start, int end, int target);
    int index;
public:
    RecursiveBinarySearch();// no argument constractor
    bool search(std::vector<int> array, int target);
    int getindex();
};

#endif