#include <math.h> 
#include <stdio.h>
   
// Insertion Sort Function
void insertionSort(int array[], int n, int multiplier) 
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
   
// Function to print the elements of an array
void printArray(int array[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
	{
		printf("%d ", array[i]); 
	}
	printf("\n"); 
}  

// Main Function 
int main() 
{ 
	int ascending = 0;
	int multiplier = 0;
	printf("Enter 1 for ascending:");
	scanf("%d",&ascending);
	
	multiplier = (ascending ==1)?(1):(-1);
	int array[] = { 122, 17, 93, 3, 56, -5, -378, 65, 37, 37 }; 
	int n = sizeof(array) / sizeof(array[0]); 
	insertionSort(array, n, multiplier); 
	printArray(array, n); 
	return 0; 
}
