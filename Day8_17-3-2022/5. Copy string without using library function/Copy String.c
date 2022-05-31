#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	int i=0,j=0;
	printf("Enter string 1: \n");
	scanf("%s",str1);
	printf("Enter string 2: \n");
	scanf("%s",str2);
	
	for(j=0;str2[j]!='\0';j++,i++)
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';
	printf("Copied string: %s\n",str1);
	return 0;
}
