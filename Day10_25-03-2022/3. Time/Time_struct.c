#include<stdio.h>
#include<string.h>
struct time_struct
{
	int hr;
	int min;
	int sec;
};
int main()
{
	int rem;
	struct time_struct t;
	printf("Enter hours : ");
	scanf("%d",&t.hr);
	printf("Enter min : ");
	scanf("%d",&t.min);
	printf("Enter sec : ");
	scanf("%d",&t.sec);
	
	if(t.sec>=60)
	{
		rem = t.sec/60;
		t.sec = t.sec - (60*rem);
		t.min =t. min + rem;
	}
	if(t.min >= 60)
	{
		rem = t.min/60;
		t.min = t.min - (60*rem);
		t.hr = t.hr + rem;
	}
	
	printf("\n Time \n hr:min:sec => %d:%d:%d\n",t.hr,t.min,t.sec);
	return 0;
}
