#include "mergesort.h"

template <typename T>
void mergeSort<T>::sort(T *arr, int l, int r)
{
    if (l < r)
    {
        int m = (l + r)/2;
        std::cout << "\n" << m << "\n" << l << "\n";
        this->sort(arr, l, m);
                std::cout << "test1";
        this->sort(arr, m+1, r);
        std::cout << "test2";
        merge(arr, l, m, r);
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
