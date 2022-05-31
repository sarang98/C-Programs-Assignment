#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("Enter the number : ");
	scanf("%d",&a);
	if(ceil(log2(a))==floor(log2(a)))
	{
		printf("%d is a number that can be expressed as the power of 2\n",a);
	}
	else
	{
		printf("%d cannot be expressed as power of 2\n",a);
	}
	return 0;
}
