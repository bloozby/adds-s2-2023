#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"

class QuickSort : public Sort {

private:
std::vector<int> storage;
public:
    QuickSort();// no argument constractor
    QuickSort(std::vector<int> array); // one argument constractor

    int partition (int start, int end);
    void quickSort(int start, int end);
    std::vector<int> sort(std::vector<int> list);
    std::vector<int> getList();
    void setList(std::vector<int> list);
};

#endif