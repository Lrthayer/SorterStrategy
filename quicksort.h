#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "sort.h"
#include <vector>

template <typename T>
class quickSort : public Sort<T>
{
public:
    quickSort(T *arr, int l, int r);
    quickSort(std::vector<T> *arr, int l, int r);
    void sort();
    void decendSort();

    int getIteration();

private:
    int partition(T *arr, int low, int high);
    int partition(std::vector<T> *arr, int low, int high);
    T *arr_;
    int left_;
    int right_;
    int iteration;
    std::vector<T> *arrVec_;

    void arraySort();
    void vectSort();
};

#include "quicksort.cpp"

#endif // QUICKSORT_H
