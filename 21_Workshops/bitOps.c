/* system include */
#include <stdio.h>


/* project include */
#include "bitOps.h"


/* globale variable */
int userInput = 0;

/* local variable */


/* private function */


/* implementations */
void ReadUserInput(void) {
	printf("Enter even number: ")
	scanf("%d", &userInput)
}



void SayGoodBye(void) {
	printf("Goodbye!!\n");
	IncrementGreetingsCounter();
}
