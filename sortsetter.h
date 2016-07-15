#ifndef SORTSETTER_H
#define SORTSETTER_H

#include "insertionsort.h"
#include "quicksort.h"
#include "heapsort.h"
#include "mergesort.h"
#include "bucketsort.h"


template <typename T>
class sortSetter
{
public:
    void setSort(T *arr, int l, int r);
    void setSort(std::vector<T> *arr, int l, int r);
    void setSortDecend(T *arr, int l, int r);
    void setSortDecend(std::vector<T> *arr, int l, int r);

    void setSort(T *arr, int length);
    void setSort(std::vector<T> *arr, int length);
    void setSortDecend(T *arr, int length);
    void setSortDecend(std::vector<T> *arr, int length);

    void merge(T *arr, int left, int right);
    void merge(T *arr, int length);
    void merge(std::vector<T> *arr, int l, int r);
    void merge(std::vector<T> *arr, int length);
    void mergeDecend(T *arr, int left, int right);
    void mergeDecend(T *arr, int length);
    void mergeDecend(std::vector<T> *arr, int left, int right);
    void mergeDecend(std::vector<T> *arr, int length);


    void heap(T *arr, int length);
    void heap(std::vector<T> *arr, int length);
    void heapDecend(T *arr, int length);
    void heapDecend(std::vector<T> *arr, int length);

    void quick(T *arr, int l, int r);
    void quick(T *arr, int length);
    void quick(std::vector<T> *arr, int l, int r);
    void quick(std::vector<T> *arr, int length);
    void quickDecend(T *arr, int l, int r);
    void quickDecend(T *arr, int length);
    void quickDecend(std::vector<T> *arr, int l, int r);
    void quickDecend(std::vector<T> *arr, int length);

    void insertion(T *arr, int length);
    void insertion(std::vector<T> *arr, int length);
    void insertionDecend(T *arr, int length);
    void insertionDecend(std::vector<T> *arr, int length);

    void bucket(T *arr, int length);
    void bucket(std::vector<T> *arr, int length);
    void bucketDecend(T *arr, int length);
    void bucketDecend(std::vector<T> *arr, int length);

    int getIteration();
    void setIteration(int it);

    std::string whichOne(T *arr, int left, int right);
    std::string whichOne(T *arr, int length);
    std::string whichOne(std::vector<T> *arr, int left, int right);
    std::string whichOne(std::vector<T> *arr, int length);


protected:
    typedef T type;

private:
    int iteration;


};
#include "sortsetter.cpp"

#endif // SORTSETTER_H
