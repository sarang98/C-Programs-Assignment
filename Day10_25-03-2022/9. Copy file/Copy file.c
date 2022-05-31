#include<stdio.h>
int main()
{
	FILE * fptr, *dptr;
	char iChar, fName[20], dName[20];
	int i;
	
	printf("Enter the name of source file : ");
	scanf("%s", fName);
	fptr = fopen(fName,"r");
	if(fptr == NULL)
	{
		printf("file not found");
		return (-1);
	}
	
	printf("Enter the name of destination file : ");
	scanf("%s", dName);
	dptr = fopen(dName,"w+");
	if(dptr == NULL)
	{
		printf("file 2 not found");
		return (-1);
	}
	
	while((iChar = fgetc(fptr)) != EOF)
	{
		fputc(iChar,dptr);
	} 
	
	rewind(dptr);
	
	printf("\nData inside the %s is : \n",dName);
	while((iChar = fgetc(dptr)) != EOF)
	{
		printf("%c",iChar);
	}
	printf("\n");
	fclose(fptr);
	fclose(dptr);
	return 0;
}
