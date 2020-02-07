#include <stdio.h>
#include <math.h>
#define phi 3.14

double integral_r (double a);
double integral_theta (double a);

double integral_r (double a)
{
    double i = 100;
    double hasil = 0;
    double k;
    for (k = 0;k < i;k += 1)
    {
        hasil += (7 / i) * (7 * (k + 0.5) / i);
        }
    return hasil;
}

double integral_theta (double s)
{
    double i = 200 * phi;
    double hasil = 0;
    double k;
    for (k = 1;k < i+1;k += 1)
    {
        hasil+=(0.01);
        }
    return hasil;
}

double main(){
    double r = 7;
    double hasil,a,b,c;
    a = integral_r (r);
    b = integral_theta (r);
    c = phi * 49;
    hasil = c-(a*b);
    printf("Rumus = %0.20f \n",c);
    printf("Fungsi = %0.20f \n",a * b);
    printf("Error = %0.20f \n",hasil);
    return 0;
}