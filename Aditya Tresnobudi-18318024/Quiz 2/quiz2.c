#include<stdio.h>
#include<math.h>

int main()
{
    float A[2][2];
    float B[2][1];
    float Ai[2][2];
    float detA;
    float x;
    float y;
    A[0][0] = -2;
    A[0][1] = 1;
    A[1][0] = -4;
    A[1][1] = 1;
    B[0][0] = 2;
    B[1][0] = -4;
    detA = (A[0][0]*A[1][1])-(A[0][1]*A[1][0]);
    Ai[0][0] = (1/detA)*(A[1][1]);
    Ai[0][1] = (1/detA)*(A[0][1])*(-1);
    Ai[1][0] = (1/detA)*(A[1][0])*(-1);
    Ai[1][1] = (1/detA)*(A[0][0]);
    x = (Ai[0][0]*B[0][0])+(Ai[0][1]*B[1][0]);
    y = (Ai[1][0]*B[0][0])+(Ai[1][1]*B[1][0]);
    printf("%f ", x);
    printf("%f\n", y);
}
