#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "sort.h"

template <typename T>
class heapSort : public Sort<T>
{
public:
    heapSort(T *arr, int length);
    void sort();

    int getIteration();

private:
    void heapify(T *arr, int length, int index);

    T *arr_;
    int length_;
    int iteration;
};

#include "heapsort.cpp"
#endif // HEAPSORT_H
