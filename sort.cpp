#include "sort.h"

template <typename T>
Sort<T>::Sort()
{
}

template <typename T>
void Sort<T>::merge(T *arr, int l, int m, int r)
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

template <typename T>
void Sort<T>::mergeSort(T *arr, int l, int r)
{
    if (l < r)
    {
        int m = (l + r)/2;
        std::cout << "\n" << m << "\n" << l << "\n";
        mergeSort(arr, l, m);
                std::cout << "test1";
        mergeSort(arr, m+1, r);
        std::cout << "test2";
        merge(arr, l, m, r);
    }
    return;
}
template <typename T>
void Sort<T>::swap(T* a, T* b)
{
    T tmp = *a;
    *a = *b;
    *b = tmp;
}

template<typename T>
T quickSort<T>::partition(T *arr, int low, int high)
{
    T pivot = arr[high];
    int i = (low -1);

    for (int j = low; j<= high -1; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            this->swap(&arr[i], &arr[j]);
        }
    }
    this->swap(&arr[i+1], &arr[high]);
    return (i+1);
}

template <typename T>
void quickSort<T>::sort (T *arr, int left, int right)
{
    if (left < right)
    {
        int pi = partition(arr, left, right);
        this->sort(arr, left, pi -1);
        this->sort(arr, pi+1, right);
    }
}

template <typename T>
void Sort<T>::insertionSort(T *arr, int length)
{
    int j;
    T temp;

    for (int i = 0; i < length; i++)
    {
        j = i;
        while (j >0 && arr[j] < arr[j-1])
        {
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

template <typename T>
void heapSort<T>::heapify(T *arr, int length, int index)
{
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

template <typename T>
void heapSort<T>::sort(T *arr, int empty, int length)
{
    std::cout << "test3";
    for (int i = length/2 -1; i>= 0; i--)
        heapify(arr, length, i);

    for (int i=length-1; i>=0; i--)
    {
        this->swap(&arr[0], &arr[i]);
        heapify(arr,i,0);
    }
}
