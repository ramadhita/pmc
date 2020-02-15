// Fazha Ivanda / 13218008
// EL2008 PMC K-02
// Kuis 5

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char *filename = "hasil.txt";
    float dt;
    double vc,vi,i,c;
    int r = 10000;
    c = 0.000001;
    dt = 0.0001;
    vc = 0;
    vi = 5.0000;
    // Membuka file
    fp = fopen(filename, "w");
    i = vi/r;
    // Perhitungan Tegangan
   do{
       vc += i * dt / c;
       i = (vi - vc)/r;
       // Menampilkan tegangan pada exe program
       printf("%lf\n",vc);
       // Menuliskan tegangan pada file "hasil.txt"
       fprintf(fp, "%lf\n", vc);
   } while (vi - vc >= dt);
   // Menutup file
   fclose(fp);
}