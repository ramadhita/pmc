#include <stdio.h>
#include <math.h>
double timer = 0,vo=50,teta=60,g=10;
double vx,vy,x,y ;
int main(void)
{
    x=0;
    y=0;
    vx=vo*0.5;
    vy= vo*0.8660;
    printf("initialize");

    do {
        timer=timer+0.001;
        x=vx*timer ;
        y= vy*timer - 0.5*g*pow(timer,2);
        if(((int) (timer*1000))%10 ==0 ) // print x y setiap 10ms
        {
        printf(" time : %.2lf \n",timer);
        printf("x : %.2lf \n", x);
        printf("y : %.2lf \n", y);
        }
    }
    while (y>0);
    printf("x akhir :%.4lf \ny akhir: %.4lf  \nProgram Selesai \n ",x,y);
    return 0 ;
     
}






