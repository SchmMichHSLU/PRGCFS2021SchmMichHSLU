/* system include */
#include <stdio.h>


/* project include */
#include "greetings.h"


struct Prof{
	char name[12];
	int salary;
};

/* globale variable */
int greetingsCounter = 0;

/* local variable */
int localCounter = 24;

/* private function */
void IncrementGreetingsCounter() {
	greetingsCounter++;
}

/* implementations */
void SayHello(void) {
	printf("Hello!\n");
	IncrementGreetingsCounter();
}



void SayGoodBye(void) {
	printf("Goodbye!!\n");
	IncrementGreetingsCounter();
}
