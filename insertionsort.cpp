#include "insertionsort.h"
template <typename T>
insertionSort<T>::insertionSort(T *arr, int length)
    :
      arr_(arr),
      length_(length),
      iteration(0)
{

}

template <typename T>
void insertionSort<T>::sort()
{
    iteration++;
    int j;
    T temp;

    for (int i = 0; i < length_; i++)
    {
        iteration++;
        j = i;
        while (j > 0 && arr_[j] < arr_[j-1])
        {
            iteration++;
            temp = arr_[j];
            arr_[j] = arr_[j-1];
            arr_[j-1] = temp;
            j--;
        }
    }
}

template <typename T>
void insertionSort<T>::decendSort()
{
    this->sort();
    T *temp = new T[length_];
    int j = 0;
    for (int i = length_-1; i >= 0; i--)
    {
        temp[i] = arr_[j];
        j++;
    }

    for (int i = 0; i < length_; i++)
        arr_[i] = temp[i];
}

template <typename T>
int insertionSort<T>::getIteration()
{
    return iteration;
}
