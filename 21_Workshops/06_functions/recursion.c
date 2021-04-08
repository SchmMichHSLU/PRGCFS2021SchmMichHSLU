#include <stdio.h>
#include <stdlib.h>


// function declaration
long factorial(int n);
long nchoosek(int n, int k);
void nchoosek_ref(int n, int k, long *result);
char todo;
int end = 0, n = 0, k = 0;
long result = 0;

int main (int argc, char *argv[])
{
	
	if (argc == 3)
	{
		todo = 'v';
		n = atoi(argv[1]);
		k = atoi(argv[2]);
	}else if(argc == 2)
	{
		todo = 'l';
		end = atoi(argv[1]);
	}else
	{
		printf("Wrong input! 2 values for specific binomial coefficient, 1 for declaring ending of loop");
	}
	
	switch(todo)
	{
	case('v'): 
		printf("Pass by Value:     Der Binominalkoeffizient von %d und %d ist %ld\n", n, k, nchoosek(n,k));
		nchoosek_ref(n,k,&result);
		printf("Pass by Reference: Der Binominalkoeffizient von %d und %d ist %ld\n", n, k, result);
		break;
		
	case('l'):
		for(int n = 0; n<=end; n++)
		{			
			for(int k = 0; k<=end; k++)
			{
				printf("Der Binominalkoeffizient von %d und %d ist %ld\n", n, k, nchoosek(n,k));
			}
		}
		break;
	}

	return 0;
}

//function implementation with pass by value (factorial)
long factorial(int n)
{
	result = (n>1) ? (n*factorial(n-1)) : 1;
	return result;
}

//function implementation (nchoosek)
long nchoosek(int n, int k)
{
	result = factorial(n) / (factorial(k)*(factorial(n-k)));
	return result;
}

//function implementation pass by value (nchoosek)
void nchoosek_ref(int n, int k, long *result)
{
	*result = factorial(n) / (factorial(k)*(factorial(n-k)));
}









