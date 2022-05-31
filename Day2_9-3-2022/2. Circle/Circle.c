#include<stdio.h>

int main( void )
{
	float radius=0, pi=3.14;

	printf("\n Enter the radius of the circle : ");
	scanf("%f",&radius);

	printf("\n For radius : %.2f",radius);
	printf("\n Circumference is %.2f",2*pi*radius);
	printf("\n Area is %.2f\n\n", pi*radius*radius);

	return (0);
}
