#include<stdio.h>
#include<math.h>


float luas (int r){
    double hasil;
    hasil = M_PI*r*r;
    return(hasil);
}

float luas2 (int r){
    double i;
    double n = 100000; //partisi
    double tetha = 2*M_PI;
    double delta1 = r/n;
    double delta2 = tetha/n;
    double integral1 = 0;
    double integral2 = 0;
    for (i=0; i<=7; i+=delta1){
        integral1 = integral1 + (i*delta1);
    }
    for (i=0; i<n; i++){
        integral2 = integral2 + (integral1 * delta2);
    }
    //printf("%f", integral1);
    return (integral2);
}

int main(){
    int r;
    double error = 0;
    printf("Masukkan panjang jari-jari: ");
    scanf("%d", &r);
    printf("Luas lingkaran dengan rumus 1: %lf\n", luas(r));
    printf("Luas lingkaran dengan rumus 2: %lf\n", luas2(r));
    error = luas2(r) - luas(r);
    printf("error: %lf", error);
    }