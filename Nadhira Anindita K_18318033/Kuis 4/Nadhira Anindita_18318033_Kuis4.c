#include <stdio.h>
#include <math.h>
#define C 0.000001
#define R 10000
#define vs 5

float vt (float t){
    float hasil,b,delta,d;
    b = 1/(R*C);
    d = vs/(R*C);
    delta = 0.00001;
    if (t<=0){
        hasil = 0;
    }
    else{
        hasil = (vt(t-delta)+d*delta)/(1+b*delta);
    }
    return(hasil);
}

int main (){

    float deltat;
    float j;
    float tmax;
    tmax= 5*R*C;
    deltat=0.00001;

    FILE *infile1;
    infile1 = fopen("hasil.txt", "w+");
    
    for (j=0;j<=tmax;j+=deltat){
        fprintf(infile1,"%f, %f \n",j,vt(j));
    }

    fclose(infile1);
    return(0);
    
}