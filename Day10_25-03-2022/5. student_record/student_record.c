#include<stdio.h>
#include<string.h>
#define STUDENTS 2
struct student_record
{

	char name[50];
	char branch[50];
	int total_Marks;
};
int main()
{
	struct student_record s[STUDENTS];
	for(int i = 0; i<STUDENTS ;i++)
	{
		printf("Enter your name : ");
		scanf(" %[^\n]s",s[i].name);
		printf("Enter you branch (DAC / DSSD) : ");
		scanf(" %s",s[i].branch);
		printf("Enter marks : ");
		scanf(" %d",&s[i].total_Marks);
	}
	printf("\n=======================================\n");
	printf(" Batch \t marks \t  name \n");
	for(int i=0;i<STUDENTS;i++)
	{
		printf(" %s \t  %d \t %s\n",s[i].branch,s[i].total_Marks,s[i].name);
	}
	printf("\n");	
	return 0;
}
