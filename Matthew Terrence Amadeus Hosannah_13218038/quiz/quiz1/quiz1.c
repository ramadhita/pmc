//PMC
//quiz1
//Matthew Terrence A. H. / 13218038
//Program tracking gerak parabola dan jarak terjauh yang ditempuh bola
 
#include <stdio.h>
#include <math.h>
#define Pi 3.14159
#define g 10 // m/s2
#define vo 50 // m/s
#define Degree 60.0 // derajat

int main()
{
    float xt, yt, x, y, vx, vy , time;

    vx = vo * (cos((Degree/180) * Pi)); //kecepatan sbx
    vy = vo * (sin((Degree/180) * Pi)); //kecepatan sby

    while (yt >= 0){
        time += 0.010;
        xt = (vx * time); //posisi x terhadap waktu
        yt = (vy * time) - ((g / 2) * pow(time, 2)); //posisi y terhadap waktu
            if (yt >= 0){
                x = xt; 
                y = yt;
                printf("\n saat bola menempuh waktu %.2fs, x pada posisi %.2fm dan y pada posisi %.2fm  \n", time, x, y); //output 
            }
    } 
    printf("\nJarak maksimal bola dari titik lempar adalah %.2fm", x); //output
    printf("\n");
    return (0);
}