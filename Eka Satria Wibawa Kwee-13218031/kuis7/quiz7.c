#include <stdio.h>
#include <math.h>

int main(){
    float Qgain = 1;// Liter/detik
    float box_size = 1;// 1X1X1 Meter
    float hole_dia = 5; //cm
    float h,Q,t,v,dt,loss,gain,volume,pi,g;
    FILE *output;
    //Cari h;
    pi = 3.14159;
    g = 9.80665;
    dt = 0.1;
    t = 0;
    h = 0;
    output = fopen("output.csv","w");
    while(t < 350){

        gain = Qgain * 0.001 * dt;
        v = sqrtf(2*g*h);
        loss = (pi*2.5*2.5*0.0001)*v*dt;
        volume += (gain - loss);
        h = volume/1;
        printf("%f %f\n",h,t);
        t += dt;
    }
    fclose(output);
}