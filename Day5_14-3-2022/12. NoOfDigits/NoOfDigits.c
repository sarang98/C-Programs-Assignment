#include<stdio.h>
int main()
{
	int a,count=0,temp;
	printf("Enter the input :");
	scanf("%d",&a);
	temp=a;
	while(a>0)
	{
		a/=10;
		count++;
	}
	printf("The number %d contains %d digits\n",temp,count);
	return 0;
}
