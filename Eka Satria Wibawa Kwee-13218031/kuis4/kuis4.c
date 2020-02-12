#include <stdio.h>

int main(){
    double vo = 0;
    double vi = 5;
    double r = 10000;
    double c = 0.000001;
    double dt = 0.0009;
    double t = 0;
    double i = 0;
    FILE *out;
    out = fopen("output.csv","w");
    fprintf(out,"vo,t\n");
    fprintf(out,"0,0\n");
    while(i<= 0.226){
        t += (dt*1000);
        vo = (vi*dt + vo*r*c)/(r*c+dt);
        fprintf(out,"%lf,%lf\n",vo,t);
        i += dt;
    }
}