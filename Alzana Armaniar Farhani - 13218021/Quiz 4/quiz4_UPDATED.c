#include <stdio.h>

#define R 10000.00
#define C 0.000001
#define Vs 5.00
#define dt 0.001

int main(){    
    double temp, V, RC;
    int i;
    double t= 0;
    double Vo= 0;
    RC= R*C;
    FILE *fp;
    fp= fopen("capacitor.csv", "w+");
    fprintf(fp, "%lf,%lf\n", Vo, t);
        do{
            V= (Vs/RC + Vo / dt) * (dt*RC) / (dt+RC);
            t= t+dt; 
            fprintf(fp, "%lf,%lf\n", V, t);
            temp = V;
            V= Vo;
            Vo= temp;
        }
        while(Vo < 5.00);
    fclose(fp);
    return 0;
}