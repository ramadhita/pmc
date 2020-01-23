/* QUIZ 1 */

#include <stdio.h>
#include <math.h>

// Requirements:
// 1. Position tracker per 10ms
// 2. Count furthest distance (when it lands)

int main(void)
{
    // LIBRARY
    const double angle = 60; // starting angle
    const double v = 50; // starting velocity (m/s)
    const double g = 10; // gravity (10 m/s^2)
    double vx; // starting horizontal velocity
    double vy; // starting vertical velocity
    double t; // time
    double y; // current y position
    double x; // current x position
    double maxx; // maximum x position

    // ALGORITHM
    vx = v*0.5; // initial horizontal velocity (cos 60deg is 0.5)
    vy = v*0.5*sqrt(3); // initial vertical velocity (sin 60deg is 0.5*sqrt(3))

    t = 0.01; // initial time (10 ms)

    // While it's still above ground (y > 0), update the position
    do{
        x = vx*t; // current x position
        y = (vy*t)-(0.5*g*t*t); // current y position
        
        // If it's above ground, print output
        if(y > 0){

            // Update the maximum distance
            maxx = x;

            // Print output (current position per 10 ms)
            printf("Posisi x saat %.3f detik: %.3f m\n",t , x);
            printf("Posisi y saat %.3f detik: %.3f m\n\n",t , y);
        
        }

        // Increment time (++ 0.01)
        t = t + 0.01;

    }while (y > 0);

    // Output max horizontal distance
    printf("Jarak maksimum adalah sekitar: %.3f m\n", maxx);
}