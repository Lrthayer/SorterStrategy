#include <iostream>
#include "mergesort.h"
#include "quicksort.h"
#include "heapsort.h"
#include "sortsetter.h"

using namespace std;

int main()
{
    double arr[] = {1.5,.2,.03, 10, 5,20,100,55, 4,7,23,18,45,76,15};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    sortSetter<double> sort4;
    sort4.setSort(arr, 0 ,arr_size,0);
    for (int i=0; i < arr_size; i++)
    	std::cout << arr[i] << " ";
    return 0;
}

