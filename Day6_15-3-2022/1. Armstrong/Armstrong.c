#include<stdio.h>
int main()
{
	int a,count=0,z=0,p=1,sum=0,co=0,i=0;
	
	printf("Enter the number :");
	scanf("%d",&a);
	
	i=a;
	
	while(a>0)
	{
		a/=10;
		count++;
	}
	
	a=i;
	
	while(a>0)
	{
		co = count;
		z=a%10;
		p=1;
		while(co)
		{
			p*=z;
			co--;
		}
		sum+=p;
		a/=10;
	}
	
	if(sum == i)
		printf("%d is Armstrong number\n",i);
	else
		printf("%d is not Armstrong number\n",i);
	
	return 0;
}
