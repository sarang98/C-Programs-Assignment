#include<stdio.h>
void reverse(char* a, int z)
{
    char j[z];
    int count=0;
    for(int i=z-1,k=0;i>=0;i--,k++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
}
int main()
{
    char a[20];
    int z;
    printf("\nEnter the Word : ");
    scanf("%s",a);
    for(z=0;a[z]!='\0';z++);
    reverse(a,z);
    
    return 0;
}
