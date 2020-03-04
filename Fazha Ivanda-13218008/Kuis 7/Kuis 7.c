// Fazha Ivanda 13218008
// EL2008 K02
// Kuis 7


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double t,dt,diameter,luas,Qin,Qout,h,dh,v,vmax; // Variabel yang digunakan dalam program
    FILE *fp;
    char *filename = "tangki.txt";
    fp = fopen(filename,"w");
    t = 0; // Waktu awal
    dt = 0.01; // perubahan waktu
    diameter = 5 * 0.01; // diameter lubang dalam m
    luas = 3.14 * pow(diameter,2) / 4; // luas permukaan lubang dalam m
    h = 0; // ketinggian air awal
    v = 0; // volume awal air
    Qin = 10e-6; // Debit air masuk
    
    // Perhitungan
    while (v!=vmax){
        t += dt;
        Qout = luas * sqrt(2*10*h) * dt;
        dh = Qin - Qout;
        h += dh;
        vmax = v;
        v += dh * 1;
        // Output program
        printf("%lf\n", v);
        // Output pada file
        fprintf(fp,"%lf\n",v);
    }
    return (0);
}