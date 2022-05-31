#include<stdio.h>
int fun()
{
	int a=20;
	printf("Value of 'a' from fun function : %d\n",a);
	return 0;
}
int main()
{
	int a=30;
	printf("Value of 'a' from fun function : %d\n",a);
	fun();
	return 0;
}
