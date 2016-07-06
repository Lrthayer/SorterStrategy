#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "sort.h"

template <typename T>
class heapSort : public Sort<T>
{
public:
    void sort(T *arr, int empty, int length);

private:
    void heapify(T *arr, int length, int index);
};

#include "heapsort.cpp"
#endif // HEAPSORT_H
