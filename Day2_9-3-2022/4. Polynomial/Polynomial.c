#include<stdio.h>

int main( void)
{
	int x = 0, coeff= 1;
	int result = 1, p=0;
	printf("\n Enter the value of root (x) : ");
	scanf("%d",&x);
	p=x;
	while(coeff < 6){
		coeff++;
		if(coeff!=4)
		{
			result += coeff* p;
		}
		if(coeff==4)
		{
			result -= coeff* p;
		}
		p *= x;
	}
	printf("\n Output : %d\n\n\n",result);
	return (0);
}
