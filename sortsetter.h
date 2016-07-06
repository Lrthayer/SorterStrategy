#ifndef SORTSETTER_H
#define SORTSETTER_H

#include "insertionsort.h"
#include "quicksort.h"

template <typename T>
class sortSetter
{
public:
    void setSort(T *arr, int l, int r, int m);

protected:
    typedef T type;

private:
    int *array;
    int left;
    int right;
    int mid;

};
#include "sortsetter.cpp"

#endif // SORTSETTER_H
