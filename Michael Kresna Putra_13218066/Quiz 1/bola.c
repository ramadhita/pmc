#include <stdio.h>
#include <math.h>
#define voy 43.301
#define vox 25
#define g 10 

int
main(void)
{
    double x,y,t;
    x=0;
    y=0;
    t=0.01;

    while (y>=0)
    {
        y=(voy*t)-(0.5*g*t*t);
        x=(vox*t);
        t+=0.001;
        
        if (((int)(t*1000))%10 ==0)
        {
            printf("Coordinates of:\n");
            printf("x: %.2lf ", x);
            printf("y: %.2lf \n",y);
        }
    }
    return(0);
}
