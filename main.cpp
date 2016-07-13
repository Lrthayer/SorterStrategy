#include <iostream>
#include <ctime>
#include "sortsetter.h"

int main()
{
    int arr[] = {50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    int arr2[] = {50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    int arr3[] = {50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    std::array<int, 51> *arr4 = new std::array<int,51>();
    std::vector<int> *vect = new std::vector<int>(51);
    std::vector<int> vect2 = {50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    int arr6[] = {50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    int j = 0;
    for (int i = 51; i > 0; i--)
    {
	arr4->at(j) = i;
	j++;
    }
    int arr_size = sizeof(arr2)/sizeof(arr2[0]);
    //int arr_size5 = sizeof(arr5)/sizeof(arr5[0]
    std::cout << "test8";
    sortSetter<int,51> sort2;
    std::cout << "test7";
    sort2.heap(arr4,51);
    /*
    sortSetter<int> sort3;
    sortSetter<int> sort4;
    sortSetter<int> sort5;
    sortSetter<int> sort6;
    //sortSetter<int> sort7;
    insertionSort<int> sort7(arr, arr_size);

    sort3.insertion(arr5,arr_size);

    sort4.mergeDecend(arr2,0,arr_size);

    sort5.quickDecend(arr3,0,2);

    sort6.bucketDecend(arr6,arr_size);

    sort7.decendSort();
*/
    for (int i=0; i < arr_size; i++)
        std::cout << arr4->at(i) << " ";

    return 0;
}

