#include<stdio.h>
int main(void)
{
	int a,b,c;
	
	printf("Enter 3 numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a <= b && a <= c)
	{
		printf("Smallest number is %d",a); 
		return 0;
	}
	if(b <= a && b <= c)
	{
		printf("Smallest number is %d",b);
		return 0;
	}
	if(c <= a && c <= b)
	{
		printf("Smallest number is %d",c);
		return 0;
	}
			
}
