#include <stdio.h>
#include <math.h>

int main (void)
{
    float x, y, vy, vx;
    
    float grav = 10;
    float speed = 50;
    float time = 0;

    x = 0;
    y = 0;

    printf("\nX = %f", x);
    printf("\ny = %f", y);

    vx = speed*0.5;
    vy = speed*0.866;

    while ((y >= 0) && (x >= 0))
    {
        x = vx*time;
        y = vy*time - (0.5*grav*time*time);        
        
        time = time + 0.001;

        printf("\nX = %f", x);
        printf("\nY = %f", y);
    }

    return 0;
}