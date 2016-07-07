#ifndef SORTSETTER_H
#define SORTSETTER_H

#include "insertionsort.h"
#include "quicksort.h"
#include "heapsort.h"
#include "mergesort.h"

template <typename T>
class sortSetter
{
public:
    void setSort(T *arr, int l, int r);
    void setSort(T *arr, int length);
    void merge(T *arr, int left, int right);
    void heap(T *arr, int length);
    void quick(T *arr, int l, int r);
    void insertion(T *arr, int length);

protected:
    typedef T type;

private:
    int *array_;
    int left_;
    int right_;

};
#include "sortsetter.cpp"

#endif // SORTSETTER_H
