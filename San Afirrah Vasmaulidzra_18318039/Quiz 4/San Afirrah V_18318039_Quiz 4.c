#include <stdio.h>
#include <math.h>


float Voltage(float (time)){ //memghitung tegangan kapasitor berdasarkan waktu
    //inisialisasi
    float x,y, r,c, tc, tmax,vi ,vol, dt;
    r =  10000.0;
    c = 0.00001;
    vi = 5;
    tc = r*c;
    x = 1/tc;
    y = vi/tc;
    dt = 0.001;
    if (time <=0) {
        vol = 0; //nilai tegangan awal
    }
    else {
        vol = (Voltage(time-dt)+(y*dt))/(1+(x*dt));  //rumusnya
    }
    return (vol);
}

int main(){
    FILE *sr;
    sr = fopen("StepResponse.csv", "w"); //membuka file csv yang akan diwrite 
    float r,c, tc, tmax, dt,vo;
    //inisialisasi
    r =  10000.0;
    c = 0.00001;
    dt = 0.001;
    tmax = 5*r*c;
    for (float t=0; t<= tmax; t = t+dt){
        vo = Voltage(t);
        // memasukan nilai kedalam csv
        fprintf(sr, "%f,", t);
        fprintf(sr, "%f\n", vo);
    }
    fclose(sr); //menutup file csv
    return 0; 
}