#include <stdio.h>

int main(int argc, char *argv[])
{
	int start = 0, end = 100, sum = 0;
	
	for( int i = start; i <=end; i+=2)
	{
		sum += i;
	
	}

	printf("The sum from %d to %d is equal to %d\n", start, end, sum);

	return 0;
}
