#include <stdio.h>

#define TASK_NUM 6

int main(int argc, char *argv[])
{
	//all used for task 4
	int sum = 0;
	int i = 1;
	int maxSum = 555;

	
	switch(TASK_NUM)
	{
	case 3: // counts down from 40 to 25 
		for( size_t i = 40; i >= 25; i--)
		{
			printf("%zd\n", i);
		}
		break;
		
	case 4: // i times 
		for( size_t i = 1; i <=729; i*=3)
		{
			printf("%zd\n", i);
		}
		break;
		
	case 5:
		for( size_t i = 0; i <100; i+=10)
		{
			for( size_t j = 1; j <=10; j++)
			{
				printf("%zd ", i+j);
			}
			
			printf("\n");
		}
		break;
		
	case 6:
		
		for(i = 1; ; i++)
		{
			if (sum >= maxSum)
			{
				break;
			}
			sum += i;
			
		}
			
		printf("With max. sum %d, the integers from 1 to %d sum %d\n", maxSum, i, sum);
		break;
		
	default: 
		printf("choose task in range 3 to 6\n");
		break;
	}

		
return 0;
}
