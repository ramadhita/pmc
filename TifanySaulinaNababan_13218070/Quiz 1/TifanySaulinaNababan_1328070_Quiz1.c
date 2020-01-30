/* Posisi bola (x,y) */

#include <stdio.h>
#define kecepatan_awal 50
#define sin_sudut 0.866
#define cos_sudut 0.5

int main(void)
{
    double  x, y, jarak,
            tmax; 

    double t = 0;

    tmax = ((2*kecepatan_awal*sin_sudut)/10);

    //1
    while (t <= tmax){
        x = (kecepatan_awal*t*cos_sudut);
        y = (kecepatan_awal*t*sin_sudut) - ((10*t*t)/2);
        printf("Koordinat saat t = %lf", t);
        printf(" adalah (%lf, %lf)m\n", x, y);
        t = t + 0.01;
    }

    //2
    jarak = ((2*kecepatan_awal*kecepatan_awal*sin_sudut*cos_sudut)/10);
    printf("Jarak ke tanah = %lf", jarak);
    return 0;

}