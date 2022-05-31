#include<stdio.h>
int main( void )
{
	int a,b;
	
	printf("Enter two numbers to add : ");
	scanf("%d%d",&a,&b);
	
	a+=b;
	
	printf("Addition is %d ",a);

	return 0;
}
