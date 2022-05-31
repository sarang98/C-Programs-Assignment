#include<stdio.h>
int main()
{
	int n,i,sum=0;

	printf("Enter the number :");
	scanf("%d",&n);
	
	for(i = 1 ; i <= n/2 ; i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum == n)
	{
		printf("%d is perfect number \n",n);
	}
	else
	{
		printf("%d is not perfect number \n",n);
	}
	
	return 0;
}
