#include<stdio.h>
int main()
{
	int n,i=0,largest;
	
	printf("Enter the number of elements :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter %d element : ",i+1);
		scanf("%d",&a[i]);
	}
	
	largest = a[0];
	
	for(i=0;i<n;i++)
	{
		if(largest < a[i])
		{
			largest = a[i];
		}
	}
	
	printf("Largest element = %d",largest);
	
	printf("\n");
	return 0;
}
