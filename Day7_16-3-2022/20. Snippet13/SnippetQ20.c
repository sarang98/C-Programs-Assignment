#include<stdio.h>
int func(int a,int b,int c)
{
	if((a>=b) && (c<b)) return b;
	else if(a>=b) return func(a,c,b);
	else return func(b,a,c); 	
}
int main()
{
	printf("%d",func(20,10,5));
}
