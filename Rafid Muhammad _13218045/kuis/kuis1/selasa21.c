#include <stdio.h>
int main(void)

{
    float y, x, vy,vx,waktu,v,sin60,cos60;


    sin60 = 0.5;
    cos60 = 0.866;
    waktu = 0;
    v = 50;
    y = 0;
    vy = v *sin60;
    vx = v * cos60;
    while (y >= 0) {
        x = vx *waktu;
        y = vy *waktu - (0.5*10*(waktu*waktu));
        printf("\n posisi x %f\n", x);
        printf("\n posisi y %f\n", y);
        waktu += 0.01;


    }
    printf("\n Posisi terjauh yang dicapai %f\n", x);
return (0);
    }
