#include "mergesort.h"

template <typename T>
mergeSort<T>::mergeSort(T *arr, int left, int right)
    :
      arr_(arr),
      left_(left),
      right_(right-1)//for indexing
{

}

template <typename T>
void mergeSort<T>::sort()
{
    if (left_ < right_)
    {
        int m = (left_ + right_)/2;
        //this->sort(arr_, left_, m);
        int tmp = right_;
        right_ = m;
        this->sort();
        //this->sort(arr_, m+1, right_);
        right_ = tmp;
        tmp = left_;
        left_ = m + 1;
        this->sort();
        left_ = tmp;
        merge(arr_, left_, m, right_);
    }
    return;
}

template <typename T>
void mergeSort<T>::merge(T *arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m -l +1;
    int n2 = r -m;

    T L[n1], R[n2];

    for (i =0; i < n1; i++)
        L[i] = arr[l + i];
    for (j=0; j <n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0; j = 0; k = l ;
    while (i <n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
