/* 
NAMA    :   ACHMAD RIFQY PRATAMA
NIM     :   13218069
*/

#include <stdio.h>
#define pi 3.14159265359

int main(void)
{
    double r = 7;
    double a1,b1,a2,b2,intI,intII,dr,d0,error;

    // Hasil perhitungan luas lingkaran dengan metode rumus
    double Lo = pi*r*r;
    printf("Luas lingkaran dengan rumus pi*r^2, pada r = 7 cm adalah %lf cm^2\n", Lo);

    // Inisialisasi value
    dr = 0.000001;
    d0 = 0.000001;
    a1 = 0;
    a2 = 0;
    b1 = r;
    b2 = 2*pi;
    intI = 0;
    intII = 0;
    int nr = (b1-a1)/dr;
    int n0 = (b2-a2)/d0;

    // Perhitungan integral dr dengan metode penjumlahan riemann
    for (int i = 1; i <= nr; i++){
        intI = intI + (0.5*r*dr);
    }
    // Perhitungan integral d(tetha) dengan metode penjumlahan riemann
    for (int j = 1; j <= n0; j++){
        intII = intII + d0;
    }
    // Hasil perhitungan luas lingkaran dengan metode partisi riemann
    double Li = intII*intI;
    error = Lo-Li;

    printf("Luas lingkaran integral metode riemann %lf cm^2\n", Li);
    printf("Error yang terjadi %lf cm^2\n", error);

    return 0;
}