#include "quicksort.h"

template<typename T>
quickSort<T>::quickSort(T *arr, int l, int r)
    :
      arr_(arr),
      left_(l),
      right_(r-1),//for size index
      iteration(0),
      arrVec_(NULL)
{

}

template<typename T>
quickSort<T>::quickSort(std::vector<T> *arr, int l, int r)
   :
    arr_(NULL),
    left_(l),
    right_(r-1),//for size index
    iteration(0),
    arrVec_(arr)
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

template<typename T>
int quickSort<T>::partition(std::vector<T> *arr, int low, int high)
{
    T pivot = arr->at(high);
    int i = (low -1);

    for (int j = low; j<= high -1; j++)
    {
        iteration++;
        if(arr->at(j) <= pivot)
        {
            i++;
            this->swap(&arr->at(i), &arr->at(j));
        }
    }
    this->swap(&arr->at(i+1), &arr->at(high));
    return (i + 1);
}

template <typename T>
void quickSort<T>::sort()
{
    if (arr_ != NULL)
        arraySort();
    else if (arrVec_ != NULL)
    	vectSort();
}

template <typename T>
void quickSort<T>::arraySort()
{
    iteration++;
    if (left_ < right_)
    {
        int pi = partition(arr_, left_, right_);
        int tmp = right_;
        right_ = pi - 1;
        this->arraySort();
        left_ = pi + 1;
        right_ = tmp;
        this->arraySort();
    }
}

template <typename T>
void quickSort<T>::vectSort()
{
    iteration++;
    if (left_ < right_)
    {
        int pi = partition(arrVec_, left_, right_);
        int tmp = right_;
        right_ = pi - 1;
        this->vectSort();
        left_ = pi + 1;
        right_ = tmp;
        this->vectSort();
    }
}

template <typename T>
void quickSort<T>::decendSort()
{
    this->sort();
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

template <typename T>
int quickSort<T>::getIteration()
{
   return iteration;
}
