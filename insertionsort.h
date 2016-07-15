#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include "sort.h"
#include <iostream>
#include <array>
#include <vector>

template <typename T>
class insertionSort : public Sort<T>
{
public:
    insertionSort(T *arr, int length);
    insertionSort(std::vector<T> *arr, int length);
    void sort();
    void decendSort();
    int getIteration();

private:
    T *arr_;
    int length_;
    int iteration;
    std::vector<T> *arrVec_;

    void arraySort();
    void vectSort();
};

#include "insertionsort.cpp"
#endif // INSERTIONSORT_H
