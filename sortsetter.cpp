#include "sortsetter.h"

template <typename T>
void sortSetter<T>::setSort(T *arr, int l, int r)
{
    if (r < 1)
    {
        insertionSort<T> sorter(arr,r);
        sorter.sort();
        return;
    }

    //try to see if it's in reverse order
    int per = r/3;
    int reverse = 0;
    int notReverse = 0;
    for (int i =0; i < per; i++)
    {
        if (arr[i] > arr[i+1])
        {
            reverse++;
        }
        else
        {
            notReverse++;
        }
    }
    if (reverse > notReverse)
    {
        mergeSort<T> sorter (arr, l, r);
        sorter.sort();
        return ;
    }
    else
    {
        std::cout << "test2";
        //needs to be fixed, doens't crash but... ends program with no errors.
        quickSort<T> sorter(arr,l,r);
        sorter.sort();
        return ;
    }

    if (true)
    {
        std::cout << "test3";
        heapSort<T> sorter(arr,r);
        sorter.sort();
    }
}

template <typename T>
void sortSetter<T>::setSort(T *arr, int length)
{
    if (length < 11)
    {
        insertionSort<T> sorter(arr,length);
        sorter.sort();
        return;
    }

    //try to see if it's in reverse order
    int per = length/4;
    int reverse = 0;
    int notReverse = 0;
    for (int i =0; i < per; i++)
    {
        if (arr[i] > arr[i+1])
        {
            reverse++;
        }
        else
        {
            notReverse++;
        }
    }
    if (reverse > notReverse)
    {
        mergeSort<T> sorter (arr, 0, length);
        sorter.sort();
        return ;
    }
    else
    {
        quickSort<T> sorter(arr,0,length);
        sorter.sort();
        return ;
    }

    if (true)
    {
        heapSort<T> sorter(arr,length);
        sorter.sort();
    }
}

template <typename T>
void sortSetter<T>::merge(T *arr, int left, int right)
{
    mergeSort<T> sorter(arr,left,right);
    sorter.sort();
}

template <typename T>
void sortSetter<T>::quick(T *arr, int left, int right)
{
    quickSort<T> sorter(arr,left,right);
    sorter.sort();
}

template <typename T>
void sortSetter<T>::insertion(T *arr, int length)
{
    insertionSort<T> sorter(arr,length);
    sorter.sort();
}

template <typename T>
void sortSetter<T>::heap(T *arr, int length)
{
    heapSort<T> sorter(arr,length);
    sorter.sort();
}
