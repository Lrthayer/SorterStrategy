#include "sort.h"

template <typename T>
Sort<T>::Sort()
{
}

template <typename T>
void Sort<T>::swap(T* a, T* b)
{
    T tmp = *a;
    *a = *b;
    *b = tmp;
}



