#include <stdio.h>
int main (){
    int A[2][2];
    int B[1][2];
    float hasil[1][2];
    int IA[2][2];
    int IIA[2][2];
    float det, detx, dety,x ,y;

    A[0][0] = 1;
    A[0][1] = -2;
    A[1][0] = 1;
    A[1][1] = -4;

    B[0][0] = 2;
    B[0][1] = -4;

    /*invers det asli*/
    det = (A[1][1]*A[0][0])-(A[1][0]*A[0][1]);
   
    IA[0][0]= B[0][0];
    IA[1][0]= B[0][1];
    IA[0][1]= A[0][1];
    IA[1][1]= A[1][1];

    IIA[0][0]= A[0][0];
    IIA[1][0]= A[1][0];
    IIA[0][1]= B[0][0];
    IIA[1][1]= B[0][1];

    dety = (IA[1][1]*IA[0][0])-(IA[1][0]*IA[0][1]);
    detx = (IIA[1][1]*IIA[0][0])-(IIA[1][0]*IIA[0][1]);

    /*perhitungan*/
    y = dety/det;
    x = detx/det;

    printf("Hasil perpotongan garis  %lf %lf \n", x, y);
    return(0);
}


