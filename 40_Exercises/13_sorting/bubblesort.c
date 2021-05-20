#include <stdio.h> 

// Function to swap elements 
void swap(float *a, float *b) 
{ 
	float temp = *a; 
	*a = *b; 
	*b = temp; 
}  

// bubble sort function
void bubbleSort(float array[], int n,int multiplier) 
{ 
	int i, j; 
	for (i = 0; i < n-1; i++){     //n-1 durchgänge   
		for (j = 0; j < n-i-1; j++){ //reduktion der Anzahl Elemente
			if ((array[j] * multiplier) > (array[j+1] * multiplier)) 
			{
				swap(&array[j], &array[j+1]);
			}
		}
	}
}   
