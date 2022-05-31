#include <stdio.h>
 
int main()
{
   int array[100], s, i, n, count = 0;
   
   printf("Enter number of elements :\n");
   scanf("%d", &n);
   
   printf("Enter the elements:%d \n", n);
   
   for (i = 1; i <= n; i++)
   {
      scanf("%d", &array[i]);
   }
    scanf("%d", &s);
   
   for (i =1; i <= n; i++)
   {
      if (array[i] == s) 
      {
         printf("%d is present at location %d.\n", s, i);
         count++;
         break;
      }
   }
   if (count == 0)
   {
      printf("%d is not  present in your array.\n", s);
   }
   
   return 0;
}
