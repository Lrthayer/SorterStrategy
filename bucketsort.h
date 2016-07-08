#ifndef BUCKETSORT_H
#define BUCKETSORT_H

#include "sort.h"

template<typename T>
class bucketSort : public Sort<T>
{
public:
    bucketSort(T *arr, int length);
    void sort();

    int getIteration();

private:
    T *arr_;
    int length_;
    int iteration;
};

#include "bucketsort.cpp"

#endif // BUCKETSORT_H
