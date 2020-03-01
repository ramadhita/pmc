#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Qin 0.001
#define D 0.05
#define hmax 1
#define g 9.8
#define dt 0.01

int main(){
    float t, temp, h=0.00000000000001, h0=0;
    float A1= 1;                                //luas tangki
    float A2= 0.25 * D * D * 3.14;              //luas lubang bocor
    int stabilize=0;
    FILE *fp;
    fp= fopen("tangki.csv", "w+");
    for(t=0; h<=hmax && stabilize<3; t+=dt){    //perhitungan akan berhenti ketika ketinggian mencapai titik stabil
        h= h + (Qin-A2*sqrt(2*g*h0))*dt;
        if(h==h0){
            stabilize= stabilize+1;
        }
        fprintf(fp, "%.8f,%.8f\n", t, h);
        h0= h;
    }
    fclose(fp);
}