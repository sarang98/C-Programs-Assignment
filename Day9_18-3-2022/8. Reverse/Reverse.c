#include<stdio.h>
int main()
{
    int n;
    printf("Enter the elements in the array : ");
    scanf("%d",&n);
    int arr[n],i,brr[n],j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i--,j=0;i>=0;i--,j++)
    {
        brr[j]=arr[i];
    }
    printf("\nData from second array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",brr[i]);
    }
    printf("\n");
    return 0;
}
