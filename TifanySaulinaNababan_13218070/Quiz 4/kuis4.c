#include <stdio.h>
#include <math.h>
#define R 10000
#define C 0.000001
#define vi 5
#define dt 0.001

double voltage(double waktu){
    double vol;
    if (waktu <=0) {
        vol = 0;
    }
    else {
        vol = ((voltage(waktu-dt))*R*C + (vi*dt))/(R*C+dt);
    }
    return (vol);
}

int main(){
    FILE *res = fopen("stepresponse.csv", "w");
    double tmax=0.2, vo, t;
    for (t=0; t<=tmax; t+=dt){
        vo = voltage(t);
        fprintf(res,"%.4lf;%.3lf\n",t,vo);
    }
    fclose(res);
    return 0; 
}
