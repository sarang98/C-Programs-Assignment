#include<stdio.h>
int main()
{
	FILE *ptr = fopen("test.txt","w");
	int n=0;
	char str[20];
	
	if(ptr==NULL)
		printf("file not found");
		
	printf("Input the number of lines to be written : ");
	scanf("%d",&n);
	printf("The lines are\n");
	
	for(int i=0;i<=n;i++)
	{
		fgets(str,sizeof(str),stdin);
		fputs(str,ptr);
	}
	
	fclose(ptr);
	
	return 0;
}
