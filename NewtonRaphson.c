#include<stdio.h>
#include<math.h>
double function(double x)
{
    return pow(x,2)-1;
}
double derivative_at_a(double a)
{
    return (function(a + 0.0000000001) - function(a))/0.0000000001 ;
}
float NewtonRaphson(float x)
{
    float a;
    a=x-(function(x)/derivative_at_a(x));
    if(fabs(a-x>0.01))
    {
        x=a;
        return NewtonRaphson(x);   
    }
    else
    return a;
}
int main()
{
    printf("Enter initial value : ");
    float x;
    scanf("%f",&x);
    printf("%f",NewtonRaphson(x));
    return 0;
}