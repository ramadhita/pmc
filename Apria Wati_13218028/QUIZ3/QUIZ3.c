/*
Apria wati/13218028

Luas lingkaran = phi r^2
integral r dr d(theta) (0,r)(0,2phi)
r=7cm*/

#include <stdio.h>
#include <math.h>
#define phi 3.14159265358979

int main()
{
    //Mencari luas lingkaran dengan jari-jari 7 
    int r=7; 
    double Hasil1;
    Hasil1 = phi*r*r;
    printf("Hasil luas lingkaran pertama adalah %Lf \n", Hasil1);
    
    double 
    a1=0, b1=7,         // Batas integral dalam
    a2=0, b2= 2*phi,    // Batas integral luar
    dx,dy,              // delta
    n= 20000,           // jumlah partisi
    sum1=0,sum2=0,      // Hasil integral pertama
    Hasil2;           // Hasil integral kedua


    dx=(b1-a1)/n;       // delta x untuk integral pertama
    dy= (b2-a2)/n;      // delta x untuk integral kedua

    // Mencari integral pertama
    double i;
    for (i=0;i<=7;i+= dx) { 
        sum1 +=  i*dx;
    }
    // Mencari integral kedua
    double j;
     for (j=0;j<= 2*phi;j+= dy) {
        sum2 += dy;
    }
    Hasil2= sum1*sum2;

    printf("Hasil luas lingkaran kedua adalah %Lf \n", Hasil2);

    printf("Selisih hasil kedua rumus adalah %Lf", Hasil2-Hasil1);
}
