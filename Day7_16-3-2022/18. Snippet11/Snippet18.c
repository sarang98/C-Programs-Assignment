#include<stdio.h>
int factorial(int);
int main()
{
	int n=10;
	long int f;
	f=factorial(n);
	printf("%d! = %ld\n",n,f);
	return 0;
}
int factorial(int n)
{
	if(n==0)
		return 1;
	else
		return(n*factorial(n-1));
}
