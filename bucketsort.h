#ifndef BUCKETSORT_H
#define BUCKETSORT_H

#include "sort.h"

template<typename T>
class bucketSort : public Sort<T>
{
public:
    bucketSort(T *arr, int length);
    bucketSort(std::vector<T> *arr, int length);
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

#include "bucketsort.cpp"

#endif // BUCKETSORT_H
