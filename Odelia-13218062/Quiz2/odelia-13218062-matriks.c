/*  f1 : y1 = 2x+2; 2x1-y1 = -2
    f2 : y2 = 4x-4; 4x2-y2 = 4*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int 
    i,j;
    double
    detm,
    detmx,
    detmy,
    m [2][2],
    mx [2][2],
    my [2][2],
    mhasil [2][1],
    x,
    y;

    m [1][1] = 2;
    m [1][2] = -1;
    m [2][1] = 4;
    m [2][2] = -1;
    mhasil [1][1] = -2;
    mhasil [2][1] = 4;


    mx [1][1] = mhasil [1][1];
    mx [1][2] = m [1][2];
    mx [2][1] = mhasil [2][1];
    mx [2][2] = m [2][2];


    my [1][1] = m [1][1];
    my [1][2] = mhasil [1][1];
    my [2][1] = m [2][1];
    my [2][2] = mhasil [2][1];


detm = ((m [1][1] * m [2][2]) - (m [1][2] * m [2][1]));
detmx = ((mx [1][1] * mx [2][2])-(mx [1][2] * mx [2][1]));
detmy = ((my [1][1] * my [2][2])-(my [1][2] * my [2][1]));

x = detmx / detm;
y = detmy / detm;

printf ("x: %f\n" ,x);
printf ("y: %f\n" ,y);

return (0);
}