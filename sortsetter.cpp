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
void sortSetter<T>::setSort(std::vector<T> *arr, int l, int r)
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
void sortSetter<T>::setSortDecend(T *arr, int l, int r)
{
    if (r < 11)
    {
        insertionSort<T> sorter(arr,r);
        sorter.decendSort();
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
        mergeSort<T> sorter (arr, l, r);
        sorter.decendSort();
        setIteration(sorter.getIteration());
        return ;
    }
    else
    {
        //needs to be fixed, doens't crash but... ends program with no errors.
        quickSort<T> sorter(arr,l,r);
        sorter.decendSort();
        setIteration(sorter.getIteration());
        return ;
    }

    if (true)
    {
        heapSort<T> sorter(arr,r);
        sorter.decendSort();
        setIteration(sorter.getIteration());
    }
}

template <typename T>
void sortSetter<T>::setSortDecend(std::vector<T> *arr, int l, int r)
{
    if (r < 11)
    {
        insertionSort<T> sorter(arr,r);
        sorter.decendSort();
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
        mergeSort<T> sorter (arr, l, r);
        sorter.decendSort();
        setIteration(sorter.getIteration());
        return ;
    }
    else
    {
        //needs to be fixed, doens't crash but... ends program with no errors.
        quickSort<T> sorter(arr,l,r);
        sorter.decendSort();
        setIteration(sorter.getIteration());
        return ;
    }

    if (true)
    {
        heapSort<T> sorter(arr,r);
        sorter.decendSort();
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
void sortSetter<T>::setSort(std::vector<T> *arr, int length)
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
void sortSetter<T>::setSortDecend(T *arr, int length)
{
    if (length < 11)
    {
        insertionSort<T> sorter(arr,length);
        sorter.decendSort();
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
        sorter.decendSort();
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
        sorter.decendSort();
        setIteration(sorter.getIteration());
        return ;
    }
    else
    {
        quickSort<T> sorter(arr,0,length);
        sorter.decendSort();
        setIteration(sorter.getIteration());
        return ;
    }
}

template <typename T>
void sortSetter<T>::setSortDecend(std::vector<T> *arr, int length)
{
    if (length < 11)
    {
        insertionSort<T> sorter(arr,length);
        sorter.decendSort();
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
        sorter.decendSort();
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
        sorter.decendSort();
        setIteration(sorter.getIteration());
        return ;
    }
    else
    {
        quickSort<T> sorter(arr,0,length);
        sorter.decendSort();
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
void sortSetter<T>::merge(T *arr, int length)
{
    mergeSort<T> sorter(arr,0,length);
    sorter.sort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::merge(std::vector<T> *arr, int left, int right)
{
    mergeSort<T> sorter(arr,left,right);
    sorter.sort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::merge(std::vector<T> *arr, int length)
{
    mergeSort<T> sorter(arr,0,length);
    sorter.sort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::mergeDecend(T *arr, int left, int right)
{
    mergeSort<T> sorter(arr,left,right);
    sorter.decendSort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::mergeDecend(T *arr, int length)
{
    mergeSort<T> sorter(arr, 0, length);
    sorter.decendSort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::mergeDecend(std::vector<T> *arr, int left, int right)
{
    mergeSort<T> sorter(arr,left,right);
    sorter.decendSort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::mergeDecend(std::vector<T> *arr, int length)
{
    mergeSort<T> sorter(arr,0,length);
    sorter.decendSort();
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
void sortSetter<T>::quick(T *arr, int length)
{
    quickSort<T> sorter(arr,0,length);
    sorter.sort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::quick(std::vector<T> *arr, int left, int right)
{
    quickSort<T> sorter(arr,left,right);
    sorter.sort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::quick(std::vector<T> *arr, int length)
{
    quickSort<T> sorter(arr,0, length);
    sorter.sort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::quickDecend(T *arr, int left, int right)
{
    quickSort<T> sorter(arr,left,right);
    sorter.decendSort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::quickDecend(T *arr, int length)
{
    quickSort<T> sorter(arr,0,length);
    sorter.decendSort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::quickDecend(std::vector<T> *arr, int left, int right)
{
    quickSort<T> sorter(arr,left,right);
    sorter.decendSort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::quickDecend(std::vector<T> *arr, int length)
{
    quickSort<T> sorter(arr,0,length);
    sorter.decendSort();
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
void sortSetter<T>::insertion(std::vector<T> *arr, int length)
{
    insertionSort<T> sorter(arr,length);
    sorter.sort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::insertionDecend(T *arr, int length)
{
    insertionSort<T> sorter(arr,length);
    sorter.decendSort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::insertionDecend(std::vector<T> *arr, int length)
{
    insertionSort<T> sorter(arr,length);
    sorter.decendSort();
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
void sortSetter<T>::heap(std::vector<T> *arr, int length)
{
    heapSort<T> sorter(arr,length);
    sorter.sort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::heapDecend(T *arr, int length)
{
    heapSort<T> sorter(arr,length);
    sorter.decendSort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::heapDecend(std::vector<T> *arr, int length)
{
    heapSort<T> sorter(arr,length);
    sorter.decendSort();
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
void sortSetter<T>::bucket(std::vector<T> *arr, int length)
{
    bucketSort<T> sorter(arr,length);
    sorter.sort();
    setIteration(sorter.getIteration());
}

template <typename T>
void sortSetter<T>::bucketDecend(T *arr, int length)
{
    bucketSort<T> sorter(arr,length);
    sorter.decendSort();
    setIteration(sorter.getIteration());
}


template <typename T>
void sortSetter<T>::bucketDecend(std::vector<T> *arr, int length)
{
    bucketSort<T> sorter(arr,length);
    sorter.decendSort();
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
    T arr1[right], arr2[right], arr3[right], arr4[right];
    for (int i=0; i < right; i++)
    {
        arr1[i] = arr[i];
        arr2[i] = arr[i];
        arr3[i] = arr[i];
        arr4[i] = arr[i];
    }

    int it1, it2;
    std::string quickest = "insertion";

    insertion(arr,right);
    it1 = getIteration();

    heap(arr1,right);
    it2 = getIteration();

    if (it1 > it2)
    {
        it1 = it2;
        quickest = "heap";
    }

    merge(arr2, left,right);
    it2 = getIteration();

    if (it1 > it2)
    {
        it1 = it2;
        quickest = "merge";
    }

    quick(arr3,left,right);
    it2 = getIteration();

    if (it1 > it2)
    {
        it1 = it2;
        quickest = "quick";
    }

    return quickest;
}

template <typename T>
std::string sortSetter<T>::whichOne(T *arr, int length)
{
    T arr1[length], arr2[length], arr3[length], arr4[length];
    for (int i=0; i < length; i++)
    {
        arr1[i] = arr[i];
        arr2[i] = arr[i];
        arr3[i] = arr[i];
        arr4[i] = arr[i];
    }

    int it1, it2;
    std::string quickest = "insertion";

    insertion(arr,length);
    it1 = getIteration();

    heap(arr1,length);
    it2 = getIteration();

    if (it1 > it2)
    {
        it1 = it2;
        quickest = "heap";
    }

    merge(arr2,0,length);
    it2 = getIteration();

    if (it1 > it2)
    {
        it1 = it2;
        quickest = "merge";
    }

    quick(arr3,0,length);
    it2 = getIteration();

    if (it1 > it2)
    {
        it1 = it2;
        quickest = "quick";
    }

    return quickest;
}

template <typename T>
std::string sortSetter<T>::whichOne(std::vector<T> *arr, int left, int right)
{
    std::vector<T> arr1[right], arr2[right], arr3[right], arr4[right];
    for (int i=0; i < right; i++)
    {
        arr1.at(i) = arr->at(i);
        arr2.at(i) = arr->at(i);
        arr3.at(i) = arr->at(i);
        arr4.at(i) = arr->at(i);
    }

    int it1, it2;
    std::string quickest = "insertion";

    insertion(arr,right);
    it1 = getIteration();

    heap(arr1,right);
    it2 = getIteration();

    if (it1 > it2)
    {
        it1 = it2;
        quickest = "heap";
    }

    merge(arr2, left,right);
    it2 = getIteration();

    if (it1 > it2)
    {
        it1 = it2;
        quickest = "merge";
    }

    quick(arr3,left,right);
    it2 = getIteration();

    if (it1 > it2)
    {
        it1 = it2;
        quickest = "quick";
    }

    return quickest;
}

template <typename T>
std::string sortSetter<T>::whichOne(std::vector<T> *arr, int length)
{
    std::vector<T> arr1(length), arr2(length), arr3(length), arr4(length);
    for (int i=0; i < length; i++)
    {
        arr1.at(i) = arr->at(i);
        arr2.at(i) = arr->at(i);
        arr3.at(i) = arr->at(i);
        arr4.at(i) = arr->at(i);
    }

    int it1, it2;
    std::string quickest = "insertion";

    insertion(arr,length);
    it1 = getIteration();

    heap(&arr1,length);
    it2 = getIteration();

    if (it1 > it2)
    {
        it1 = it2;
        quickest = "heap";
    }

    merge(&arr2,0,length);
    it2 = getIteration();

    if (it1 > it2)
    {
        it1 = it2;
        quickest = "merge";
    }

    quick(&arr3,0,length);
    it2 = getIteration();

    if (it1 > it2)
    {
        it1 = it2;
        quickest = "quick";
    }

    return quickest;
}
