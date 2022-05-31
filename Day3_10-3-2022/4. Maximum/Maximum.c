#include<stdio.h>
int main( void )
{
	int a,b;
	int result ;
	
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	
	result = (a < b) ? b : a; 

	printf("Maximum number is %d \n",result);

	return 0;
}
