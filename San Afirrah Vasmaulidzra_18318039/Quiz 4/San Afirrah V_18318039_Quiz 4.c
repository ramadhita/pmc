#include <stdio.h>
#include <math.h>


float Voltage(float (time), float (r), float (c), float (dt)){ //memghitung tegangan kapasitor berdasarkan waktu
    //inisialisasi
    float x,y, tc, tmax,vi ,vol;
    vi = 5;
    tc = r*c;
    x = 1/tc;
    y = vi/tc;
    if (time <=0) {
        vol = 0; //nilai tegangan awal
    }
    else {
        vol = (Voltage(time-dt, r, c, dt)+(y*dt))/(1+(x*dt));  //rumusnya
    }
    return (vol);
}

int main(){
    FILE *sr;
    sr = fopen("StepResponse.csv", "w"); //membuka file csv yang akan diwrite 
    float r,c, tc, tmax, dt,vo;
    //inisialisasi
    r =  10000.0;
    c = 0.000001;
    dt = 0.001;
    tmax = 5*r*c;
    for (float t=0; t<= tmax; t = t+dt){
        vo = Voltage(t, r, c, dt);
        // memasukan nilai kedalam csv
        fprintf(sr, "%f,", t);
        fprintf(sr, "%f\n", vo);
    }
    fclose(sr); //menutup file csv
    return 0; 
}