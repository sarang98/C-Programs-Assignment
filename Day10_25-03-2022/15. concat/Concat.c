#include<stdio.h>
#define concat(a,b) b##a

int main()
{
	printf("%d",concat(11882,619));
	return 0;
}
