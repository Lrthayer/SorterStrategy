#include <iostream>
#include <ctime>
#include "sortsetter.h"

using namespace std;

int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1};
    int arr2[] = {9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1};
    int arr3[] = {9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1};
    int arr4[] = {9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1};
    int arr5[] = {9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1};
    int arr6[] = {9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1,9,8,7,6,5,4,3,2,1};


    int arr_size = sizeof(arr2)/sizeof(arr2[0]);
    //int arr_size5 = sizeof(arr5)/sizeof(arr5[0]);
    sortSetter<int> sort2;
    sortSetter<int> sort3;
    sortSetter<int> sort4;
    sortSetter<int> sort5;
    sortSetter<int> sort6;
    sortSetter<int> sort7;

    sort2.heap(arr4,arr_size);

    sort3.insertion(arr5,arr_size);

    sort4.merge(arr2,0,arr_size);

    sort5.quick(arr3,0,arr_size);

    sort6.bucket(arr6,arr_size);

    sort7.setSort(arr,0,arr_size);

    for (int i=0; i < arr_size; i++)
        std::cout << arr6[i] << " ";
    std::cout << "\nmerge" << sort4.getIteration() << "\n";
    std::cout << "quick" << sort5.getIteration() << "\n";
    std::cout << "heap" << sort2.getIteration() << "\n";
    std::cout << "insertion" << sort3.getIteration() << "\n";
    std::cout << "bucket" << sort6.getIteration() << "\n";
    std::cout << "sorter's choice " << sort7.getIteration() << "\n";
    std::cout << sort6.whichOne(arr, 0, arr_size);
    return 0;
}

