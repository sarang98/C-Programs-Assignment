#include<stdio.h>
int Binary(int a)
{
	return ( (a == 0) ? 0 : ( a % 2 + 10 * Binary(a/2) ) );
}
int main()
{
	int a;
	printf("Enter the decimal integer : ");
	scanf("%d",&a);
	printf("%d\n",Binary(a));
	return 0;
}
