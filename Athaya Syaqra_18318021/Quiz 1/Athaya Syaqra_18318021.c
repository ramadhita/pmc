#include <stdio.h>
#include <math.h> 


int main (void)
{
    double vox, voy, x, y, t;
    t = 0;
    vox = 50*0.5;
    voy = 50*0.866;
    y = (voy*t)-(5*t*t);
    x = vox*t;

    while(y>=0)
    {
        printf("Saat %lf", t);
        printf(" s, (x,y) berada di %lf,%lf\n", x,y);
        t = t + 0.01;
        x = vox*t;
        y = (voy*t)-(5*t*t);
     }
    printf("Jarak terjauh adalah %lf", x);
    return (0);
}