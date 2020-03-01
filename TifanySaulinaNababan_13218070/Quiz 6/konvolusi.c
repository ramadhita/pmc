#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <string.h>

double f1(double t){
    if ((t<=1) || (t>=3)){
        return 0;
    }
    else {
        return 0.5*t-0.5;
    }
}

double f2(double t){
    if ((t>-1) && (t<0)){
        return (t+1);
    }
    else if ((t>=0) && (t<1)){
        return (1-t);
    }
    else {
        return 0;
    }
}

int main(){
    double x, t;
    double dx=0.01, dt=0.01;
    double sum;

    FILE *conv;
    conv = fopen("konvolusi.csv", "w");
    
    fprintf(conv,"waktu(t);graph1;graph2;Hasil Konvolusi \n");
    for (t=-1;t<=5;t+=dt){
        sum = 0;
        for (x=0; x<t; x+=dx){
            sum += f1(x) * f2(t-x) * dx;
        }
        fprintf(conv,"%.2lf;%.3lf;%.3lf;%.3lf \n", t, f1(t), f2(t), sum);
    }
    fclose(conv);
    return 0;
}