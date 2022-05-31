#include<stdio.h>
int main()
{
	int gcd=0,i;
	int a,b,temp;
	
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);

	if(b>a)
	{
		temp=a;
		a=b;
		b=temp;
	}
	
	for(i=1;i<a;i++)
	{
		if(a%i==0 && b%i==0)
			gcd=i;
	}
	
	printf("GCD of the numbers %d and %d is %d\n",a,b,gcd);
	
	return 0;
}
