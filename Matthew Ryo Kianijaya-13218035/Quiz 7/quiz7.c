/*  QUIZ 7
    Volume penampung: 1 m^3
    Keran: 1 L/detik
    Tiba-tiba bocor di dasar, dgn bentuk permukaan lingkaran, d =  5 cm
    Volume 0 -> penuh cari waktu (t) yang diperlukan, lalu buat grafik h terhadap t.



*/
#include <stdio.h>
#include <math.h>

void main(){
    // RUMUS FLUIDA DINAMIS

    // Q = A.v // area x velocity
    // Q = V/t // volume / time

    // v = sqrt(2.g.h)

    // ASUMSIKAN PENAMPUNG KUBUS DENGAN VOLUME 1 m^3

    // LIBRARY
    double d = 0.05;            // diameter lubang: 5 cm
    double h = 0;               // height
    double t = 0;               // time
    double delta_t = 1;         // time increment
    double Qin = 0.001;         // Debit in = 0.001 m^3/s
    const double g = 9.80665;   // gravity = 9.80665 m/s^2
    const double PI = 3.14159;  // PI
    FILE *fp;                   // file output

    // ALGORITHM

    // open file to write on
    fp = fopen("result.csv", "w");

    // print header
    fprintf(fp, "t,h\n");

    // while the container is not full & in time limit
    while (h <= 1 && t <= 200){

        h = h + (Qin*delta_t/1) - (PI*(d/2)*(d/2)*(sqrt(2*g*h))*delta_t/1);
        fprintf(fp, "%lf,%lf\n", t, h);
        t = t + delta_t;

    }

    fclose(fp);
    
}