#include <stdio.h>
#include <math.h>
#include "integral.h"

int main(void)
{
    double r, intRdR, LRiemann, LRumus, Error;
    printf("Masukkan nilai jari-jari: ");
    scanf("%lf", &r);

    //Luas Lingkaran dengan Integral (Riemann Sum)
    intRdR = RiemannSum1(r);
    LRiemann = intRdR*RiemannSum0(2*M_PI);
    printf("Luas lingkaran dengan menggunakan Integral (Riemann Sum) adalah %f.\n", LRiemann);

    //Luas Lingkaran dengan Rumus Lingkaran
    LRumus = M_PI*r*r;
    printf("Luas lingkaran dengan menggunakan rumus adalah %f.\n", LRumus);

    //Error
    Error = LRiemann - LRumus;
    printf("Error sebesar %f\n", Error);

    return 0;
}