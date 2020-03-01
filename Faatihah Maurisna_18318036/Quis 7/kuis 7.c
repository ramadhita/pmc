#include <stdio.h>
#include <math.h>

double debitkran=0.001,r=0.025,h=0,t,v,A,temp,Q=0,dt = 0.1;
int stop = 0;

int main (){
    FILE *grafik;
    grafik = fopen("debit.txt", "w+");
    A = M_PI*r*r;
    while (stop == 0){
        v = sqrt(2*10*h);
        Q = A*v;
        if ((debitkran - Q)>0.000001){
            h = (debitkran - Q)*dt + h;
            t=t+dt;
            fprintf(grafik, "%.5f; %.5f\n", t, h);
            stop = 0;
        } else {
            stop = 1;
        }
    }
    printf("Sukses data terisi!");
    fclose(grafik);
    return 0;
}

