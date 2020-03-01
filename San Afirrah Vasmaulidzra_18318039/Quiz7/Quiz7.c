#include <stdio.h>
#include <math.h>
#define g 9.8
#define phi 3.14159265358979323846
#define r 0.0025 //jari-jari lubang
#define DebitM 1 //liter/second
#define volume 1 //m3

float turun(float dt, float h){
    float v;
    v = sqrt(2*g*h);
    return (phi*r*r*v*dt);
}


void main(){
    float  h, t, dt, naik,vol;
    h,t =0;
    dt =0.1;
    


   FILE *data;
    data = fopen("Quiz7.csv", "w");

    //asumsi ketinggian adalah 1m, dengan luas alas 1m2

    while( h<= 1){
        naik = DebitM*0.001*dt; //volume air yang masuk
        vol = vol+(naik - turun(dt, h));
        h = vol/1;
        fprintf(data, "%f;%f\n", h, t);
        t =t +dt;
    }
    fclose(data);
}