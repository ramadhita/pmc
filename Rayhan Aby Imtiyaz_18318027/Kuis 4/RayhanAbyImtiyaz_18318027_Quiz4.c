#include <stdio.h>

/*Fungsi menghitung Vo(t) setiap saat*/
float Vo(float t) {
    float 
        R = 10000.0,
        C = 0.000001,
        Vi = 5,
        dt = 0.00001, /*sampling setiap 10us*/
        b =1/(R*C), /*konstanta orde 1 persamaan differensial*/
        c = Vi/(R*C); /*konstanta orde 0 persamaan differensial*/
    float V;
    if (t > 0) {
        /*First Order Differential*/
        V = (Vo(t-dt) + c*dt)/(1+b*dt); 
    }
    else
        /*Vo(t)=0 ketika t = 0*/
        V = 0;
    
    return V;
}

/*Fungsi main*/
int main() {
    float 
        R = 10000.0,
        C = 0.000001,
        dt = 0.00001;
    FILE *f_step;
    f_step = fopen("D:\\Documents\\Docs\\PMC\\Sandbox\\RCStepResp.txt","w+");
    for (float t=0; t <= (5*R*C); t += dt) {
        fprintf(f_step,"%f, %f\n",t,Vo(t));
    }
    fclose(f_step);
    return(0);
}