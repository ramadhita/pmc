/*
Quiz 02/04/2020
Menghitung lingkaran dengan cara rumus dan integral
Membandingkan error yang didapat dari 2 cara tersebut
*/

#include <stdio.h>

#define PI 3.141592654

int main(void)
{
    double r, luas1, luas2, hasil, interval, error;
    int count;

    printf("Masukkan jari-jari lingkaran : ");
    scanf(" %Lf", &r);

    printf("Selang interval per : ");
    scanf(" %d", &count);

    luas1 = PI * r * r;

    interval = r / count;
    luas2 = 0;
    hasil = 0;

    for (double i = 0; i < r; i += interval)
    {
        hasil += interval * i;
    }

    interval = (2 * PI) / count;
    for (double i = 0; i < 2 * PI; i += interval)
    {
        luas2 += interval * hasil;
    }

    printf("Luas dengan perkalian biasa adalah %Lf. \n", luas1);
    printf("Luas dengan integral adalah %Lf. \n", luas2);

    error = luas1 - luas2;
    printf("Error : %Lf", error);
}