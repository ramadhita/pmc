#include <stdio.h>
#include <math.h>

// Abdurraafi' Syauqy
// 13218016
// quiz 3

double luas1 (double a, double b){
    double L1;
    L1 = a * b * b;
    return L1;
}

double luas2 (double a, double b){
    double L2 = 0;
    double dx = 0.00001;
    double i, r, theta;
    for (i=0;i<=b;i=i+dx){
        r = r + (0.5*(i+(i+dx))*dx);
    }
    for (i=0;i<=(2*a);i=i+dx){
        theta = theta + (0.5*(1+1)*dx);
    }
    L2 = theta * r ;
    return L2;
}


