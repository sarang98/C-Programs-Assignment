#include<stdio.h>
int sum(int n)
{
	int i;
	if(n==0)
		return 0;
	else
		{
			scanf("%d",&i);
			n--;
			return (i + sum(n));
		}
}
int main()
{
	int n;

	printf("Enter the numbers to be add : ");
	scanf("%d",&n);
	printf("Enter %d values :",n);
	printf("%d",sum(n));
	
	
	return 0;
}
