#include <stdio.h>
#include <math.h>

// tipe data
double keran=0.001,g=10,diameter=0.05,
       rho = 1000,h=0,t,v,A,temp,Q=0,
       dt = 0.6;
int stop = 0;

// program utama
int main (){
    // membuat file baru untuk ketinggian dan time
    FILE *fp1;
    FILE *fp2;
    fp1 = fopen("tinggi.txt", "w+");
    fp2 = fopen("time.txt", "w+");
    // luas lubang
    A = M_PI*(diameter/2)*(diameter/2);
    while (stop == 0){
        // perhitungan debit kebocoran
        v = sqrt(2*g*h);
        Q = A*v;
        // perhitungan ketinggian
        if ((keran - Q)>0.000001){
            h = (keran - Q)*dt + h;
            t=t+dt;
            // menulis ke dalam file
            fprintf(fp1, "%.5f \n", h);
            fprintf(fp2, "%.5f \n", t);
            stop = 0;
        } else {
            stop = 1;
        }
    }
    // menutup file
    fclose(fp1);
    fclose(fp2);
    return 0;
}