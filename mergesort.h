#ifndef MERGESORT_H
#define MERGESORT_H

#include "sort.h"

template <typename T>
class mergeSort : public Sort<T>
{
public:
    mergeSort(T *arr, int left, int right);
    void sort();

private:
    void merge(T *arr, int l, int m, int r);
    T *arr_;
    int left_;
    int right_;
};
#include "mergesort.cpp"

#endif // MERGESORT_H
