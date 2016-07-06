#ifndef MERGESORT_H
#define MERGESORT_H

#include "sort.h"

template <typename T>
class mergeSort : public Sort<T>
{
public:
    void sort(T *arr, int l, int r);

private:
    void merge(T *arr, int l, int m, int r);
};
#include "mergesort.cpp"

#endif // MERGESORT_H
