#include<stdio.h>
int main()
{
	int wordCount = 0, charCount =0;
	FILE *ptr;
	char fName[20],ichar;
	printf("Enter the name of file : ");
	scanf("%[^\n]s",fName);
	ptr = fopen(fName,"r");
	if(fName == NULL)
		printf("file not found");
	while((ichar = fgetc(ptr))!=EOF)
	{
		charCount++;
		if(ichar == ' ' || ichar == '\n')
		{
			wordCount++;
			charCount--;
		} 
	}
	wordCount++;
	fclose(ptr);
	printf("\nword count : %d ",wordCount);
	printf("\nChar count : %d",charCount);
	return 0;
}
