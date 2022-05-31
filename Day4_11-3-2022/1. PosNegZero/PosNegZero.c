#include<stdio.h>
int main(void)
{
	int a;
	
	printf("Enter the number : ");
	scanf("%d",&a);
	
	if(a < 0)
		printf("\nNumber is Negative\n");
	else if(a > 0)
		printf("\nNumber is Positive\n");
	else if(a==0)
		printf("\nNumber is Zero\n");	
	
	return 0;
}
