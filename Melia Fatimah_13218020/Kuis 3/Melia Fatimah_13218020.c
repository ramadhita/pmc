#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define N 999999

int main()
{
    double i, r, luas1, luas2, sum = 0;
    
    printf("Masukkan nilai jari-jari : ");
    scanf("%lf", &r);
    printf("\n");

    luas1 = M_PI*r*r;
    printf("Hasil menggunakan rumus luas : ");
    printf("%lf", luas1);
    printf("\n");

    for (i = 0; i <= r; i += r / N) {
        sum += i*(r/N);
    }

    for (i = 0; i <= 2*M_PI; i += (2*M_PI) / N){
        luas2 += sum*((2*M_PI)/N);
    }


    printf("Hasil menggunakan integral : ");
    printf("%lf\n", luas2);

    printf("Error : %lf", luas2-luas1);
    return (0);
}