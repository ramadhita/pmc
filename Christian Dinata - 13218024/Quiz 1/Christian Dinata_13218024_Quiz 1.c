#include <stdio.h>
#include <math.h>
/*
Program menampilkan output berupa:
    - tracking position tiap selang 10 ms
    - jarak terjauh yang ditempuh objek 
*/
#define vo 50.0
#define g 10.0
#define angle 60

int main (void){
    double x, y;
    double t = 0;
    while (y>=0){
        x = vo * cos(angle*M_PI/180) * t;
        y = ((vo * sin(angle*M_PI/180) * t) - (0.5*g*t*t)); /* M_PI = 3.14159..... */ 
        printf("posisi (x,y) saat t=%f adalah ", t);
        printf("(%f,%f)\n", x, y);
        t = t + 0.01;
   }
   printf("Jarak terjauh yang ditempuh adalah %f", x);
    return (0);


}