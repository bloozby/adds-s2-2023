#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"

class QuickSort : public Sort{
private:

public:
    QuickSort();
    std::vector<int> sort(std::vector<int> list);

};

#endif