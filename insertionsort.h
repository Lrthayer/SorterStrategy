#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include "sort.h"

template <typename T>
class insertionSort : public Sort<T>
{
public:
    insertionSort(T *arr, int length);
    void sort();

private:
    T *arr_;
    int length_;
};

#include "insertionsort.cpp"
#endif // INSERTIONSORT_H
