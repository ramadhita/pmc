#include <stdio.h>
#include "func.h"

float f1(float x){
    if (x>=1 && x<=3)
            return (x/2-0.5);
    else
        {
            return 0;
        }
}

float f2(float x){
    if (x>=-1 && x<=0){
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

void convolve(float t, float y){
    int a, b;
    float dT=0.01;
    float T;
    float sum=0;
    for(T=0; T<10; T+=dT){
        a= f1(T);
        b= f2(t-T);
        sum= sum + (a * b * dT);
        printf("t:%.2lf | sum:%lf\n",t,sum);
    }
    y= sum;
}