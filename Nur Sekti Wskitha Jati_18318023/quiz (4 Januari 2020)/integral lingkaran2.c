#include<stdio.h>
#define r 7
#define pi 3.14

int main(){
    float L1 = pi*r*r;
    float L2 = 0;
    int a = 0;
    int b = 7;
    float c = 2*pi;
    float n = 7777;
    float dx = (b-a)/n;
    float dy = (c-a)/n;
    float jmh1 = 0;
    float jmh2 = 0;
    for(float i=0; i<=r; i+=dx){
        jmh1 += i*dx;
    }
    for(float i=0; i<=2*pi; i+=dy){
        jmh2 += jmh1*dy;
    }
    L2 = jmh2;
    float galat = L2-L1;
    printf("L1 = %f\n", L1);
    printf("L2 = %f\n", L2);
    printf("galat = %f\n", galat);
}

