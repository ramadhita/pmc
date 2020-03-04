#include <stdio.h>
#include <math.h>
#define pi M_PI

int main (){
    double Qin=0.001,g=10,r=0.025,
       rho = 1000,h=0, t, v,
       A, Qout=0,
       dt = 1;
    int stop = 0;
    FILE *fileku;
    fileku = fopen("bak.csv", "w");
    A = pi*r*r;
    while (stop == 0){
        v = sqrt(2*g*h);    //kecepatan bocor
        Qout = A*v;    //debit bocor
        if ((Qin - Qout)>0.000001){
            h += (Qin - Qout)*dt;    //ketinggian air
            t += dt;
            fprintf(fileku, "%f; %f\n", t, h);
            stop = 0;
        } else {
            stop = 1;
        }
    }
    printf("waktu maksimumnya %lf detik", t);
    fclose(fileku);
    return 0;
}
