#include <math.h>
#include "function.h"
#define PI 3.14159265358979323846


double luasRumus (double radius){
    return PI * radius *radius;
}
double luasRiemann  (double radius){
    int n= 1000000000;
    int i;
    double sum1=0;
    double sum2=0;
    double dr,dt;
    dr= radius/n;
    dt= 2 * PI / n;
    for (i=0; i<n; i+=1){           //integral terhadap dr dari 0 hingga nilai radius
        sum1 += (i * dr) * dr;
    }
    for (i=0; i<n; i+=1){           //integral terhadap dt(theta) dari 0 hingga 2*PI
        sum2 += sum1 * dt;
    }
    return sum2;
}