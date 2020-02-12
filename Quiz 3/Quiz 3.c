/* 
NAMA    :   PUTRI YULIANTI SUHAYAT
NIM     :   18318004
*/

#include <stdio.h>
#include <math.h>

double luas1 (double r){
    double hasil;
    hasil = 3.14285714*r*r;
    return hasil;
}

int main()
{
    double r, luas_asli, integral_1, integral_2, selang_1, selang_2, i, galat, partisi;

    printf("Masukkan besar jari jari = ");
    scanf("%lf", &r);
    printf("Masukkan jumlah partisi = ");
    scanf("%lf", &partisi);

    selang_1 = r/partisi;
    selang_2 = (2*3.14285714)/partisi;
    integral_1 = 0;
    integral_2 = 0;

    for (i=0; i<r; i+=selang_1){
        integral_1 = integral_1 + (selang_1*i);
    }

    for (i=0; i<(2*3.14285714); i+=selang_2){
        integral_2 = integral_2 + (selang_2*integral_1);
    }

    luas_asli = luas1(r);
    printf("hasil luas dengan perkalian = %lf\n", luas_asli);
    printf("hasil luas dengan integral = %lf\n", integral_2);

    galat = luas_asli - integral_2;
    printf("Besar Galat = %lf\n", galat);

    return 0;
}
