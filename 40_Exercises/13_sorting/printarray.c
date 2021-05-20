#include <stdio.h> 

// Function to print the elements of an array
void printArray(float array[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
	{
		printf("%.2f ", array[i]); 
	}
	printf("\n"); 
}  
