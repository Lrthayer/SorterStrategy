#include "insertionsort.h"
template <typename T, size_t N>
insertionSort<T,N>::insertionSort(T *arr, int length)
    :
      arr_(arr),
      length_(length),
      iteration(0),
      arrStd_(nullptr),
      arrVec_(nullptr)
{

}

template <typename T, size_t N>
insertionSort<T,N>::insertionSort(std::array<T,N> *arr, int length)
    :
      arr_(nullptr),
      length_(length),
      iteration(0),
      arrStd_(arr),
      arrVec_(nullptr)
{
    
}

template <typename T, size_t N>
insertionSort<T,N>::insertionSort(std::vector<T> *arr, int length)
    :
      arr_(nullptr),
      length_(length),
      iteration(0),
      arrStd_(nullptr),
      arrVec_(arr)
{
    
}

template <typename T, size_t N>
void insertionSort<T, N>::sort()
{
    if (arrStd_ != nullptr)
        stdArraySort();
    else if (arr_ != nullptr)
        arraySort();
    else if (arrVec_ != nullptr)
        vectSort();
}

template<typename T, size_t N>
void insertionSort<T, N>::arraySort()
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

template<typename T, size_t N>
void insertionSort<T, N>::vectSort()
{
    iteration++;
    int j;
    T temp;

    for (int i = 0; i < length_; i++)
    {
        iteration++;
        j = i;
        while (j > 0 && arrVec_->at(j) < arrVec_->at(j-1))
        {
            iteration++;
            temp = arrVec_->at(j);
            arrVec_->at(j) = arrVec_->at(j-1);
            arrVec_->at(j-1) = temp;
            j--;
        }
    }
}

template<typename T, size_t N>
void insertionSort<T, N>::stdArraySort()
{
    iteration++;
    int j;
    T temp;

    for (int i = 0; i < length_; i++)
    {
        iteration++;
        j = i;
        while (j > 0 && arrStd_[j] < arrStd_[j-1])
        {
            iteration++;
            temp = arrStd_->at(j);
            arrStd_[j] = arrStd_[j-1];
            arrStd_->at(j-1) = temp;
            j--;
        }
    }
}

template <typename T, size_t N>
void insertionSort<T,N>::decendSort()
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
int insertionSort<T, N>::getIteration()
{
    return iteration;
}
