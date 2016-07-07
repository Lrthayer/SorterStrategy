#include <iostream>
#include "sortsetter.h"

using namespace std;

int main()
{
    std::string arr[] = {"test", "basz", "auess", "aaess", "bast", "gass", "zass", "a" , "b" , "c", "d", "e", "f"};
    int arr2[] = {10,9,8,7,6,1,2,20,30,90,50,45,67,89,32,12,31,2,2,2,2,2};
    int arr_size = sizeof(arr2)/sizeof(arr2[0]);
    sortSetter<int> sort4;
    sort4.setSort(arr2, arr_size);
    for (int i=0; i < arr_size; i++)
        std::cout << arr2[i] << " ";
    return 0;
}

