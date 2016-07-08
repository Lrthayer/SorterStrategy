#include "sortsetter.h"

template <typename T>
void sortSetter<T>::setSort(T *arr, int l, int r)
{
    if (r < 11)
    {
        insertionSort<T> sorter(arr,r);
        sorter.sort();
        return;
    }

    //try to see if it's in reverse order
    int per = r/3;
    int reverse = 0;
    int notReverse = 0;
    for (int i =0; i < per; i++)
    {
        if (arr[i] > arr[i+1])
        {
            reverse++;
        }
        else
        {
            notReverse++;
        }
    }
    if (reverse > notReverse)
    {
        std::cout << "?";
        mergeSort<T> sorter (arr, l, r);
        sorter.sort();
        setIteration(sorter.getIteration());
        return ;
    }
    else
    {
        std::cout << "test2";
        //needs to be fixed, doens't crash but... ends program with no errors.
        quickSort<T> sorter(arr,l,r);
        sorter.sort();
        setIteration(sorter.getIteration());
        return ;
    }

    if (true)
    {
        std::cout << "test3";
        heapSort<T> sorter(arr,r);
        sorter.sort();
        setIteration(sorter.getIteration());
    }
}

template <typename T>
void sortSetter<T>::setSort(T *arr, int length)
{
    if (length < 11)
    {
        insertionSort<T> sorter(arr,length);
        sorter.sort();
        setIteration(sorter.getIteration());
        return;
    }
    int per = length/4;
    //if 1/4 of the list has 50% of elements reoccuring use bucketsort
    int reoccur = 0;

    for (int i = 0; i < per; i++)
    {
        if (arr[i] == arr[i+1])
        {
            reoccur++;
        }
    }

    if (reoccur > per/4)
    {
        bucketSort<T> sorter (arr, length);
        sorter.sort();
        setIteration(sorter.getIteration());
        return ;
    }

    //try to see if it's in reverse order

    int reverse = 0;
    int notReverse = 0;
    for (int i =0; i < per; i++)
    {
        if (arr[i] > arr[i+1])
        {
            reverse++;
        }
        else
        {
            notReverse++;
        }
    }

    //if 1/4 of the list is over 50% reverse order, use mergesort, otherwise use quicksort
    if (reverse > notReverse)
    {
        mergeSort<T> sorter (arr, 0, length);
        sorter.sort();
        setIteration(sorter.getIteration());
        return ;
    }
    else
    {
        quickSort<T> sorter(arr,0,length);
        sorter.sort();
        setIteration(sorter.getIteration());
        return ;
    }
}

template <typename T>
void sortSetter<T>::merge(T *arr, int left, int right)
{
    mergeSort<T> sorter(arr,left,right);
    sorter.sort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::quick(T *arr, int left, int right)
{
    quickSort<T> sorter(arr,left,right);
    sorter.sort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::insertion(T *arr, int length)
{
    insertionSort<T> sorter(arr,length);
    sorter.sort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::heap(T *arr, int length)
{
    heapSort<T> sorter(arr,length);
    sorter.sort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::bucket(T *arr, int length)
{
    bucketSort<T> sorter(arr,length);
    sorter.sort();
    setIteration(sorter.getIteration());
}

template <typename T>
int sortSetter<T>::getIteration()
{
    return iteration;
}

template <typename T>
void sortSetter<T>::setIteration(int it)
{
    iteration = it;
}

template <typename T>
std::string sortSetter<T>::whichOne(T *arr, int left, int right)
{
    std::clock_t start;
    double duration;
    double duration2;
    std::string quickest;

    start = std::clock();
    merge(arr, left, right);
    duration = (std::clock()- start)/ (double) CLOCKS_PER_SEC;

    start = std::clock();
    quick(arr, left, right);
    duration2 = (std::clock()- start)/ (double) CLOCKS_PER_SEC;

    if (duration < duration2)
    {
        quickest = "mergeSort";
    }
    else
    {
        duration = duration2;
        quickest = "quickSort";
    }

    start = std::clock();
    insertion(arr,right);
    duration2 = (std::clock()- start)/ (double) CLOCKS_PER_SEC;

    if (duration > duration2)
    {
        duration = duration2;
        quickest = "insertionSort";
    }

    start = std::clock();
    heap(arr,right);
    duration2 = (std::clock()- start)/ (double) CLOCKS_PER_SEC;

    if (duration > duration2)
    {
        duration = duration2;
        quickest = "heapSort";
    }

    start = std::clock();
    bucket(arr,right);
    duration2 = (std::clock()- start)/ (double) CLOCKS_PER_SEC;

    if (duration > duration2)
    {
        duration = duration2;
        quickest = "bucketSort";
    }
    return quickest;
}
