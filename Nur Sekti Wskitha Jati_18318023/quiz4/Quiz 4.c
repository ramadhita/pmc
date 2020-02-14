#include<stdio.h>
#define R 10000
#define C 0.000001

float vt(float t){
    float f, dt, a, b, c;
    dt = 0.001;
    a = 1.0;    /*koefisien dv/dt */
    b = 1.0/(R*C);  /*koefisien v*/
    c = (-5.0)/(R*C);   /*konstanta*/
    if (t <= 0){
        f = 0;
    } else{
        f = (a*vt(t-dt)-(dt*c))/(a+b*dt);
    }
    return f;   /*f = nilai fungsi*/
}

int main(){
    FILE *fileku;
    fileku = fopen("file.csv","w");
    float dt = 0.001;
    for (float t = 0; t<0.07; t+=dt){
        fprintf(fileku, "%f; %f\n", t, vt(t));
    }
    fclose(fileku);
}
