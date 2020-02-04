#include <stdio.h>
#include <math.h>
#include "luas.h"

// Abdurraafi' Syauqy
// 13218016
// quiz 3

double phi = 3.14159265358979323846;
double r = 7;
double L1, L2, error;

int main (){
    L1 = luas1(phi, r);
    L2 = luas2(phi, r);
    printf("L1 = %.10f \n", L1);
    printf("L2 = %.10f \n", L2);
    error = L2 - L1;
    printf("error = %.10f \n", error);
    return 0;
}
