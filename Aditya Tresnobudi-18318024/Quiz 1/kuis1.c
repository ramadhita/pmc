#include<stdio.h>
#include<math.h>
#define G 10
#define V0 50

int main(void)
{
    double trackx, tracky, distance, time;
    double t = 0;
    time = 2.0*((V0*0.5*sqrt(3))/G);
    distance = V0*0.5*time;
    while (t<=time) {
        trackx = V0*0.5*t;
        tracky = (V0*0.5*sqrt(3)*t) - (0.5*G*t*t);
        printf("%lf,%lf\n", trackx, tracky);
        t = t + 0.01;
    }
    printf("%f\n",distance);
}
