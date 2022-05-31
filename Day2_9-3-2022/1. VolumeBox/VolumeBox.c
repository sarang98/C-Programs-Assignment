#include<stdio.h>
int main( void )
{
	float height, length, width;
	printf("\n Enter the height of box : ");
	scanf("%f",&height);
	printf("\n Enter the length of box : ");
	scanf("%f",&length);
	printf("\n Enter the width of box : ");
	scanf("%f",&width);
	printf("\n Volume of Box : %.2f\n\n",height*length*width);
	return (0);
}
