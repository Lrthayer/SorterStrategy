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

protected:
    typedef T type;

private:
    int *array_;
    int left_;
    int right_;

};
#include "sortsetter.cpp"

#endif // SORTSETTER_H
