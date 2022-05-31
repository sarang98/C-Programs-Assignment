#include<stdio.h>

int main(void)
{
	int num1, num2, num3;
	
	printf("Eneter 3 numbers : ");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1 >= num2)
	{
		if(num1 >= num3)
			printf("Largest number is %d\n",num1);
		else
			printf("Largest number is %d\n",num3);
	}
	else if(num2 >= num1)
	{
		if(num2 >= num3)
			printf("Largest number is %d\n",num2);
		else
			printf("Largest number is %d\n",num3);
	}
	
	return 0;
}
