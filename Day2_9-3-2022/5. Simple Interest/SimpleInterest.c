#include<stdio.h>
int main( void )
{
	float principle=0, rate=0, time=0;
	
	printf("\nEnter the principle amount : ");
	scanf("%f",&principle);
	printf("\nEnter the rate of interest : ");
	scanf("%f",&rate);
	printf("\nEnter the time : ");
	scanf("%f",&time);
	
	printf("\n Simple Interest : %.2f",principle*rate*time);
	
	return (0);
}
