#include<stdio.h>
int main(void)
{
	int base = 1, expo = 0;
	int power = 1;
	printf("Enter the base number : ");
	scanf("%d",&base);
	printf("Enter the exponent number : ");
	scanf("%d",&expo);
	
	if(base > 0)
	{
		if(expo >= 0)
		{
			while(expo != 0)
			{
				power *= base;
				expo--;
			}
			printf("The result is : %d\n",power);
			
		}
		else
		{
			printf("\nInvalid exponent\n");
		}
	}
	else
	{
		printf("\nInvalid base\n");
	}
	
	return 0;
}
