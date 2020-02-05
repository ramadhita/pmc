// Nama : Adeline Kartika Tiku Putri
// NIM  : 13218081
// Kuis 3
// Menghitung luas lingkaran dengan cara biasa, integral riemann, kemudian menghitung galat
// Jari-jari sebesar 7

#include <stdio.h>
#include <math.h>

int main(){
    double pi = 3.142857142857143;
    double r = 7;
    double n = 100000;
    double luas1, luas2, jumlah, dx1, dx2, error;

    double i1, i2 = 0;

    // Menghitung luas lingkaran dengan rumus biasa
    luas1 = (pi*r*r);

    // Menghitung luas lingkaran dengan integral riemann
    dx1 = (r/n);
    dx2 = ((2*pi)/n);
    luas2 = 0;
    jumlah = 0;

    // loop untuk integral pertama
    while (i1 <= r){
        jumlah = jumlah + (i1*dx1);
        i1 = i1 + dx1;
    }

    // loop untuk integral kedua
    while (i2 <= (2*pi)){
        luas2 = luas2 + (dx2*jumlah);
        i2 = i2 + dx2; 
    }
    
    // hasil
    printf("Hasil luas perkalian biasa %f\n", luas1);
    printf("Hasil luas lingkaran dengan riemann %f\n", luas2);
    
    // galat
    error = luas1-luas2;
    printf("Erorrnya sebesar %f", error);

    return 0;
}
