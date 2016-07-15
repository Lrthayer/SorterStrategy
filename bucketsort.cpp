#include "bucketsort.h"

#include "vector"
#include "algorithm"

template<typename T>
bucketSort<T>::bucketSort(T *arr, int length)
    :
      arr_(arr),
      length_(length),
      arrVec_(NULL)
{
}

template<typename T>
bucketSort<T>::bucketSort(std::vector<T> *arr, int length)
    :
      arr_(NULL),
      length_(length),
      arrVec_(arr)
{
}

template<typename T>
void bucketSort<T>::sort()
{
    if (arr_ != NULL)
        arraySort();
    else if (arrVec_ != NULL)
        vectSort();
}

template<typename T>
void bucketSort<T>::arraySort()
{
    iteration ++;
    int m = 100;

    T buckets[m];

    for (int i =0; i < m; i++)
    {
        iteration++;
        buckets[i] = 0;
    }

    for (int i =0; i < length_; i++)
    {
        iteration++;
        ++buckets[arr_[i]];
    }

    for (int i = 0, j =0; j < m; j++)
    {
        iteration++;
        for (int k = buckets[j]; k > 0; k--)
        {
            iteration++;
            arr_[i++] = j;
        }
    }
}

template<typename T>
void bucketSort<T>::vectSort()
{
    iteration ++;
    int m = 100;

    T buckets[m];

    for (int i =0; i < m; i++)
    {
        iteration++;
        buckets[i] = 0;
    }

    for (int i =0; i < length_; i++)
    {
        iteration++;
        ++buckets[arrVec_->at(i)];
    }

    for (int i = 0, j =0; j < m; j++)
    {
        iteration++;
        for (int k = buckets[j]; k > 0; k--)
        {
            iteration++;
            arrVec_->at(i++) = j;
        }
    }
}

template <typename T>
void bucketSort<T>::decendSort()
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

template<typename T>
int bucketSort<T>::getIteration()
{
    return iteration;
}
