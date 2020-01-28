/* NIM : 13218021
Nama: Alzana Armaniar Farhani */

#include <stdio.h>
#include <math.h>

#define init_velocity 50.00
#define angle 1.0472        //60 degrees in radians
#define grav 10.00

int main(void){
    double Tmax, x, y, Vx, Vymax, cosa, sina, Xmax;
    float t;
    sina= sin(angle);
    cosa= cos(angle);
    Vymax= init_velocity * sina;
    Vx= init_velocity * cosa;
    Tmax= 2 * (Vymax / grav) * 100;     //Tmax adalah waktu gerak parabolik dalam centi-second.
    for (t=0; t <= Tmax; t+=1) {        //t adalah waktu dalam 1 centi-second (10 ms).
        x= Vx * (t/100);                //agar nilai posisi dalam meter maka t diubah ke sec / dibagi 100.
        y= ((Vymax * (t/100)) - 0.5 * grav * (t/100) * (t/100));
    printf("Position when %.0f ms is ", t*10);
    printf("(%f, ", x);
    printf("%f) m.\n", y);
    }
    Xmax= Vx * (Tmax / 100);
    printf("The horizontal range is %f m.", Xmax);
    return(0);
}