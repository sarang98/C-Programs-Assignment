#include<stdio.h>  
int main()    
{    
	int i=0;
	char c= 'a';
	while(i<5)
	{
		i++;
		switch(c)
		{
			case 'a':
				printf("%c",c);
				break;
		}
	}
	printf("a\n");
	return 0;  
}
