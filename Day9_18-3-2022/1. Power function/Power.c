#include <stdio.h>
#include <math.h>
float power(float , float);
int powe(int,int);

int main()
{
    float a,b,c;
    printf("enter two numbers : ");
    scanf(" %f %f",&a,&b);
    if(ceil(b)==floor(b))
        {
            c=powe((int)a,(int)b);
            printf(" %d raise to the power of  %d is : %d",(int)a,(int)b,(int)c);
            printf("\n\n");
        }
    else
        {
            printf("\n %.f raise to the power of  %f is : ",a,b);
            int count=0;
            float j=power(a,b);
            c=j;
            printf(" %.f.",floor(c));
            while(floor(c>=0.0)&&count<6)
            {
                c=c-floor(c);
                c*=10.0;
                if(floor(c)==0)
                    break;
                printf("%d",(int)floor(c));
                count++;
            }
            printf("\n\n");
        }
    return 0;
}
int powe(int a,int b)
{
    int result;
    result=pow(a,b);
    return result;
}
float power(float x , float y)
{
    float result;
    result=pow(x,y);
    return result;
}
