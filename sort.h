#ifndef SORT_H
#define SORT_H

#include <iostream>

template <typename T>
class Sort
{
public:
    Sort();
    virtual void sort() = 0;

    virtual int getIteration();

protected:
    //Type definition of the element type.
    typedef T type;
    virtual void swap(T* a, T* b);
};

#include "sort.cpp"

#endif // SORT_H
