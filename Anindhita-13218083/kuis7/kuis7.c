/*
13218083
Anindhita
*/

#include <stdio.h>
#include <math.h>

#define g 9.80665 // gravitasi
#define Qkeran  0.001 // debit keran
#define dt 0.001 // delta waktu
#define kap 1 // kapasitas bak
#define a 1 // luas bak
#define dbocor 0.05 // diameter lubang

int main() {

    // luas lubang
    double abocor = M_PI * pow(dbocor,2) / 4;

    // kondisi awal
    double vol = 0, t = 0;
    double h, Qbocor; // tinggi bak dan debit lubang

    FILE *fp;
    fp = fopen("outfile.csv","w");

    fprintf(fp,"t,V\n%f,%f\n",t,vol);
    do {
      h = vol/a;
      Qbocor = sqrt(2*g*h) * abocor;
      t += dt;
      vol += dt * (Qkeran - Qbocor);
      fprintf(fp,"%f,%f\n",t,vol);
    } while (vol < kap && t < 180);

    fclose(fp);
    return 0;
}