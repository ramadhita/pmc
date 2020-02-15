#include <stdio.h>
#include <math.h>



int main(){    
    double temp, V, Vo, dt, RC;
    int i;
    double t= 0;
    double Vs= 5;
    dt= 0.01;
    RC= 10000 * 0.000001;
    Vo= 0;
    FILE *fp;
    fp= fopen("a.csv", "w+");
        for (i=0; i>=0; i+=1){
            V= (Vs/RC + Vo / dt) * (dt*RC) / (dt+RC);
            t= t+dt; 
            if (Vo<=5){
            fprintf(fp, "%lf,%lf\n", V);
            }
            temp = V;
            V= Vo;
            Vo= temp;   
        }
    return 0;
}