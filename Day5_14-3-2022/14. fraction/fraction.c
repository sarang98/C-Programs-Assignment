#include<stdio.h>
int main()
{
	int n;
	float sum=1;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	while(n>1)
	{
		sum+=1.0/n;
		n--;
	}
	
	printf("%.2f\n",sum);
	
	
	return 0;
}
