#include <iostream>
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
    sort2.heap(arr4,arr_size);
    sort3.insertion(arr5,arr_size);
    sort4.merge(arr2,0,arr_size);
    sort5.quick(arr3,0,arr_size);
    sort6.setSort(arr6,arr_size);
    for (int i=0; i < arr_size; i++)
        std::cout << arr3[i] << " ";
    std::cout << "merge\n" << sort4.getIteration();
    std::cout << "quick\n" << sort5.getIteration();
    std::cout << "heap\n" << sort2.getIteration();
    std::cout << "insertion\n" << sort3.getIteration();
    std::cout << "sorter choice\n " << sort6.getIteration();
    return 0;
}

