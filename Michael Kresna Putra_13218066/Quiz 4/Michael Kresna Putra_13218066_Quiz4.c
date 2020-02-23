/*Nama         :Michael Kresna Putra
NIM           :13218066
Tanggal       :12 Februari 2020

/*Program untuk melakukan penulisan koordinat dari tegangan kapasitor pada rangkaian RC*/

#include<stdio.h>
#include<string.h>
#include<math.h>

//inisialisasi
double vi=5;
double dt=0.0001;
double r=10000;
double c=0.000001;
double x=1000;
double t=0;
double vc=0;
double i;

int main(){
    FILE *fptr; //deklarasi file
    fptr= fopen("Grafik.csv", "w");
    for (i=0; i<0.1; i+=dt){  //looping untuk membuat koordinat
        vc = (((vc*r*c)+(vi*dt)))/(r*c+dt);
        t+=(dt*x);
        fprintf(fptr,"%lf,", t); 
        fprintf(fptr, "%lf\n", vc);
    }
    fclose(fptr);
return(0);
}