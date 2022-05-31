#include<stdio.h>
#include<math.h>
int isPrime(int n) 
{
	if(n < 2) 
		return 0;
	if(n == 2 || n == 3) 
		return 1;
	if(n%2 == 0 || n%3 == 0) 
		return 0;
	int sqrtN = (int)(sqrt(n))+1;
	
	for(int i = 6; i <= sqrtN; i += 6) 
	{
		if(n%(i-1) == 0 || n%(i+1) == 0) 
			return 0;
	}
	return 1;
}
int main() {
	int n, i, flag;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	flag = isPrime(n);
	if(flag == 1)
		printf("%d is a prime number.\n",n);
	else
		printf("%d is not a prime number.\n",n);
	return 0;
}

