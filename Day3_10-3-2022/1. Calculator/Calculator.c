#include<stdio.h>

int main( void )
{
	float a,b;
	char c;
	int d,e;
	
	printf("\nEnter one of the following operator as input : ");
	printf("\n+, *, -, /, %%");
	printf("\nInput : ");
	scanf("%c",&c);
	
	if(c!='%')
	{
		printf("\nEnter two numbers : ");
		scanf("%f%f",&a,&b);
	}
	else if(c=='%')
	{
		printf("\nEnter two numbers : ");
		scanf("%d%d",&d,&e);
	}
	switch(c){
	
		case '+' : printf("\nAddition is %.f",a+b);
			break;
		case '*' : printf("\nMultiplication is %.2f",a*b);
			break;
		case '-' : printf("\nSubtraction is %.f",a-b);
			break;
		case '/' : printf("\nDivision is %.2f",a/b);
			break;
		case '%' : printf("\nModolus is %d",d%e);
			break;
		default : printf("Invalid operator");
			break;
	}
	
	return (0);
}
