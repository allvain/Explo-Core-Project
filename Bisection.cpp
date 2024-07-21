#include <stdio.h>
float f(float x)
{
    return 3*x*x*x*x*x-2*x*x*x+6*x-8;
}
float bisection(float a , float b)
{
    float c = 0;
    float d = 1;
    while((b - a) >= 0.0001)
    {
        if(f(a) * f(b) > 0)
        {
            printf("Enter a different value of a or b.");
        }
        else
        {  
            if(f(a) * f(c) < 0)
            {
                b = c;
                c = (a + b)/2;
                d++;
            }
            else if(f(c) == 0)
            {
                break;
            }
            else
            {
                a = c;
                c = (a + b)/2;
                d++;
            }
        }        
    }
    printf("The root of the equation is %f and the number of required iterations is/are %f.",c,d);
}
int main()
{
    float a,b;
    printf("Enter a : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);
    bisection(a,b);
}
