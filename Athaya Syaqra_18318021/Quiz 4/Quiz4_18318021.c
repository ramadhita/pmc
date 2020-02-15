#include <stdio.h>
#include <math.h>
#define R 10000
#define C 0.00001

float Vt(float t)
{
    double a, b, c, vt, dt;
    a = 1;
    b = 1/(R*C);
    c = 5/(R*C);
    dt = 0.001;
    if(t<=0)
    {
        vt = 0;
    }
    else 
    {
        vt = ((a*(Vt(t-dt))+(c*dt))/(a+(b*dt)));
    }
    return vt;
}

int main(void)
{
    FILE *file;
    double a,b,c,dt;
    file = fopen("file.txt","w");
    dt = 0.001;
    for(float t=0; t<(5*R*C); t+=dt)
    {
        fprintf(file, "%f, %f\n", t, Vt(t));
    }
    fclose(file);
}


