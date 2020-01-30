#include <stdio.h>
#include <math.h>
#define grav 10

int main(void)
{
    float vx, vy, xpos, ypos, xmax, time, xfar;

    xpos = 0; //posisi x awal 0
    ypos = 0; //posisi y awal 0
    time = 0; //waktu awal = 0
    vx = 50*cos(M_PI/3); //vx selalu 50 cos(pi/3)
    vy = 50*sin(M_PI/3); //vy0 50 sin(pi/3)
    do{
        printf("Posisi saat %.2f detik adalah (%3.2f, %f). \n", time, xpos, ypos);
        xfar = xpos;
        time = time + 0.01;
        xpos = xpos + vx*0.01; // s = s0 + v0.t = xpos + vx*0.01
        ypos = ypos + vy*0.01 - (grav/2*0.01*0.01); // h=h0+v0.t-1/2*gt^2
        vy = vy - grav*0.01;
    } while (ypos>0);
    printf("Jarak terjauh adalah %3.2f meter. \n", xfar);

    return (0);
}