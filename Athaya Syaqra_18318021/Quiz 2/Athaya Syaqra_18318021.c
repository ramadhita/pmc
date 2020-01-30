#include <stdio.h>
#include <math.h> 



int main (void)
{
    float det, detx, dety, x, y;
    float A[2][2];
    float B[2][1];
    float dx[2][2];
    float dy[2][2];

    A[0][0] = 2;
    A[0][1] = -1;
    A[1][0] = 4;
    A[1][1] = -1;
    B[0][0] = -2;
    B[1][0] = 4;

    det = ((A[0][0])*(A[1][1])) - ((A[0][1])*(A[1][0]));
    dx[0][1] = A[0][1];
    dx[1][1] = A[1][1];
    dx[0][0] = B[0][0];
    dx[1][0] = B[1][0];
    detx = ((dx[0][0])*(dx[1][1])) - ((dx[0][1])*(dx[1][0]));

    dy[0][1] = B[0][0];
    dy[1][1] = B[1][0];
    dy[0][0] = A[0][0];
    dy[1][0] = A[1][0];
    dety = ((dy[0][0])*(dy[1][1])) - ((dy[0][1])*(dy[1][0]));

    x = detx/det;
    y = dety/det;

    printf("(%.0f,%.0f)",x, y);

}