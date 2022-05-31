#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter the number of elements in first array : ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter %d element :",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the number of element in second array : ");
	scanf("%d",&m);
	int b[m];
	for(int i=0;i<m;i++)
	{
		printf("Enter %d element :",i+1);
		scanf("%d",&b[i]);
	}
	int c[n+m];
	for(int i=0;i<n+m;i++)
	{
		if(i<n)
		{
			c[i]=a[i];
		}
		if(i>=n)
		{
			c[i]=b[i-n];
		}
	}
	printf("\nOutput\n");
	for(int i=0;i<n+m;i++)
	{
		printf("%d ",c[i]);
	}
	printf("\n");
	return 0;
}
