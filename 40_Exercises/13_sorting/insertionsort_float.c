#include <math.h> 
#include <stdio.h>
#include "insertionsort_float.h"



// Insertion Sort Function
void insertionSort(float array[], int n, int multiplier) 
{ 
	int i, element, j; 
	for (i = 1; i < n; i++) 
	{ 
		element = array[i];
		j = i - 1; 
		// compare "element" to its neighbor to the left
		while (j >= 0 && (array[j] * multiplier > element * multiplier))  // compare elemet
		{ 
			array[j + 1] = array[j]; 
			j = j - 1; 
		}
 		array[j + 1] = element; 
	}	 
}
  
