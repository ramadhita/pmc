/* Quiz 3: Double integral to count the area of a circle,
   compare error to when using A = PI.r.r
*/

#include <stdio.h>

void main (){
    // LIBRARY
    const double PI = 3.141592653589793238;
    const double incr = 0.000001; // delta x
    double r; // for input

    // ALGORITHM
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%lf", &r);
    double result = 0;
    double xlow = 0;
    double xhigh;
    double xbar;

    // Integral from 0 to r for f(r) = r
    while (xlow <= r){
        // look for upper x
        xhigh = xlow + incr;
        // look for the x in the middle between xlow and xhigh
        xbar = (xhigh + xlow)/2;
        // count the result
        result = result + (xbar * incr);
        // increment w/ delta x
        xlow = xlow + incr;
    }
    
    // Integral from 0 to 2PI for f(theta) = result of above integral (a constant)
    xlow = 0;
    double result2 = 0;
    while (xlow <= (2*PI)){
        result2 = result2 + (result * incr);
        //inrement w/ delta x
        xlow = xlow + incr;
    }

    printf("\nHasil:");
    printf("\nLuas menggunakan Riemann: %lf", result2);
    printf("\nLuas menggunakan PI*r*r : %lf", (PI*r*r));
    printf("\nError: %lf", (result2 - PI*r*r));

}