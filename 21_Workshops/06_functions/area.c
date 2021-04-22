#include <stdio.h>

// function declaration!
// float* area means we are passing the address of the variable area
void ComputeCircleAreaByReference(float radius, float *area);

float ComputeCircleAreaByValue(float radius);

void UpdateStudent( struct Student *pStud );

int main()
{
	float myRadius = 4.545;
	float area = 0.0f;
	// pass the address of the area using '&'
	ComputeCircleAreaByReference(myRadius, &area);
	printf("Given radius %.3f, the area equals %.3f\n", myRadius, area);
	
	area = ComputeCircleAreaByValue(myRadius); // pass by value
	printf("Given radius %.3f, the area equals %.3f\n", myRadius, area);
	return 0;
}

// function implementation
void ComputeCircleAreaByReference(float radius, float *area){
	
	// *area means we are moifying the value at the address 'area'
	*area = radius*radius*3.1415926535;
}



float ComputeCircleAreaByValue(float radius) {
	float pi = 3.1415927;
	float area = radius*radius*pi;
	return area;
}

