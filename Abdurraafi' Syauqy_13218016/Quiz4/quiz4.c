#include<stdio.h>
#include<string.h>

double R = 10000;
double C = 0.000001;
double Vi = 5;
double Vc = 0;
double I;
double dt = 0.00001;
double t = 0;
double Vco;

int main (){
    I = Vi/R;  
    FILE *fv; 
    FILE *ft; 
    fv = fopen("/Vc.txt", "w+");
    ft = fopen("/t.txt", "w+");
    while (((Vi - Vc)>=dt) && (Vc <= 5)){
        Vco = Vc;
        Vc = Vco + (((Vi-Vco)*dt)/(R*C));
        fprintf(fv, "%.3f\n", Vc);
        t = t + dt;
        fprintf(ft, "%.3f\n", (t*1000));
    }
    fclose(fv);
    fclose(ft);
    return 0;
}