#include <stdio.h>

#define TASK_NUM 3

int main(int argc, char *argv[])
{
	
	switch(TASK_NUM)
	{
	case 1:
		for( size_t i = 1; i <= 500; i++)
		{
		
			if(i%19 == 0)
			{
			printf("%zd\n", i);
			}
		}
		break;
		
	case 2:
		for( size_t i = 1; i <= 200; i++)
		{
		
			if((i%7 == 0) && (i%11 == 0))
			{
				printf("7 and 11: %zd\n", i);
			}
			else if(i%17 == 0)
			{
				printf("17: %zd\n", i);
			}
		}
		break;
		
	case 3:
		for( size_t i = 1; i <= 200; i++)
		{
		
			if(i%11 == 0)
			{
				if(i%7 == 0)
				{
					printf("11 and 7: %zd\n", i);
				}
				else
				{
					printf("11 but not 7: %zd\n", i);
				}
			}
		}
		break;
		
	default: 
		printf("choose task in range 1 to 3\n");
		break;
	}

		
return 0;
}
