#include <stdio.h>

int main (int argc, char *argv[])
{
	// falls NICHT 3 argumente enthalten, dann --> Block 7 bis 10
	if( argc != 3 ){
		// input not valid
		printf("Usage:\n");
		printf("logicOperators Input1 Input 2\n");
	}
	else{ 
		//input is valid --> genau 3 argumente enthalten
		printf("Number of input arguments: %d\n", argc);
		
		// die drei Elemente in der For-Loop Deklarieren
		// nimm eine int-variable i und starte mit 0.
		// führe folgenden Code aus, solange i < argc
		// inkrementiere i bei jedem Durchlauf um 1 (++)

		for( int i = 0; i < argc; i++)
		{
			printf("Arguent %d was %s\n", i, argv [i]);
			// argv:	- ./logicOperators
			//		- 23
			//		- 99
		}
	}
	return 0;
}

