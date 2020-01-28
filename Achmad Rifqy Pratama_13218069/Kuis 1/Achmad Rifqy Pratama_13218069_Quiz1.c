/* 
NAMA    :   ACHMAD RIFQY PRATAMA
NIM     :   13218069
*/

#include <stdio.h>
#include <math.h>
#define v 50
#define sin60 0.866
#define cos60 0.5
#define g 10

/*Lempar bola dengan sudut 60 derajat dengan kecepatan awal
50m/s, buatlah program yang dapat :
1. Tracking posisi (x,y) setiap 10ms
2. Tentukan jarak terjauhnya.
*/

int main (void)
{
    double x,y,t;
    
    for (t=0; t<=(2*v*sin60/g); t+=0.01)
    {
        x = v*t*cos60;
        y = (v*sin60*t)-(0.5*g*t*t);
        printf("Posisi (x,y) setelah %.3f detik adalah (%.3f , %.3f)\n", t,x,y );
    }

    printf("\nJadi, jarak horizontal terjauh yang ditempuh oleh bola adalah %.3f\n", v*cos60*(2*v*sin60/g));

    return(0);
}