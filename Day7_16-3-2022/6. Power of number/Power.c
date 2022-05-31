#include<stdio.h>
int power(int n, int p) {
    if (p != 0)
        return (n * power(n, p - 1));
    else
        return 1;
}
int main()
{
	int base, pow;
	printf("Enter the base : ");
	scanf("%d",&base);
	printf("Enter the power : ");
	scanf("%d",&pow);
	
	printf("%d^%d is %d\n",base,pow,power(base,pow));
	
	return 0;	
}
