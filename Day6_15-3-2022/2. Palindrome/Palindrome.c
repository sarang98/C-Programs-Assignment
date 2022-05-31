#include <stdio.h>

int main()
{
    int n;
    int a,reverse=0;
    
    printf("Enter the number : ");
    scanf("%d",&n);
    
    a=n;
    
    while(n>=1)
    {
        reverse = (reverse * 10) + (n % 10);
        n = n / 10;
    }
    
    (a==reverse) ? printf("%d is Palindrome\n",a) : printf("%d is not a palindrome\n",a);
 
    return 0;   
}
