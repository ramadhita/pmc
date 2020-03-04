/* Nama     : Michael Kresna Putra
NIM         : 13218066
Deskripsi   : Menghitung lama pengisian air
*/

#include <stdio.h>
#include <string.h>
#include <math.h>


int main(){
    double dt=0.001;
    double g=10;
    double Q=0.001;
    double dh=0;
    double h0=0;
    double Aout=(3.14*0.05*0.05)/4;
    double A=1;
    double t=0;
    double h=0;
    double i=0;

    FILE *fptr;
    fptr=fopen("debit.txt","w+");
    while (h<0.012892 || dh<0.00001){
        h0=h;
        dh=(Q-(sqrt(2*g*h0)*Aout))*(dt/A);
        h=h0+dh;
        t+=dt;
        fprintf(fptr, "%lf, %lf\n", t, h);
    }
    fclose(fptr);
    return(0);
}