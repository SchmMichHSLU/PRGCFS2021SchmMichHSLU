#include <stdio.h>
#include <unistd.h>

// State Machine
typedef enum {
	HEATING = 1,
	SHOWMENU,
	MILLING,
	COFFEEMAKING,
	CLEANING,
	SHUTDOWN,
	ERROR
} CoffeeMakerStatus;


CoffeeMakerStatus status = HEATING;

void ShowMenu(void);	
int HeatingDone(void);


int main(void) {

	// endless loop
	int run = 1;
	while(run == 1) 
	{
		
		switch(status)
		{
			case HEATING:
				if( HeatingDone() )
				{
					status = SHOWMENU;
				}
				break;
				
			case SHOWMENU:
				ShowMenu();
				break;
			
			case MILLING:
				printf("milling ... Done.\n");
				status = COFFEEMAKING;
				break;
			
			case COFFEEMAKING:
				printf("mmmmh ... smells good! Done.\n");
				status = CLEANING;
				break;
				
			case CLEANING:
				printf("cleaning ... Done.\n");
				status = SHOWMENU;
				break;
		
		
			// add all cases
		
			case SHUTDOWN:
				printf("Shutting down.\n");
				run = 0;
				break;


			default:
				printf("Coffee Maker in Error State.\n");
				status = SHUTDOWN;
				break;
		}
	}

	return 0;
}


void ShowMenu(void){
	int menuSelected = 0;
	printf("Select from the following Options:\n");
	printf("1: Re-heat\n");
	printf("2: Make Coffee\n");
	printf("9: shutdown\n");
	scanf("%d", &menuSelected);
	if (menuSelected == 1){
		status = HEATING;
	} else if ( menuSelected == 9 ){
		status = SHUTDOWN;
	} else if ( menuSelected == 2 ){
		status = MILLING;
	} else {
		printf("Invalid selection.\n");
		status = SHOWMENU;
	}
	sleep(1);
}

static int heatingCounter = 0;
int heatingLimit = 6;

int HeatingDone(void){
	int done = 0;
	//sleep(1); // sleep for 1s;
	usleep(500000);
	printf("#");
	fflush(stdout);
	heatingCounter++;
	if(heatingCounter >= heatingLimit)
	{
		// reset the counter !
		heatingCounter = 0;
		done = 1;
		printf(" Heating Completed.\n");
	}
	return done;
}
	



