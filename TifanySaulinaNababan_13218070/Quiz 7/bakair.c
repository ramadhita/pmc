#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define g 10
#define phi 3.1415926

//satuan dalam m
//d = 5cm = 0.05 m, r = 0.025
//vi = 1L/s = 1m^3/s
//tinggi bak = 10cm = 0.01m

int main(){
    float vi=0.001, t=0, waktu=0, vol=0;
    float tinggi_bak, permukaan_hole, masuk, keluar, h;
    float dt=0.1;

    FILE *air;
    air = fopen("bakair.csv", "w+");

    permukaan_hole = phi*0.025*0.025;
    tinggi_bak = 0.01;
    
    fprintf(air, "waktu;tinggi\n");
    while (h <= tinggi_bak){
        masuk = vi*dt;
        keluar = permukaan_hole*sqrt(2*g*vol)*dt;
        vol += masuk - keluar;
        h = vol;
        fprintf(air, "%.2f;%.3f\n", t, h);
        t += dt;
    }

    fclose(air);

    return (0);
}