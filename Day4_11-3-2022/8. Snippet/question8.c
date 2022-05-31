#include<stdio.h>
int main()
{
	int x=0;

	if(x++)
		printf("true \n");
	else if(x==1)
		printf("False\n");

	return 0;
}
