#include <stdio.h>
// Fadia Hanifa Suwandoko / 18318029
// Hitung luas lingkaran dengan integral
 
// Inisiasi Konstanta
float pi = 3.14159;
int r = 7;
float a = 0;
float c;
float sum1 = 0;
float sum2 = 0;
float i, j;
float luas;
float n = 70000;
float galat;
// Program Utama
int main() {
    c = 2 * pi;                             // batas atas integral kedua
    float deltax = r/n;                     // delta integral pertama
    float deltay = c/n;                     // delta integral kedua
    // Integral Pertama (integral r)
    for (i = a; i <= r; i = i + deltax){
        sum1 = sum1 + (i * deltax);         // sum1 = jumlah riemann f(x) = x, dx = (r/n)
    }
    // Integral Kedua (integral theta)
    for (i = a; i <= c; i = i + deltay){
        sum2 = sum2 + (sum1*deltay);        // sum2 = jumlah reimann f(x) = sum1, dy = (c/n)
    }
    luas = pi * r * r;                      // luas dengan rumus biasa
    galat = ((sum2 - luas)/luas) * 100;     // perbedaan luas dengan rumus dan dengan jumlah riemann
    printf("LUAS 1 = %3.2f\n", sum2);       // Display luas dan galat
    printf("LUAS 2 = %3.2f\n", luas);
    printf("Galat = %f persen\n", galat);
    return(0);
 }