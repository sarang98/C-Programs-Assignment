#include<stdio.h>
int* swap(int* a)
{	
	int temp;
	temp=a[0];
	a[0]=a[1];
	a[1]=temp;
	return a;
}

int main()
{
	int a[2];
	printf("Enter two numbers : ");
	for(int i=0;i<2;i++)
		scanf("%d",&a[i]);
	printf("\nBefore swapping a=%d and b=%d\n",a[0],a[1]);
	swap(a);
	printf("After Swapping a=%d and b=%d\n",a[0],a[1]);
	return 0;	
}
