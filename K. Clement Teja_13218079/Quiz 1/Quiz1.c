/****************************************************************************************
Quiz 1 PMC
K. Clement Teja
13218079
Program tracking gerak parabola dan menentukan jarak dari titik awal ke titik jatuh benda
*****************************************************************************************/
 
#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define GRAVITY 10 // m/s/s
#define Degree 60.0 // derajat
#define InitVelocity 50 // m/s

int main(void)
{
    float x_temp, y_temp, time_temp, x, y, time, vy, vx;

    vx = InitVelocity * (cos((Degree/180) * PI));
    vy = InitVelocity * (sin((Degree/180) * PI));

    while (y_temp >= 0){
        time_temp += 0.01;
        y_temp = (vy * time_temp) - ( (GRAVITY / 2) * time_temp * time_temp );
        x_temp = vx * time_temp;
            if (y_temp >= 0){
                time = time_temp;
                y = y_temp;
                x = x_temp;
                printf("\nX bernilai %.2fm dan Y bernilai %.2fm saat durasi %.2fs \n", x, y, time);
            }
    } 
    printf("\nJarak terjauh yang ditempuh bola adalah %.2fm", x);
    printf("\n");
    return (0);
}