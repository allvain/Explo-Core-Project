#include<stdio.h>
void LinearRegression(float *array1,float * array2,int a)
{
    float a1;
    float a0;
    float product;
    float sumx;
    float sumy;
    float sumsquare;
    for (int i = 0; i < a; i++)
    {
        int c;
        product = 0;
        c = array1[i]*array2[i];
        product = product + c;
    }
    for (int i = 0; i < a; i++)
    {
        sumx = 0;
        int d;
        d = array1[i];
        sumx = sumx + d;
    }
    
    for (int i = 0; i < a; i++)
    {
        sumy = 0;
        int e;
        e = array2[i];
        sumx = sumx + e;
    }
    for (int i = 0; i < a; i++)
    {
        sumsquare = 0;
        int f;
        f = array1[i]*array1[i];
        sumsquare = sumsquare + f;
    }
    a1 = ((a)*(product)-(sumx)*(sumy))/((a)*(sumsquare)-((sumx)*(sumx)));
    a0 = (sumy)-((a1)*(sumx))/a;
    printf("Equation : y = %f x + %f\n",a1,a0);
}
int main()
{
    int a;
    printf("Enter the number of inputs : \n");
    scanf("%d",&a);
    float array1[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter the %d x input : \n",i+1);
        scanf("%f",&array1[i]);
    }
    float array2[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter the %d y input : \n",i+1);
        scanf("%f",&array2[i]);
    }
    LinearRegression(array1,array2,a);
    return 0;
}