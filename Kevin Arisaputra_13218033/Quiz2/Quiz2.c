#include<stdio.h>

int main () 
{
    int A[2][2] = {{-2,1}, {-4,1}};
    int C[2] = {2, -4};
    float det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
    det = 1/det;
    
    float inv[2][2] = {{det*A[1][1], det*-A[0][1]}, {det*-A[1][0], det*A[0][0]}};
    float ans[2];
    int i;

    for (i=0; i<2; i++) {
        ans[i] = inv[i][0]*C[0] + inv[i][1]*C[1];
    }

    printf ("(%.0f, %.0f)", ans[0], ans[1]);
}