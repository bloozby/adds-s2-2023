#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"

class QuickSort : public Sort {

private:
std::vector<int> storage;
public:
    QuickSort();
    QuickSort(std::vector<int> array);

    int partition (int start, int end);
    void quickSort(int start, int end);
    std::vector<int> sort(std::vector<int> list);
    std::vector<int> getList();
    void setList(std::vector<int> list);
};

#endif