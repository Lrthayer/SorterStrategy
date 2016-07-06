#ifndef SORT_H
#define SORT_H

#include <iostream>

template <typename T>
class Sort
{
public:

    //Type definition of the element type.
    typedef T type;

    Sort();
    //virtual void sort(T *arr,int start, int length) = 0;
    //merge sort, best used if list is reversed sort
    void mergeSort(T *arr, int l, int r);

    //default best sort, except if the sort is reversed
    void quickSort(T *arr, int l, int r);

    //fasest sort for any list around 10 elements
    void insertionSort(T *arr, int length);

    //the swiss army knife of sorts, always has logn(0)
    //void heapSort(T *arr, int length);

private:
    //used for mergeSort
    void merge(T *arr, int l, int m, int r);

    //used for QuickSort
    //void swap(T* a, T* b);
    T partition(T *arr, int low, int high);

    //used for heapSort
    //void heapify(T *arr, int length, int index);

protected:
    virtual void swap(T* a, T* b);
};

template <typename T>
class quickSort : public Sort<T>
{
public:
    void sort(T *arr, int l, int r);

private:
    T partition(T *arr, int low, int high);
};

template <typename T>
class insertSort : public Sort<T>
{
public:
    void sort();
};

template <typename T>
class heapSort : public Sort<T>
{
public:
    void sort(T *arr, int empty, int length);

private:
    void heapify(T *arr, int length, int index);
};

#include "sort.cpp"

#endif // SORT_H
