#include<stdio.h>
int main()
{
	int a;
	printf("Enter the dimensions of the matrix : ");
	scanf("%d",&a);
	int c[a][a],i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			printf("Enter the element c[%d][%d] : ",i+1,j+1);
			scanf("%d",&c[i][j]);
		}
	}
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(i<j)
				c[i][j]=0;
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
