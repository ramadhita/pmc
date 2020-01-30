#include <stdio.h>
#include <math.h>
#define PI 3.14159265
    //Position Tracking every 10 ms
    //Count farthest Distance when back to ground
int main(void)
{
    // Variable Declarations
    double angle = 60; // angle
    double initSpeed = 50; // m/s
    double gravity = 10; // m/s
    double timeStep = 0.01;
    double timeElapsed = 0; // ms
    double timeSquared;
    double X = 0;
    double Y = 0;
    double Y_old;
    double X_old;
    double Xspeed;
    double Yspeed;
    int small = 0;

    angle = (PI/180)*angle; // radian
    Xspeed = 50 * cos(angle);// m/s
    Yspeed = 50 * sin(angle);// m/s

    
    do
    {
        timeElapsed += timeStep;
        timeSquared = timeElapsed * timeElapsed;
        Y_old = Y;
        Y = (Yspeed * timeElapsed) - (10 * timeSquared / 2);
        X_old = X;
        X = Xspeed * timeElapsed;
        if ( Y < 0)
        {
            X = X_old;
            Y = Y_old;
            break;
        }  
    printf("t  = %f \n ( %3f , %3f ) \n",timeElapsed , X ,Y);
    } while (Y > 0);

    printf("Farthest X Distance : %f M \nat time Step of %f second", X , timeStep );
    return(0);
}