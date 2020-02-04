#include<stdio.h>
#include<math.h>


int main()
{
    double delta,luas,sum,teta,galat;
    double r,hasil,x;
    int end;
    int i;


    r = 7;
    delta = 0.00001;

    // Integral
    x = 0;
    while (x <= r)
    {
        hasil = hasil + x*(delta);
        x += delta;
    }

    teta = 0;
    while (teta < 6.28)
    {
        sum = sum + hasil*(delta);
        teta += delta;
    }
    // Cara Biasa
    luas = 3.14*r*r;

    // Galat
    galat = fabs(sum - luas);
    
    printf("Hasil Integral = %lf \n", sum);
    printf("Hasil = %lf \n", luas);
    printf("Galat = %lf \n,", galat);
    return(0);

}