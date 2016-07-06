#include "sortsetter.h"

template <typename T>

void sortSetter<T>::setSort(T *arr, int l, int r, int m)
{
    if (r < 1)
    {
        insertionSort<T> sorter(arr,r);
        sorter.sort();
        return;
    }

    //try to see if it's in reverse order

    else if (true)
    {
        quickSort<T> sorter(arr,l,r);
        sorter.sort();
    }
}
