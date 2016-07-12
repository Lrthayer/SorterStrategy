#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "sort.h"

template <typename T>
class quickSort : public Sort<T>
{
public:
    quickSort(T *arr, int l, int r);
    void sort();
    void decendSort();

    int getIteration();

private:
    int partition(T *arr, int low, int high);
    T *arr_;
    int left_;
    int right_;
    int iteration;
};

#include "quicksort.cpp"

#endif // QUICKSORT_H
