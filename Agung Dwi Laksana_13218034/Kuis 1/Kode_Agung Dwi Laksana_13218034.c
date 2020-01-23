// Program tendangan bola
/* 1. Tracking posisi (x,y) setiap 10 ms
   2. Hitung jarak terjauhnya*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    // diketahui kecepatan mula-mula 50 m/s dengan sudut 60 derajat
    double x, y, vx, vy, t;

    // Definisikan nilai awal
    t = 0.01; //10ms
    x = 0;
    y = 0;
    vx = 50 * 0.5; // 50 cos 60
    vy = 50 * 0.5 * sqrt(3); // 50 sin 60

    printf("Trecking posisi suatu bola setiap 10 ms yang ditendang dengan \n kecepatan awal 50 m/s dan sudut 60 derajat adalah :\n");

    do {

        x = x + (vx*t);
        y = y + (vy*t) - (5*t*t);
        vy = vy - 10*t;
        printf("(%f, %f)\n",x,y);

    } while ((y+(vy*t)-(5*t*t))>=0); //posisi y selanjutnya

    printf("\nJarak x maksimum yang ditempuh oleh bola adalah %f m \n", x);

    return 0;
}

