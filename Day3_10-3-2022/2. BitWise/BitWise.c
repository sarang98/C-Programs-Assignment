#include<stdio.h>
int main( void )
{
	int a,b;
	
	printf("Enter two operands : ");
	scanf("%d%d",&a,&b);
	
	printf("\nBitWise Operatos : ");
	printf("\n================== ");
	
	printf("\nAND Bitwise Operator (a&b) : %d ",a&b);
	printf("\nOR Bitwise Operator (a|b) : %d", a|b);
	printf("\nXOR Bitwise Operator (a^b) : %d", a^b);
	printf("\nComplement Bitwise Operator (~a and ~b) : %d \t %d",~a,~b);
	printf("\nLeft Shift works as multiplication (a<<b) : %d",a<<b);
	printf("\nRight Shift works as Division (a>>b) : %d",a>>b);

	return (0);
}
