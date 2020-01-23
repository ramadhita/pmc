#include <stdio.h>

int main(void){
    int A[2][2] = {{-2,1}, {-4,1}};
    int B[2][1] = {2,-4};
    double XY[2][1];
    int det, detx, dety;
    det = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    detx = B[0][0] * A[1][1] - A[0][1] * B[1][0];
    dety = A[0][0] * B[1][0] - B[0][0] * A[1][0];
    XY[0][0] = detx/det;
    XY[1][0] = dety/det;
    printf("%f\n", XY[0][0]);
    printf("%f", XY[1][0]);
    return(0);
}
