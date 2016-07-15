#include "mergesort.h"

template <typename T>
mergeSort<T>::mergeSort(T *arr, int left, int right)
    :
      arr_(arr),
      left_(left),
      right_(right-1),//for indexing,
      iteration(0)
{

}

template<typename T>
mergeSort<T>::mergeSort(std::vector<T> *arr, int left, int right)
   :
    arr_(NULL),
    left_(left),
    right_(right-1),//for size index
    iteration(0),
    arrVec_(arr)
{

}

template <typename T>
void mergeSort<T>::sort()
{
    if (arr_ != NULL)
        arraySort();
    else if (arrVec_ != NULL)
        vectSort();
}

template <typename T>
void mergeSort<T>::arraySort()
{
    iteration++;
    if (left_ < right_)
    {
        int m = (left_ + right_)/2;
        int tmp = right_;
        right_ = m;
        this->arraySort();
        right_ = tmp;
        tmp = left_;
        left_ = m + 1;
        this->arraySort();
        left_ = tmp;
        merge(arr_, left_, m, right_);
    }
    return;
}

template <typename T>
void mergeSort<T>::vectSort()
{
    iteration++;
    if (left_ < right_)
    {
        int m = (left_ + right_)/2;
        int tmp = right_;
        right_ = m;
        this->vectSort();
        right_ = tmp;
        tmp = left_;
        left_ = m + 1;
        this->vectSort();
        left_ = tmp;
        merge(arrVec_, left_, m, right_);
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
    {
        iteration++;
        L[i] = arr[l + i];
    }
    for (j=0; j <n2; j++)
    {
        iteration++;
        R[j] = arr[m + 1 + j];
    }
    i = 0; j = 0; k = l ;
    while (i <n1 && j < n2)
    {
        iteration++;
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
        iteration++;
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        iteration++;
        arr[k] = R[j];
        j++;
        k++;
    }
}

template <typename T>
void mergeSort<T>::merge(std::vector<T> *arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m -l +1;
    int n2 = r -m;
    T L[n1], R[n2];

    for (i =0; i < n1; i++)
    {
        iteration++;
        L[i] = arr->at(l + i);
    }
    for (j=0; j <n2; j++)
    {
        iteration++;
        R[j] = arr->at(m + 1 + j);
    }
    i = 0; j = 0; k = l ;
    while (i <n1 && j < n2)
    {
        iteration++;
        if (L[i] <= R[j])
        {
            arr->at(k) = L[i];
            i++;
        }
        else
        {
            arr->at(k) = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        iteration++;
        arr->at(k) = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        iteration++;
        arr->at(k) = R[j];
        j++;
        k++;
    }
}

template <typename T>
void mergeSort<T>::decendSort()
{
    if (arr_ != NULL)
    {
        this->arraySort();
        T *temp = new T[right_];
        int j = 0;
        for (int i = right_; i >= 0; i--)
        {
            temp[i] = arr_[j];
            j++;
        }

        for (int i = 0; i < right_+1; i++)
            arr_[i] = temp[i];
    }
    else
    {
        this->vectSort();
        T *temp = new T[right_];
        int j = 0;
        for (int i = right_; i >= 0; i--)
        {
            temp[i] = arrVec_->at(j);
            j++;
        }

        for (int i = 0; i < right_+1; i++)
            arrVec_->at(i) = temp[i];
    }
}

template <typename T>
int mergeSort<T>::getIteration()
{
    return iteration;
}
