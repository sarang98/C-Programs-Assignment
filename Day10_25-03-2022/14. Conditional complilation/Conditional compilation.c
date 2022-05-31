#include<stdio.h>
#define PI 3.14
int main()
{
    #ifdef PI
    printf("PI value is defined\n");
    #else
    printf("PI value is not defined\n");
    #endif

    #undef PI 
    printf("AFTER UNDEFINING PI\n");
    #ifdef PI
    printf("PI value is defined\n");
    #else
    printf("PI value is not defined\n");
    #endif

   
    #ifndef PI
    printf("AFTER IFNDEF\n");
    printf("PI value is defined\n");
    #else
    printf("PI value is not defined\n");
    #endif
    return 0;
}
