#include "heapsort.h"

template <typename T, size_t N>
heapSort<T, N>::heapSort(T *arr, int length)
    :
      arr_(arr),
      length_(length),
      iteration(0),
      arrStd_(nullptr),
      arrVec_(nullptr)
{

}

template <typename T, size_t N>
heapSort<T, N>::heapSort(std::array<T,N> *arr, int length)
    :
      arr_(nullptr),
      length_(length),
      iteration(0),
      arrStd_(arr),
      arrVec_(nullptr)
{

}

template <typename T, size_t N>
heapSort<T, N>::heapSort(std::vector<T> *arr, int length)
    :
      arr_(nullptr),
      length_(length),
      iteration(0),
      arrStd_(nullptr),
      arrVec_(arr)
{

}

template <typename T, size_t N>
void heapSort<T, N>::heapify(T *arr, int length, int index)
{
    iteration++;
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

template <typename T, size_t N>
void heapSort<T, N>::heapify(std::array<T,N> *arr, int length, int index)
{
    iteration++;
    int high = index;
    int l = 2*index +1;
    int r = 2*index +2;

    if (l < length && arr->at(l) > arr->at(high))
        high = l;

    if (r < length && arr->at(r) > arr->at(high))
        high = r;
    if (high != index)
    {
        this->swap(&arr->at(index), &arr->at(high));
        heapify(arr,length, high);
    }
}

template <typename T, size_t N>
void heapSort<T, N>::heapify(std::vector<T> *arr, int length, int index)
{
    iteration++;
    int high = index;
    int l = 2*index +1;
    int r = 2*index +2;

    if (l < length && arr->at(l) > arr->at(high))
        high = l;

    if (r < length && arr->at(r) > arr->at(high))
        high = r;
    if (high != index)
    {
        this->swap(&arr->at(index), &arr->at(high));
        heapify(arr,length, high);
    }
}

template <typename T, size_t N>
void heapSort<T, N>::sort()
{
    if (arrStd_ != nullptr)
    	stdArraySort();
    else if (arr_ != nullptr)
    	arraySort();
    else if (arrVec_ != nullptr)
    	vectSort();
}

template <typename T, size_t N>
void heapSort<T, N>::arraySort()
{
    for (int i = length_/2 -1; i>= 0; i--)
    {
        iteration++;
        heapify(arr_, length_, i);
    }

    for (int i=length_-1; i>=0; i--)
    {
        iteration++;
        this->swap(&arr_[0], &arr_[i]);
        heapify(arr_,i,0);
    }
}

template <typename T, size_t N>
void heapSort<T, N>::stdArraySort()
{
    for (int i = length_/2 -1; i>= 0; i--)
    {
        iteration++;
        heapify(arrStd_, length_, i);
    }

    for (int i=length_-1; i>=0; i--)
    {
        iteration++;
        this->swap(&arrStd_->at(0), &arrStd_->at(i));
        heapify(arrStd_,i,0);
    }
}

template <typename T, size_t N>
void heapSort<T, N>::vectSort()
{
    for (int i = length_/2 -1; i>= 0; i--)
    {
        iteration++;
        heapify(arrVec_, length_, i);
    }

    for (int i=length_-1; i>=0; i--)
    {
        iteration++;
        this->swap(&arrVec_->at(0), &arrVec_->at(i));
        heapify(arrVec_,i,0);
    }
}

template <typename T, size_t N>
void heapSort<T, N>::decendSort()
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

template <typename T, size_t N>
int heapSort<T, N>::getIteration()
{
    return iteration;
}
