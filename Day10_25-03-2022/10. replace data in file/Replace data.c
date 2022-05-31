#include<stdio.h>
#include<string.h>
int main()
{
	FILE *ptr,*cpyfile;
	char fName[20],cName[20]="copy.txt";
	char replace[100],buffer[100];
	int replace_line=0,current_line=1;
	printf("Input the file name to be opened : ");
	scanf("%[^\n]",fName);
	
	ptr = fopen(fName,"r");
	cpyfile = fopen(cName,"w");
	
	if(ptr == NULL || cpyfile == NULL)
		printf("file not opening");
	
	scanf("%*c");
	printf("Input the content of the new line: ");
	fgets(replace,sizeof replace,stdin);
	
	printf("Input the line no you want to replace : ");
	scanf(" %d",&replace_line);
	
	while(1)
	{	
		fgets(buffer,sizeof buffer,ptr);
		if(feof(ptr))
			break;
		else if(current_line == replace_line)
			fputs(replace,cpyfile);
		else fputs(buffer,cpyfile);
		current_line++;
	}
	
	fclose(ptr);
	fclose(cpyfile);
	
	remove(fName);
	rename(cName,fName);
	return 0;
}
