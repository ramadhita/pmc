//Nama      :   Martinus William Hartono
//Jurusan   :   Teknik Elektro
//NIM       :   13218044
//Tanggal   :   25 Februari 2020
//EL2008 - Pemecahan Masalah dengan C - KUIS 7

/*Program untuk menghitung ketinggian setiap waktu dari wadah yang bocor dengan debit input 1L/s*/

#include <stdio.h>
#include <math.h>

const double g=9.8;
const double pi=3.14159265359;
const double hole_radius=0.025;         //hole radius in cm
double hole_area;
double h[30000];
double input_debit=0.001;               //1L/s
const double dt=0.01;                   //10ms

double flow_velocity(double h);
double dh(double h);

int main(void)
{
    FILE *fp;
    fp = fopen("martinus_13218044_heightVStime.csv", "w+");

    int i=1;
    hole_area = pi * hole_radius * hole_radius;
    h[0] = 0;
    h[i] = h[i-1] + dh(h[i-1]);

    while(h[i-1] < h[i])
    {
        i = i+1;
        h[i] = h[i-1] + dh(h[i-1]);
    };

    for(i=0;i<30000;i++)
    {
        printf("t=%.2fs | h=%fm\n", i*0.01,h[i]);
        fprintf(fp, "%.2f,", i*0.01);
        fprintf(fp, "%f\n", h[i]);
    };

    return(0);
}

double flow_velocity(double h)
{
    return (sqrt(2 * g * h));
}

double dh(double h)
{
    return(input_debit * dt - (flow_velocity(h) * hole_area * dt));
}

