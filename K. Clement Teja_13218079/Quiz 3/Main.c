/******************************************************************************

Mencari luas lingkaran dengan jari-jari 7 cm dengan integral riemann

K. Clement Teja
13218079

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include "RiemannIntegral.h"

float main()
{//kamus lokal  
    float PI = M_PI;
    float r;    // jari-jari lingkaran
    float luas;
    float error;

//input
    printf("Masukkan panjang radius lingkaran dalam cm: ");
    scanf("%f", &r);

//proses
    luas = IntegralRiemann(func_orde1,r,0) * IntegralRiemann(func_orde0, 2 * PI ,0);
    error = luas - PI*r*r;

//display  
    printf("Luas lingkaran berdasarkan Riemann : %f cm^2\n", luas);
    printf("Luas lingkaran berdasarkan rumus PI x r^2 : %f cm^2\n",  PI*r*r);
    printf("Error (selisih dengan PI r^2): %f", error);
    return 0;
}