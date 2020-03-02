#include <stdio.h>
#include <math.h>
#define pi M_PI

int main()
{
    double Din = 0.001, g = 10, r = 0.025;
    double rho = 1000, h = 0, t, v;
    double Area, Dout = 0, dt = 1;
    int stop = 0;
    FILE *infile;
    infile = fopen("air.csv", "w");
    Area = pi * r * r;
    while (stop == 0)
    {
        v = sqrt(2*g*h);
        Dout = Area*v;
        if ((Din - Dout) > 0.000001)
        {
            h += (Din - Dout) * dt;
            t += dt;
            stop = 0;
            fprintf(infile, "%f , %f\n", t, h);
        }
        else
        {
            stop = 1;
        }
    }
    printf("waktu maksimum = %lf s", t);
    fclose(infile);
    return 0;
}
