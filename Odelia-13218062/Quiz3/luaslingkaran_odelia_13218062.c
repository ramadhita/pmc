/*Jumlah Riemann:
sigma(n=i) f(x) deltax = integral F(x)dx*/
/*Rumus lLas Lingkaran dengan Integral: 
integral (0-phi) integral (0-r) r dr dteta*/

#include <stdio.h>
#include <math.h>

void LLN () //fungsi dengan rumus lingkaran biasa (phi_r_kuadrat)
{
    float r,
        phi,
        luas1;

    r = 7;
    phi = 3.1416;
    luas1 = phi*r*r;
    printf ("Nilai Luas Lingkaran dengan rumus biasa adalah %f\n", luas1);
}

void LLI (float x) //fungsi dengan perhitungan integral
{
    float r,
        phi,
        a,b,
        teta1,teta2,
        dr,
        dteta,
        int1,
        luas2,  
        i,j;


    a = 0; //batas bawah integral pertama
    b = 7; //batas atas integral pertama
    r = 7; //jari-jari lingkaran
    teta1 = 0; //batas bawah integral kedua
    teta2 = 3.1416; //batas atas integral kedua
    int1 = 0; 
    luas2 = 0;    

    dr = (b-a)/x; //delta r
    for (i=0; i<x; i++) //menghitung jumlah riemann untuk integral r dr
                        //nilai i dipengaruhi oleh x (jumlah partisi), maka akan dilakukan looping sebanyak x
    {
        int1 = int1+(r*dr);
    }

    
    dteta = (teta2-teta1)/x; //deltateta
    for (j=0; j<x; j++) //menghitung jumlah riemann dari hasil integral r dr (integral(integral r dr) dteta)
                        //nilai j dipengaruhi oleh x (jumlah partisi), maka akan dilakukan looping sebanyak x
    {
        luas2 = luas2+(int1*dteta);
    }
    printf ("Nilai luas lingkaran dengan integral: %f\n", luas2);
}


int main ()
{
    float n;
    printf ("Nilai n(jumlah partisi yang diinginkan): ");
    scanf ("%f", &n);
    LLN ();
    LLI (n);
}
