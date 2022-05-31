#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("Enter the dimensions of matrix :");
	scanf("%d%d",&a,&b);
	int c[a][b],i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("Enter element c[%d][%d] : ",i+1,j+1);
			scanf("%d",&c[i][j]);
		}
	}
	
	for(i=0;i<a;i++)
	{
		sum=0;
		for(j=0;j<b;j++)
		{
			sum+=c[i][j];
		}
		printf("%d\n",sum);
	}
	return 0;
}
