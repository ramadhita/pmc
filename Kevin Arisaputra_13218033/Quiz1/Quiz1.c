#include <stdio.h>
#include <math.h>

int main () 
{
    float x, y, t;
    t = 0;    
    
    while (y >= 0)
    {
        x = 50*cos(60*M_PI/180)*t;
        y = (50*sin(60*M_PI/180)*t) - (0.5*10*pow(t,2));
        printf ("Waktu: %4.0f ms -- Posisi (x, y): (%.5f, %.5f) m\n", t*1000, x, y);
        t += 0.01;
    }
}