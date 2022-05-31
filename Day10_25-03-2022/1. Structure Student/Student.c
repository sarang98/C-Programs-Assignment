#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char gender;
	char name[50];
};
int main()
{
	struct student std1 = {1,'M',"ABC"};
	struct student* ptr = &std1;
	
	printf("Enter your id : ");
	scanf("%d",&ptr->id);
	printf("\nEnter your name : ");
	scanf(" %s",ptr->name);
	printf("\nEnter your gender : ");
	scanf(" %c",&ptr->gender);

	
	printf("\nDetails updated \n");
	printf("=================\n");
	printf("ID : %d \nGender : %c \nName :  %s\n",ptr->id,ptr->gender,ptr->name);
	return 0;
}
