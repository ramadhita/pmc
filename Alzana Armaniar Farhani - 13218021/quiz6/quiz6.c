/* NIM: 13218021
Nama: Alzana Armaniar Farhani
Keterangan: Quiz 6*/

#include <stdio.h>
#include <stdlib.h>

const float dT= 0.01;
float f1(float x);
float f2(float x);
float convolve(float t);

int main(){
    FILE *f;
    float t, y;
    int length_y= (3+3)-1;              //range grafik hasil konvolusi akan sama dengan range f1 + range f2 - 1
    f= fopen("convolution.csv", "w+");
    for(t=0; t< length_y; t+=dT){
        y= convolve(t);
        fprintf(f, "%.3f,%f\n", t, y);
    }
    fclose(f);
}

float f1(float x){
    if (x>=1 && x<=3)
            return (x/2-0.5);
    else
        {
            return 0;
        }
}

float f2(float x){
    if (x>=-1 && x<0){
            return x+1;
    }
    else if(x>=0 && x<=1){
            return 1-x;
    }
    else
    {
        return 0;
    }
}

float convolve(float t){
    float T;
    float sum=0;
    for(T=0; T<10; T+=dT){
        sum= sum + (f1(T) * f2(t-T) * dT);
    }
    return sum;
}