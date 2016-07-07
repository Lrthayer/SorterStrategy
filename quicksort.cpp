#include "quicksort.h"

template<typename T>
quickSort<T>::quickSort(T *arr, int l, int r)
    :
      arr_(arr),
      left_(l),
      right_(r-1),//for size index
      iteration(0)
{

}

template<typename T>
int quickSort<T>::partition(T *arr, int low, int high)
{
    T pivot = arr[high];
    int i = (low -1);

    for (int j = low; j<= high -1; j++)
    {
        iteration++;
        if(arr[j] <= pivot)
        {
            i++;
            this->swap(&arr[i], &arr[j]);
        }
    }
    this->swap(&arr[i+1], &arr[high]);
    return (i + 1);
}

template <typename T>
void quickSort<T>::sort()
{
    iteration++;
    if (left_ < right_)
    {
        int pi = partition(arr_, left_, right_);
        //this->sort(arr_, left_, pi -1);
        int tmp = right_;
        right_ = pi - 1;
        this->sort();
        //this->sort(arr_, pi+1, right_);
        //int tmp2 = left_;
        left_ = pi + 1;
        right_ = tmp;
        this->sort();
    }
}

template <typename T>
int quickSort<T>::getIteration()
{
   return iteration;
}
