#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "sort.h"
#include <array>
#include <vector>

template <typename T>
class heapSort : public Sort<T>
{
public:
    heapSort(T *arr, int length);
    heapSort(std::vector<T> *arr, int length);
    void sort();
    void decendSort();
    int getIteration();

private:
    void heapify(T *arr, int length, int index);
    void heapify(std::vector<T> *arr, int length, int index);

    T *arr_;
    int length_;
    int iteration;
    std::vector<T> *arrVec_;

    void arraySort();
    void vectSort();
};

#include "heapsort.cpp"
#endif // HEAPSORT_H
