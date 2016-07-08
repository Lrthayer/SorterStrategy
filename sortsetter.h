#ifndef SORTSETTER_H
#define SORTSETTER_H

#include "insertionsort.h"
#include "quicksort.h"
#include "heapsort.h"
#include "mergesort.h"
#include "bucketsort.h"

#include <ctime>

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
    void bucket(T *arr, int length);

    int getIteration();
    void setIteration(int it);
    std::string whichOne(T *arr, int left, int right);

protected:
    typedef T type;

private:
    int iteration;


};
#include "sortsetter.cpp"

#endif // SORTSETTER_H
