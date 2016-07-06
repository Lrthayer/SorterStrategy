#include "sortsetter.h"

template <typename T>
void sortSetter<T>::setSort(T *arr, int l, int r)
{
    if (false)
    {
        insertionSort<T> sorter(arr,r);
        sorter.sort();
        return;
    }

    //try to see if it's in reverse order
    else if (true)
    {
        //needs to be fixed, doens't crash but... ends program with no errors.
        mergeSort<T> sorter (arr,l,r);
        sorter.sort();
    }
    else if (false)
    {
        quickSort<T> sorter(arr,l,r);
        sorter.sort();
    }
    else if (false)
    {
        heapSort<T> sorter(arr,r);
        sorter.sort();
    }
}

template <typename T>
void sortSetter<T>::setSort(T *arr, int length)
{
    insertionSort<T> sorter(arr,length);
    sorter.sort();
}
