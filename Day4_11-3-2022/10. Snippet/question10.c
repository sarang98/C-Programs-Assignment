#include<stdio.h>
int main()
{
	int a=1, b=-1 , c=0 , d;
	
	d=++a&&++b||c--;
	
	if(d)
		printf("kolkata \n");
	else if(c)
		printf("Delhi \n");
	else
		printf("Banglore \n");

	return 0;
}
