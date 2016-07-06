#include "heapsort.h"

template <typename T>
heapSort<T>::heapSort(T *arr, int length)
    :
      arr_(arr),
      length_(length)
{

}

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
void heapSort<T>::sort()
{
    for (int i = length_/2 -1; i>= 0; i--)
        heapify(arr_, length_, i);

    for (int i=length_-1; i>=0; i--)
    {
        this->swap(&arr_[0], &arr_[i]);
        heapify(arr_,i,0);
    }
}
