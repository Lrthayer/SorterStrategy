#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include "sort.h"
#include <iostream>
#include <array>

template <typename T, size_t N>
class insertionSort : public Sort<T>
{
public:
    insertionSort(T *arr, int length);
    insertionSort(std::array<T,N> *arr, int length);
    void sort();
    void decendSort();
    int getIteration();

    void arraySort();
    void stdArraySort();

private:
    T *arr_;
    int length_;
    int iteration;
    std::array<T,N> *arrStd_;
};

#include "insertionsort.cpp"
#endif // INSERTIONSORT_H
