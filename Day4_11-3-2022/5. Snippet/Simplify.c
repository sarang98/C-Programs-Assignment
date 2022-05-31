#include<stdio.h>
int main(void)
{
	int a = 12, b = 18, c = 7, d = 4, result;
	
	result = a + a * -b / c % d + c * d;
	
	printf("Result is %d \n",result);
	
	return 0;
}
