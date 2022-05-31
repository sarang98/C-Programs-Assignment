#include<stdio.h>
int mul(int a,int b)
{
	if(b==1)
		return a;
	else
		return (a + mul(a,b-1)); 
}
int main()
{
	int a,b;
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	
	printf("%d * %d = %d\n",a,b,mul(a,b));
	return 0;
}
