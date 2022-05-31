#include<stdio.h>
int main()
{
	int n,i;
	
	printf("Enter the number of elements :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter %d element :",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nOutput :\n");
	
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n");
	
	return 0;
}
