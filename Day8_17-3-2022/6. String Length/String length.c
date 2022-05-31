#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);
	unsigned int i;
	for(i=0;str[i]!='\0';i++);
	printf("String length is : %u\n",i-1);
	return 0;
}
