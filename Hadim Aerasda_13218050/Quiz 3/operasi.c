#include "string.h"
#include "math.h"
#include "operasi.h"
#include "stdio.h"
int i,j;

double pangkat(double x,double n)
{
    double result;
    result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * x;
    }
    return result;
}

double integral(double delta_r, double ends, double pembagi)
{
    double hasil;
    while (delta_r<ends)
    {
        hasil = hasil + ((2*pi*delta_r)/pembagi);
        delta_r += 1;
    }
    return hasil;
}

void input(double *a,double *b)
{
    printf("Masukkan Jari-Jari : ");
    scanf("%lf", a);
    printf("Tingkat Ketelitian (5) : ");
    scanf("%lf", b);
}
