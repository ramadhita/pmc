#include<stdio.h>
#include<math.h>

int main()
{
    double L1,L2,sum1,sum2,dx,dy,N,err;
    sum1 = 0;
    sum2 = 0;
    L1 = 3.14*7*7; //Luas Lingkaran dengan rumus langsung
    N = 1000000.0; // Partisi jumlah Riemann agar didapat error yang kecil
    dx = 7/N;
    dy = (2*3.14)/N;
    for (double i = 0.0; i <= 7.0; i += dx)
    {
        sum1 += i*dx; //menghitung luas juring lingkaran yang dipartisi sebesar dx
    }
    for (double i = 0.0; i <= 2*3.14; i += dy)
    {
        sum2 += sum1*dy; //menghitung luas lingkaran dengan pasrtisi sebesar dy
    }
    L2 = sum2; //luas lingkaran dengan jumlah Riemann
    err = L1-L2; //galat antara rumus langsung dengan pendekatan luas dengan jumlah Riemann
    printf("L1 : %f\n", L1);
    printf("L2 : %f\n", L2);
    printf("Galat : %f\n", err);
}

