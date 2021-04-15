#include <stdio.h>

#define FIRSTNAME_LENGTH 20
#define LASTNAME_LENGTH 30
#define GRADE_LENGTH 6
#define NUM_STUDENTS 5


typedef struct Student {
	char firstname[FIRSTNAME_LENGTH];
	char lastname[LASTNAME_LENGTH];
	float grades[GRADE_LENGTH];
	float average;	
}Student_t;


int main()
{
	float classaverage = 0.0;
	float average_sum = 0.0;

	Student_t students[NUM_STUDENTS] = {
	[0].firstname = "Tony", 	[0].lastname = "Stark", 	[0].grades = {6.0, 5.8, 5.9, 6.0, 5.9, 6.0},
	[1].firstname = "Peter", 	[1].lastname = "Parker", 	[1].grades = {4.5, 4.8, 5.8, 3.2, 5.9, 5.2},
	[2].firstname = "Bruce", 	[2].lastname = "Banner", 	[2].grades = {5.5, 2.8, 5.3, 4.8, 5.4, 4.5},
	[3].firstname = "Steve", 	[3].lastname = "Rodgers", 	[3].grades = {4.9, 3.9, 5.8, 2.3, 4.3, 5.4},
	[4].firstname = "Natasha", 	[4].lastname = "Romanoff", 	[4].grades = {5.3, 5.2, 5.1, 5.7, 4.9, 5.9} };


	for( size_t i = 0; i < NUM_STUDENTS; i++)
	{
		float sum = 0;
		
		for ( size_t j = 0; j < GRADE_LENGTH; j++)
		{
			sum += students[i].grades[j];
			//printf("%ld: %f\n",j, sum);
		}
		
		students[i].average = sum / GRADE_LENGTH;
		printf("%s %s has an average of: %.2f\n",students[i].firstname, students[i].lastname, students[i].average);
		
		average_sum += students[i].average;
	}
	
	classaverage = average_sum / NUM_STUDENTS;
	
	printf("The classaverage is: %.2f\n",classaverage);
	
	return 0;
	
}

