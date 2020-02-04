//Nama      :   Martinus William Hartono
//Jurusan   :   Teknik Elektro
//NIM       :   13218044
//Tanggal   :   4 Februari 2020
//EL2008 - Pemecahan Masalah dengan C - KUIS 3

/*Program untuk menghitung luas lingkaran menggunakan rumus pi*r*r
dan dengan menggunakan pendekatan jumlah Riemann dan menghitung galatnya*/

//Preprocessing Directives
#include<stdio.h>
#include <math.h>
#define pi 3.14159265359        //Macros pi

//Inisialisasi Fungsi
double rumus_luas(double r);
double fx(double x, double r);
double jumlah_riemann(double r, double delta);

//Fungsi Main
int main(void)
{
    double radius, error, delta_x;

    printf("PROGRAM UNTUK MENDHITUNG LUAS LINGKARAN DENGAN MENGGUNAKAN RUMUS DAN JUMLAH RIEMANN\n");

    printf("Masukkan radius = "); scanf("%lf", &radius);        //Input radius
    printf("Masukkan delta_x = "); scanf("%lf", &delta_x);

    error = (fabs(rumus_luas(radius) - jumlah_riemann(radius, delta_x))/rumus_luas(radius)) * 100;       //Error dalam persen

    printf("\nDengan menggunakan rumus luas lingkaran = %f satuan luas", rumus_luas(radius));
    printf("\nDengan menggunakan Jumlah Riemann dengan delta x sebesar %f nilainya adalah = %f satuan luas\n", delta_x, jumlah_riemann(radius, delta_x));
    printf("Hasil perhitungan tersebut mempunyai error sebesar = %f persen\n", error);            //Output galat

    return(0);
}

//Rumus luas lingkaran dengan menggunakan pi * r * r
double rumus_luas(double r)
{
    return (pi * r * r);
}

//Fungsi untuk menghitung nilai fungsi f(x) pada bidang kartesian
double fx(double x, double r)
{
    return (sqrt(r * r - x * x));
}

//Fungsi untuk menghitung jumlah Riemann dengan delta_x dan r sebagai parameternya
double jumlah_riemann(double r, double delta)
{
    double result;
    double i;
    result = 0;

    for(i = -r; i <= r; i = i + delta)
    {
        result = result + (delta * fx(i, r));
    }

    return (2 * result);
}
