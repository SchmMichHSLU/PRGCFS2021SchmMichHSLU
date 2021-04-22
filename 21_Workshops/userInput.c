#include <stdio.h>
#include <stdbool.h>

void ClearInput(void);

int number = 0;
char direction = 0;
char left = 'l';
char right = 'r';
int shifting = 0;


int main( void ) {

	while (true){
		
		
		printf("Enter even number: ");
		
		if(scanf("%d", &number)) {
			printf("Enter a direction for shifting [l = left | r = right]: ");
			ClearInput();
			
			if(scanf("%c", &direction) && (direction == left || direction == right)){ 
				printf("Enter the shifting positions: ");
				ClearInput();
			
				if(scanf("%d", &shifting)){
					if(direction == left){
						printf("%d bitweise nach links geschoben ergibt %d\n", number, number << shifting);
					}else{
						printf("%d bitweise nach rechts geschoben ergibt %d\n", number, number >> shifting);
					}
					
				}else{
					printf("Input was not a number!\n");
				}
			}else{
				printf("Input was not on of the two directions!\n");
			}
			
		}else{
			printf("Input was not a number!\n");
		}
		
		ClearInput();
		
		
	}
	return 0;
}

void ClearInput(void){
	while(getchar() != '\n');
}
