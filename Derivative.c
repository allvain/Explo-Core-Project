#include<stdio.h>
double function(double x)
{
    return x*x-3*x+2;
}
double derivative_at_a(double a)
{
    return (function(a + 0.0000000001) - function(a))/0.0000000001 ;
 
}
int main()
{
    double a;
    printf("Enter the point where derivative is to be calculated : ");
    scanf("%lf",&a);
    printf("Derivative of f(x) at point %lf is %lf.", a ,derivative_at_a(a)); 
    return 0;
}
