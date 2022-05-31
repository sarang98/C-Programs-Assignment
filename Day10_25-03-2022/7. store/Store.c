#include<stdio.h>
int main()
{
	char str[20];
	FILE *ptr;
	char fName[50];
	
	printf("Enter file name : ");
	scanf(" %[^\n]s",fName);

	ptr = fopen(fName,"r");
	if(ptr == NULL)
		printf("not found");
	else	
	{
		while(1)
		{
			fgets(str,sizeof str,ptr);
			if(feof(ptr))
				break;
			printf("%s\n",str);
		}
	
	}
	return 0;
}
