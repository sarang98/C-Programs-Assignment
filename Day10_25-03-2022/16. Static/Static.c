#include<stdio.h>
static int i;
void function()
{
	i++;
	printf("Function called %d times \n",i);
}
int main()
{
	function();
	function();
	function();
	function();
	function();
	return 0;
}

