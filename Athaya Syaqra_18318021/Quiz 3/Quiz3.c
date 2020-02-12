#include <stdio.h>
#include <math.h> 


#define n 620

float t = 2*3.14;
float dr, dt;
float sumr = 0;
float sumt = 0;
float r = 7;
float luas, error;
float i;

int main()
{
    float dr = r/n;
    float dt = t/n;
    for (i=0; i<=r; i+=dr)
    {
        sumr = sumr + (dr*i);
    }

    for (i=0; i<=t; i+=dt)
    {
        sumt = sumt+ (dt*sumr);
    }
    luas = 3.14*r*r;
    error = luas-sumt;

    printf("Luas lingkaran r = 7 dengan integral = %f\n", sumt);
    printf("Luas lingkaran r = 7 dengan rumus = %f\n", luas);
    printf("Error =%f\n", error);
    return(0);
}





