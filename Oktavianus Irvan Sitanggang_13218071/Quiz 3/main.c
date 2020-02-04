#include "stdio.h"
#include "math.h"
#include "string.h"
#include "rieman.h"

#define PI 3.141592653589793238462643383279502884197169399

double f_r(double r){
    // function r
    return r;
}

double f_theta(double theta){
    //function theta
    return 1;
}
int main(){
    double r = 7;
    double res;
    // integrasi
    res = int_rie(0,r,f_r) * int_rie(0, 2*PI, f_theta);

    printf("Hasil Riemann   : %.23f \n", res);
    printf("Hasil perkalian : %.23f\n", PI*r*r);
    printf("Perbedaan       : %.23f\n", res - PI*r*r);

//     Hasil Riemann   : 153.93804002149551000000000
//     Hasil perkalian : 153.93804002150000000000000
//     Perbedaan       : -0.00000000000449063009000
    return 0;
}