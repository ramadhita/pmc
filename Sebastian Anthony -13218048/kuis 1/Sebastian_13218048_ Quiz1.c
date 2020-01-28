#include <stdio.h>
#include <math.h>
#define PI 3.14159264
int main()
{
    double pos_x, pos_y, vel_x, vel_y,t;
    vel_x = 50 * (cos(60*PI/180));
    vel_y = 50 * sin(60*PI/180);
    pos_x = 0;
    pos_y = 0;
    t = 0;
    
    printf("%lf", vel_x);
    while((pos_y>=0) || (t == 0))
    {
        printf("Posisi X : %lf, posisi y : %lf\n", pos_x, pos_y);
        pos_y = (vel_y*t) - (0.5*10*(pow(t,2)));
        pos_x = vel_x*t;
        t = t + 0.01;
        
    }
    
    printf("Jarak terjauh adalah %lf", pos_x);
    
    return(0);
}