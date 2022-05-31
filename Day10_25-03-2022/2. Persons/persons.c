#include<stdio.h>
#include<string.h>
#define member 5
struct personal
{
	char name[50];
	char date_of_joining[10];
	int salary;
};
int main()
{
	struct personal p[member];
	for(int i=0;i<member;i++)
	{
		printf("Enter your name : ");
		scanf(" %s",p[i].name);
		printf("Enter you date of joining (DD-MM-YY) : ");
		scanf(" %s",p[i].date_of_joining);
		printf("Enter your salary : ");
		scanf(" %d",&p[i].salary);
	}
	for(int i=0;i<member;i++)
	{
		printf("\nDetails of Person %d\n",i+1);
		printf("Name : %s\n",p[i].name);
		printf("Date of Joining : %s\n",p[i].date_of_joining);
		printf("salary : %d\n\n",p[i].salary);
	}
	return 0;
}
