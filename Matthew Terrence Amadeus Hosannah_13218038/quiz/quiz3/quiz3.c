//Nama : Matthew Terrence Amadeus Hosannah
//NIM  : 13218038
//Date : Selasa, 4 Febuari 2020

#include<stdio.h>
#include <math.h>
#define pi 3.14159265359        


double luas_reverensi(double r);
double fx(double r, double x);
double riemann(double r, double dx);


int main(void)
{
    double r, error, dx;


    printf("Masukkan r "); scanf("%lf", &r);        
    printf("Masukkan dx = "); scanf("%lf", &dx);

    error = (fabs(luas_reverensi(r) - riemann(r, dx))/luas_reverensi(r)) * 100;       

    printf("\nrumus luas lingkaran = %f ", luas_reverensi(r));
    printf("\ndelta x sebesar %f nilainya adalah = %f satuan luas\n", dx, riemann(r, dx));
    printf("error sebesar = %f persen\n", error);            

    return(0);
}


double luas_reverensi(double radius)
{
    return (radius * radius * pi);
}


double fx(double x, double radius)
{
    return (sqrt((x * x) - (radius * radius )));
}


double riemann(double r, double dlt)
{
    
    double i;
    double hasil;
    hasil = 0;

    for(i = -r; i <= r; i = i + dlt)
    {
        hasil = (fx(i, r) * dlt ) + hasil;
    }

    return (2 * hasil);
}