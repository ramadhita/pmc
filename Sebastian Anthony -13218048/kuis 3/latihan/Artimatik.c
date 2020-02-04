#include <stdio.h>
#include "Fungsi.h"

int main(void){
    float var1,var2;
    float hasil1,hasil2,hasil3,hasil4;
    printf("Masukan angka pertama \n");
    scanf(" %f", &var1);
    printf("Masukan angka kedua\n");
    scanf(" %f", &var2);
    hasil1 = plus(var1,var2);
    hasil2 = minus(var1,var2);
    hasil3 = times(var1,var2);
    hasil4 = divide(var1,var2);
    printf("Hasil penjumlahan adalah %.2lf\n", hasil1);
    printf("Hasil pengurangan adalah %.2lf\n", hasil2);
    printf("Hasil perkalian adalah %.2lf\n", hasil3);
    printf("Hasil pembagian adalah %.2lf\n", hasil4);
    return(0);
}
