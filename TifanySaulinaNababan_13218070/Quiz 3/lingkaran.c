#include <stdio.h>
#include <stdlib.h>
#define pi  3.14159265359
//#define N 57001

/*
float integral(float batas_a, float batas_b, float persamaan)
{
    float i, sum = 0, interval;
    interval = (batas_b - batas_a)/N;
    if (batas_a > batas_b) {
        i = batas_a;
        batas_a = batas_b;
        batas_b = i;
    }
    for (i = batas_a; i < batas_b; i += interval)
    {
        sum += persamaan*interval;
    }
    //printf("nnValue of integration is:%.3f", sum);
    return sum;
}
*/

int main(){
    float r, N, luas, hasil=0, hasilx=0, interval, i;

    printf("Masukkan jari-jari lingkaran : ");
    scanf(" %f", &r);
    printf("Masukkan banyak selang interval : ");
    scanf(" %f", &N);

    luas = pi*r*r;
    //hasil = integral(0, 2*pi, integral(0, r, r));
    //hasilx = integral(0, r, r);
    //hasil = integral(0, 2*pi, hasilx);
    //printf("hasilx: %f\n", hasilx);

    interval = r/N;
    for (double i = 0; i < r; i += interval){
        hasilx += i*interval;
    }

    interval = (2*pi)/N;
    for (double i = 0; i < 2*pi; i+= interval){
        hasil += hasilx*interval;
    }
    printf("luas: %f     luas dengan integral: %f\n", luas, hasil);
    return(0);
}


