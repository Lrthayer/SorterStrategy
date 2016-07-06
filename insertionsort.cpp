#include "insertionsort.h"
template <typename T>
insertionSort<T>::insertionSort(T *arr, int length)
    :
      arr_(arr),
      length_(length)
{

}

template <typename T>
void insertionSort<T>::sort()
{
    int j;
    T temp;

    for (int i = 0; i < length_; i++)
    {
        j = i;
        while (j >0 && arr_[j] < arr_[j-1])
        {
            temp = arr_[j];
            arr_[j] = arr_[j-1];
            arr_[j-1] = temp;
            j--;
        }
    }
}
