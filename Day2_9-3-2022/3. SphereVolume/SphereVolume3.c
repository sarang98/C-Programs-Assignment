#include<stdio.h>
int main( void )
{
	float radius = 0, pi = 22.0f/7.0f;
	
	printf("Enter the radius of sphere : ");
	scanf("%f",&radius);
	
	printf("Area of Sphere : %.2f\n\n",(4.0f/3.0)*pi*radius*radius*radius);
		
	return (0);
}
