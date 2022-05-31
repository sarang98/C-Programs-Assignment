#include <stdio.h>
int main()
{
    int a,i,last,s;
    int count=0;
    printf("Enter the number : ");
    scanf("%d",&a);
    s=a;
    while(a>0)
    {
        a=a/10;
        if(a!=0)
        {
            i=a;
        }
        count++;
        if(count==1){
            last = s % 10;
        }
    }
    
    printf("Sum : %d\n",i+last); 
    return 0;
}

