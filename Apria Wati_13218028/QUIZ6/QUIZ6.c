#include<stdio.h>

// fungsi grafik pertama
float f1 (float x){
    if (x>=1 && x<=3){
        return (0.5*(x-1));
    }
    else
    {
        return (0);
    }
}

// fungsi grafik kedua
float f2 (float x){
    if (x>=-1 && x<=0){
        return (x+1);
    }
    else if (x>0 && x<=1){
        return (-x+1);
    }
    else
    {
        return (0);
    }
}

int main(){
    FILE* fp;
    fp = fopen("QUIZ6.txt", "w+");
    float dt=0.001;
    float T,t, konvolusi;

//mencari nilai konvolusi dari kedua grafik
    for (t=0; t<=5; t+=dt){
        konvolusi=0;
        for (T=0; T<=t; T+=dt){
            konvolusi += (f1(T) * f2(t-T) * dt);
        }
        fprintf(fp, "%f %f\n", t, konvolusi);
    }
    fclose(fp);
}