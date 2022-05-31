//factorial using recursion
#include<stdio.h>
long int factorial(long int a)
{
    long int fact = 1;
    while(a>0)
    {
        fact*=a;
        a--;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("%ld\n",factorial(n));
    return 0;
}
