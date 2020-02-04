#include <math.h>
#include <stdio.h>

#define pi 3.1415926535897932384

double integral(double f);
double circle(double r);

int main(void)
{
    double r = 7;
    double integrl = integral(r);

    double error = (integrl - circle(r));
    if (error < 0) error *= -1;
    printf("Equation = %f\nIntegral form = %f\nError = %f", circle(r), integrl, error);
    return 0;
}

double circle(double r)
{
    return(pi * r * r);
}

double integral(double f)
{
    int i;
    double g, h, atas, bawah;
    double divisi = f/(double)1000000;

    g = 0;
    atas = divisi;
    bawah = 0;
    // hitung luas r fungsi teta
    for(i = 0; i<1000000; i++){
        g += (atas - bawah) * (atas);
        bawah = atas;
        atas += divisi;

        //printf("\n%g",g);
    }

    divisi = 2*pi/10000000;
    atas = divisi;
    bawah = 0;
    // hitung teta
    for(i = 0; i<10000000; i++){
        h += g * (atas - bawah);
        bawah = atas;
        atas += divisi;
    }
    return h;
}
