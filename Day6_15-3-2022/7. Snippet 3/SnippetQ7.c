#include<stdio.h>  
int main()    
{    
	int a[6]={1,2,3,4,5,6};
	switch(sizeof(a))
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			printf("IIT KGP");
			break;
	}
	printf("IIT MADRAS");

	return 0;  
}
