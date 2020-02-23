#include <stdio.h>
#include <stdlib.h>


double grf1(double x);
double grf2(double x);
void main(){
    double k, m;
    double dt = 0.01;
    double Value = 0;
    double add = 0;
    FILE *fp1;
    fp1 = fopen("hasil.txt", "w");
    m = 0;
    while (m < 6)
    {
        Value = 0;
        for (k = 0; k< m; k+=dt)
        {
        Value += grf1(k) * grf2(k - m) * dt;
        }
        fprintf(fp1,"%lf;%lf \n", m, Value);
        m += dt;
    }
    fclose(fp1);
}
double grf1(double x){
    double hasil1;
    if((x>=1) && (x<=3)){
        hasil1 = (x-1)/2;
    }
    else{
        hasil1 = 0;
    }
    return hasil1;
}
double grf2(double x){
    double hasil2;
    if((x>=-1) && (x<=0)){
        hasil2 = 1 + x;
    }
    else if((x>0) && (x<=1 )){
        hasil2 = 1 - x;
    }
    else{
        hasil2 = 0;
    }
    return hasil2;
}

