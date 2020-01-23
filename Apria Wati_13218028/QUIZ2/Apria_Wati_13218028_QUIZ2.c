/*
f1 : y1 = 2x+2
f2 : y2 = 4x-4
Y=Ax
A^-1Y=X
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int matrixA [2][2];
    int matrixB [2][1];
    int x,y, det;

    matrixA[0][0] = 2;
    matrixA[0][1] = -1;
    matrixA[1][0] = 4;
    matrixA[1][1] = -1;

    matrixB[0][0] = -2;
    matrixB[1][0] = 4;

    det = ((matrixA[0][0]*matrixA[1][1])-(matrixA[1][0]*matrixA[0][1]));

    x= ((matrixB[0][0]*matrixA[1][1])-(matrixB[1][0]*matrixA[0][1]))/det;
    y= ((matrixA[0][0]*matrixB[1][0])- (matrixA[1][0]*matrixB[0][0]))/det;

   printf("Nilai titik potong di x adalah %d \n",x);
   printf("Nilai titik potong di y adalah %d", y);

return(0);
}

