#include<stdio.h>
int main(void)
{
	int factorial = 1, input = 0,i=1;
	
	printf("Enter the number :");
	scanf("%d",&input);
	
	if(input > 0)
	{
		while(i<=input)
		{
			factorial *= i; 
			i++;
		}	
	}	
	
	printf("Factorial of %d is : %d\n",input,factorial);
	
	return 0;
}
