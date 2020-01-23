
#include <stdio.h>
#include <math.h>

int main (void) {

    float Vox,Voy,t,vy,x,y,xmaks;
    t=0;
    Voy = 50 * 0.5 * sqrt(3);
    Vox = 50 * 0.5;
    y = 0;

    while (y >= 0)
    {
        x = Vox * t ;
        y = Voy * t - (0.5) * 10 * t * t ;
        printf("Bola berada pada posisi %f %f",x,y) ;
        t = t + 0.01 ;
        xmaks = ((2 * Voy) / 10) * Vox ;
    }
        printf("Bola berada pada posisi maksimum pada %f",xmaks) ;
    
    return (0);
}