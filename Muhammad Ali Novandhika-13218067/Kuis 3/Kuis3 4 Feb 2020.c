/* EL2008 Pemecahan Masalah dengan C 2019/2020
* Hari dan Tanggal : Selasa, 4 Februari 2020
* Nama (NIM) : Muhammad Ali Novandhika (13218067)
* Nama File : Kuis3 4 Feb 2020.c
* Deskripsi : Error Integral luas lingkaran
*/

#include <stdio.h>
#include <math.h>
#define pi 3.14

double integral_r (double a);
double integral_theta (double a);

double integral_r (double a){
    double i=100;
    double hasil=0;
    double k;
    for (k=0;k<i;k+=1){
        hasil+=(7/i)*(7*(k+0.5)/i);
        }
    //printf("%f\n",hasil);
    return hasil;
}

double integral_theta (double s){
    double i=200*pi;
    double hasil=0;
    double k;
    for (k=1;k<i+1;k+=1){
        hasil+=(0.01);
        }
    //printf("%f\n",hasil);
    return hasil;
}

double main(){
    double r=7;
    double hasil,a,b,c;
    a= integral_r(r);
    b= integral_theta(r);
    c= pi*49;
    hasil = c-(a*b);
    printf("Hasil rumus = %0.20f \n",c);
    printf("Hasil fungsi = %0.20f \n",a*b);
    printf("Hasil error = %0.20f \n",hasil);
    return 0;
}
