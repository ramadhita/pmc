#include <stdio.h>
#include <stdlib.h>

double grph1(double x)
{
    double res1;
    if((x >= 1) && (x <= 3))
    {
        res1 = (x-1)/2;
    }
    else
    {
        res1 = 0;
    }
    return res1;
}
double grph2(double x)
{
    double res2;
    if((x >= -1) && (x <= 0))
    {
        res2 = 1 + x;
    }
    else if((x > 0) && (x <= 1))
    {
        res2 = 1 - x;
    }
    else
    {
        res2 = 0;
    }
    return res2;
}

void main()
{
    double k, l;
    double dt = 0.01;
    double val = 0;
    FILE *infile1;
    infile1 = fopen("result.csv", "w");
    l = 0;
    while (l < 6)
    {
        val = 0;
        for (k = 0 ; k < l ; k += dt)
        {
            val += grph1(k) * grph2(k - l) * dt;
        }
        fprintf(infile1,"%lf, %lf\n", l, val);
        l += dt;
    }
    fclose(infile1);
}
