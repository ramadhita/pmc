#include <stdio.h>
#define sudut 60
#define Voy 43.3
#define Vx 25

int main ()
{
    float t,waktu,y,x;
    scanf("%f", &waktu);
    t = 0;
    /*x = Vx*t;
    y = (Voy*t)-(0.5*10*t*t);*/
    while (y>=0)
    {
        t+= 0.01;
        x = Vx*t;
        y = (Voy*t)-(0.5*10*t*t);
        printf ("waktu= %f \n", t);
        printf ("x= %f \n", x);
        printf ("y= %f \n", y);
        printf("-------- \n");
    }
    printf ("Jarak maksimum yang dicapai bola = %f",x);
    return 0;
}