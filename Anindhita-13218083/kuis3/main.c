#include <stdio.h>
#include "circleArea.h"

int main() {

    // input radius
    double r;
    printf("Masukkan radius : ");
    scanf("%lf", &r);

    double approx = luasRiemann(r);
    double area = luas(r);

    // cetak
    printf("luas Riemann    : %f\n", approx);
    printf("luas            : %f\n", area);
    printf("error           : %f\n", approx - area);
}