#include <stdio.h>
#include <math.h>
#define GRA 10
#define vo 50
#define sdt 60

int main(void)
{
    float velx,
        vely,
        ang,
        x,
        y,
        time,
        xmax,
        timemax;
    x=0;
    y=0;
    xmax= (vo*vo*0.5*sqrt(3)/GRA);
    timemax=xmax/(vo*0.5);
    time = 0.01;
    while (time<=timemax) {
        x=vo*time*0.5;
        y=(vo*time*0.5*sqrt(3))-(0.5*GRA*time*time);
        printf("x : %f ", x);
        printf("y : %f .\n", y);
        time+=0.01;
    }
    printf("x maximum adalah %f ", xmax);
    return(0);
}