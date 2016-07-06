#include "heapsort.h"

template <typename T>
void heapSort<T>::heapify(T *arr, int length, int index)
{
    int high = index;
    int l = 2*index +1;
    int r = 2*index +2;

    if (l < length && arr[l] > arr[high])
        high = l;

    if (r < length && arr[r] > arr[high])
        high = r;
    if (high != index)
    {
        this->swap(&arr[index], &arr[high]);
        heapify(arr,length, high);
    }
}

template <typename T>
void heapSort<T>::sort(T *arr, int empty, int length)
{
    for (int i = length/2 -1; i>= 0; i--)
        heapify(arr, length, i);

    for (int i=length-1; i>=0; i--)
    {
        this->swap(&arr[0], &arr[i]);
        heapify(arr,i,0);
    }
}
