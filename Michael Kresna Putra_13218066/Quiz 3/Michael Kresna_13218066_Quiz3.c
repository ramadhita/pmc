#include <stdio.h>
#include <math.h>
#define phi 3.14;

double fungsi(double x, double r){
    double fx;
    fx = sqrt((r*r)-(x*x));
    return(fx);
}

double integral(double r)
{
    double hasil, i;
    hasil=0;
    
    for (i=-r;i<=r; i= i+0.0001){
        hasil = hasil + (fungsi(i,r)*0.0001);
    }
    return (2*hasil);
}


int main() {
    double manual,r,error;
    
    scanf("%lf", &r);
    manual=3.14159265*r*r;
    printf("hasil manual        : %f\n",manual);
    printf("hasil integral      : %f\n",integral(r));

    error=(fabs(integral(r)-manual)/manual)*100;
    printf("hasil error nya     : %f Persen", error);
    return 0;
}