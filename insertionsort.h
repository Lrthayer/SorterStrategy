#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include "sort.h"
#include <iostream>

template <typename T>
class insertionSort : public Sort<T>
{
public:
    insertionSort(T *arr, int length);
    void sort();
    void decendSort();

    int getIteration();

private:
    T *arr_;
    int length_;
    int iteration;
};

#include "insertionsort.cpp"
#endif // INSERTIONSORT_H
