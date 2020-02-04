#include <stdio.h>

void main()
{
//Init
    double r = 7;
    double PI = 3.141592653589793238;
    double L1; //Area with Formula
    double L2; //Area with Integral
    double first;//First integral value
    double dX = 0.000001; //Precision of the integral
    double i;//First integral count
    double j;//Second integral count
    double err;

//Area with Formula
    L1 = PI * (r*r);

//Area with integral
    i = 0;
    first = 0;

    while(i <= r)
    {
        first +=  i * dX;
        i = i + dX;
    }
    j = PI * 2;
    i = 0;
    while(i <= j)
    {
        L2 +=  first * dX;
        i = i + dX;
    }

//Error
    err = L1-L2;

//Output
    printf("Area w/ formula  = %lf\n", L1);
    printf("Area w/ Integral = %lf\n",L2);
    printf("Error            = %lf",err);

}