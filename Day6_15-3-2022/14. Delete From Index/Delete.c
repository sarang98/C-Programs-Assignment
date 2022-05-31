#include<stdio.h>
int main()
{
	int n,index,i;
	printf("Enter the number :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter %d element :",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the index number :");
	scanf("%d",&index);
	a[index-1]=0;
	for(i=index-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
	printf("%d ",a[i]);
	return 0;
}
