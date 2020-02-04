/* NIM: 13218021
Nama: Alzana Armaniar Farhani
Keterangan: Quiz 3*/

#include <stdio.h>
#include "function.h"

int main(){
    double r;
    double luas1, luas2, error;
    printf("Masukkan nilai radius (cm): ");
    scanf("%lf", &r);
    luas1 = luasRumus(r);
    luas2 = luasRiemann(r);
    error = luas1-luas2;
    printf("Luas dengan rumus: %f cm^2", luas1);
    printf("\nLuas dengan Riemann Sum: %f cm^2", luas2);
    printf("\nError: %f", error);
    return 0;
}