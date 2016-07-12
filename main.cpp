#include <iostream>
#include <ctime>
#include "sortsetter.h"

using namespace std;

int main()
{
    int arr[] = {50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    int arr2[] = {50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    int arr3[] = {50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    int arr4[] = {50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    int arr5[] = {50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    int arr6[] = {50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};

    int arr_size = sizeof(arr2)/sizeof(arr2[0]);
    //int arr_size5 = sizeof(arr5)/sizeof(arr5[0]);
    sortSetter<int> sort2;
    sortSetter<int> sort3;
    sortSetter<int> sort4;
    sortSetter<int> sort5;
    sortSetter<int> sort6;
    //sortSetter<int> sort7;
    insertionSort<int> sort7(arr, arr_size);

    sort2.heapDecend(arr4,arr_size);

    sort3.insertion(arr5,arr_size);

    sort4.mergeDecend(arr2,0,arr_size);

    sort5.quickDecend(arr3,0,2);

    sort6.bucketDecend(arr6,arr_size);

    sort7.decendSort();

    for (int i=0; i < arr_size; i++)
        std::cout << arr3[i] << " ";
    std::cout << "\nmerge" << sort4.getIteration() << "\n";
    std::cout << "quick" << sort5.getIteration() << "\n";
    std::cout << "heap" << sort2.getIteration() << "\n";
    std::cout << "insertion" << sort3.getIteration() << "\n";
    std::cout << "bucket" << sort6.getIteration() << "\n";
    std::cout << "sorter's choice " << sort7.getIteration() << "\n";
    std::cout << sort6.whichOne(arr, 0, arr_size);

    return 0;
}

