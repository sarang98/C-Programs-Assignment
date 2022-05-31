#include<stdio.h>
int main()
{
	char str1[20],str2[20];
	int z=0;
	printf("Enter the first string :");
	scanf("%s",str1);
	printf("Enter the second string : ");
	scanf(" %s",str2);
	int length1,length2;
	
	for(length1=0;str1[length1]!='\0';length1++);
	for(length2=0;str2[length2]!='\0';length2++);	
	
	char str[length1+length2];
	for(int i=0;i<=length1+length2;i++)
	{
		if(i<length1)
		{
			str[i]=str1[i];
		}
		if(i==length1+length2)
			str[i]='\0';	
		else if(i>=length1)
		{
			str[i]=str2[i-length1];
		}	
	}
		printf("\noutput : \n");	

	printf("%s",str);
	return 0;
}
