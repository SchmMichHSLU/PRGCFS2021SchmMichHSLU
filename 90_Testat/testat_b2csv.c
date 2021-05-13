#include <stdio.h>
#include <stdlib.h>

#define records 1938

typedef struct inputData
{
	long long timeStamp;
	int pressure;
	char systemState;
	char alarmState;
}inputData_t;


int main ()
{
	inputData_t reactor_data;
	char readFileName[]="pressureSpike.bin";
	char writeFileName[]="pressureSpike.csv";
	FILE *fptr;
	FILE *csv;
	
	if((fptr = fopen(readFileName,"rb")) == NULL){
		printf("Error! opening file");

       	// Program exits if the file pointer returns NULL
       	exit(1);	
	
	}
	csv = fopen(writeFileName,"w");

	while(!feof(fptr))
	{
		fread(&reactor_data.timeStamp, sizeof(long long), 1, fptr);
		fread(&reactor_data.pressure, sizeof(int), 1, fptr);
		fread(&reactor_data.systemState, sizeof(char), 1, fptr);
		fread(&reactor_data.alarmState, sizeof(char), 1, fptr);
		
		//printf("n1: %lld\tn2: %d\tn3: %d\tn4: %d\n", reactor_data.timeStamp, reactor_data.pressure, reactor_data.systemState,reactor_data.alarmState);
		
		fprintf(csv,"%lld;%d;%d;%d\n", reactor_data.timeStamp, reactor_data.pressure, reactor_data.systemState,reactor_data.alarmState);
	}
	fclose(fptr);
	fclose(csv);




	return 0;
}
