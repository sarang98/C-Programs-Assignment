#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the dimensions of the matrix : ");
	scanf("%d%d",&a,&b);
	int c[a][b],d[a][b],i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("Enter the element for matrix c : ");
			scanf("%d",&c[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("Enter the element for matrix d : ");
			scanf("%d",&d[i][j]);
		}
	}

	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			c[i][j]-=d[i][j];
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
