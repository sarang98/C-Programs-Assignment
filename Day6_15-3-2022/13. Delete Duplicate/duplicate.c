#include<stdio.h>
int main()
{
	int n,count=0;
	
	printf("Enter the number of elements :");
	scanf("%d",&n);
	int a[n],k;
	for(int i=0;i<n;i++)
	{
		printf("Enter the value of %d elements :",i+1);
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n-count;j++)
		{
			if(a[i]==a[j])
			{	
				count++;
				a[j]=0;
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				j--;
			}
		}
	}
	printf("Output : \n");
	for(int i=0;i<n-count;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
