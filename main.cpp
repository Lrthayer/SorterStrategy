#include <iostream>
#include "mergesort.h"

using namespace std;

int main()
{
    double arr[] = {1.5,.2,.03, 10, 5,20,100,55};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    Sort<double> sort2;
    quickSort<double> sort4;
    sort4.sort(arr, 0, arr_size-1);
    for (int i=0; i < arr_size; i++)
    	std::cout << arr[i] << " ";
    return 0;
}

