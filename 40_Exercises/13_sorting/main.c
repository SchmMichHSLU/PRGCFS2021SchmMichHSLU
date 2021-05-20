#include <stdio.h>
#include "printarray.h"
#include "insertionsort_float.h"
#include "bubblesort.h"

int main() 
{ 
	int ascending = 0;
	int multiplier = 0;
	printf("Enter 1 for ascending:");
	scanf("%d",&ascending);
	
	multiplier = (ascending ==1)?(1):(-1);
	float array[] = { 122, 17, 93, 3, 56, -5, -378, 65, 37, 37 }; 
	int n = sizeof(array) / sizeof(array[0]); 
	//insertionSort(array, n, multiplier);
	bubbleSort(array, n, multiplier); 
	printArray(array, n); 
	return 0; 
}
