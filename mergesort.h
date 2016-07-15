#ifndef MERGESORT_H
#define MERGESORT_H

#include "sort.h"

template <typename T>
class mergeSort : public Sort<T>
{
public:
    mergeSort(T *arr, int left, int right);
    mergeSort(std::vector<T> *arr, int left, int right);
    void sort();
    void decendSort();

    int getIteration();

private:
    void merge(T *arr, int l, int m, int r);
    void merge(std::vector<T> *arr, int l, int m, int r);
    void arraySort();
    void vectSort();

    T *arr_;
    int left_;
    int right_;
    int iteration;
    std::vector<T> *arrVec_;

};
#include "mergesort.cpp"

#endif // MERGESORT_H
