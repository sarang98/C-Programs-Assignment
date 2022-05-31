#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        a[i]=a[i]+a[j];
        a[j]=a[i]-a[j]; 
        a[i]=a[i]-a[j]; 
    }
    a[n]=a[n-1];
    printf("\n Output : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
