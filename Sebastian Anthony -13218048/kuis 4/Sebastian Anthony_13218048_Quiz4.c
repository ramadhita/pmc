#include <stdio.h>
#include <math.h>
int main(){
    FILE *fp;

    fp = fopen("coba.csv", "w+");
    double V1;
    int i;
    double Ix;
    double Vo;
    double t;
    double Vt;
    V1 = 5;
    Ix = 0.5 *0.001;
    Vo = 0;
    Vt = 0;
    for (i =1; i<40000; i++){
        
        Vo = (1000000)*(Ix*i*0.0001);
        
        t = i*0.0001;
        fprintf(fp, "%.2lf ", Vt );
        fprintf(fp, "%lf \n", t);
        
        Vt = Vt + Vo;
        Ix = (V1 - Vt)* 0.0001;
    }
    
    

    fclose(fp);
    return(0);
    }