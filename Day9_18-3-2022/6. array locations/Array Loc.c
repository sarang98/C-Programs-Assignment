#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the elements in the array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int value;
    printf("Enter the value to check : ");
    scanf("%d",&value);
    for(int i=0;i<n;i++)
    {
        if(a[i]==value)
        {
            printf("%d is present at location %d\n",a[i],i+1);
            count++;
        }
    }
    if(count==0)
    {
        printf("%d is not present in the array",value);
    }
    else
    {
        printf("%d is present %d times in the array",value, count);
    }
    
    return 0;
}
