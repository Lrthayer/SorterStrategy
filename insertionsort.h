#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include "sort.h"
#include <iostream>
#include <array>
#include <vector>

template <typename T, size_t N>
class insertionSort : public Sort<T>
{
public:
    insertionSort(T *arr, int length);
    insertionSort(std::array<T,N> *arr, int length);
    insertionSort(std::vector<T> *arr, int length);
    void sort();
    void decendSort();
    int getIteration();

private:
    T *arr_;
    int length_;
    int iteration;
    std::array<T,N> *arrStd_;
    std::vector<T> *arrVec_;

    void arraySort();
    void stdArraySort();
    void vectSort();
};

#include "insertionsort.cpp"
#endif // INSERTIONSORT_H
