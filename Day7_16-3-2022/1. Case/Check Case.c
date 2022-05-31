#include <stdio.h>

int main()
{
    char a[50];
    int upper=0,lower=0;
    
    printf("Enter the string : ");
    scanf("%[^\n]s",a);
    
    int c = sizeof(a)/sizeof(a[0]);
    
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i] >= 65 && a[i] <= 90)
            upper++;
        else if(a[i] >= 97 && a[i] <= 122)
            lower++;
        else if(a[i]==' ')
        	continue;
    }   
    printf("\nUpper case letters : %d \nLower case letters : %d \n",upper,lower);
    
    return 0;
}
