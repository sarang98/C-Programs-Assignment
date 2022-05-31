#include<stdio.h>
int main()
{
	int n;
	int i=2;
	int flag = 0;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag = 1;
			break;
		}
	}
	
	if(flag==1)
		printf("%d is not prime number \n",n);
	else
		printf("%d is prime number \n",n);
	
	return 0;
}
