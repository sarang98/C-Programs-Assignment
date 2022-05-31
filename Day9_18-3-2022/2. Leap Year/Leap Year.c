#include<stdio.h>
int is_leap_year(int year)
{
	return  ((year%4==0)&&(year%100!=0)||(year%400==0) ? 1 : 0);
			
}
int main()
{
	int year,val;
	printf("Enter the year: \n");
	scanf("%d",&year);
	val=is_leap_year(year);
 	((val==1)?printf("%d is a Leap Year \n",year):printf("%d is not a Leap Year \n",year));
 	return 0;
 }
