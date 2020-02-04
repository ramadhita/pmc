//San Afirrah V-18318039
#include <stdio.h>
#include <math.h>


int main(){
    float r,partisiX,phi,y,x,area, deltaX,luas;
    double sum;
    y,sum =0;
    r = 7;
    phi = 3.14;
    partisiX = 57001.0;
    deltaX = r/partisiX;
    for(x =0; x <= r; x = x+deltaX){ //menghitung luas dari 1 kuadran
        y = sqrt((r*r)-(x*x));
        sum = sum+(y*deltaX); //menyimpan nilai penjumlahan dari luas persegi partisi-partisi
    }
    area = 4*sum; //terdapat 4 kuadran yang memiliki luas yang sama , membentuk 1 lingkaran
    luas = phi*r*r;
    printf("Area lingkaran dengan riemann : %lf\n", area);
    printf("Rumus langsung : %lf\n", luas);
}
