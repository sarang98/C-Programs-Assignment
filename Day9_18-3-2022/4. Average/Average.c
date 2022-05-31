#include<stdio.h>
#include<math.h>
double average(double a, double b)
{
    double average=((a+b)/2);
    return average;
}
int main()
{
    double a,b;
    printf("Enter two numbers : ");
    scanf("%lf%lf",&a,&b);
    if(ceil(a)==floor(a)&&ceil(b)==floor(b))
    {
        printf("%.2f\n",(float)(int)average((int)a,(int)b));
    }
    else
    {
        printf("%.1lf\n",average(a,b));
    }
    return 0;
}
