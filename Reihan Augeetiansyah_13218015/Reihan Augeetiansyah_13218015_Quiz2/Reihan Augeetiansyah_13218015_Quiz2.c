#include<stdio.h>
#include<math.h>
int main()
{
    int A[2][2];
    int invA[2][2];
    int B[2];
    int XY[2];
    int det;
    int g,f,i;

    A[0][0] = -2;
    A[0][1] = 1;
    A[1][0] = -4;
    A[1][1] = 1;

    B[0]= 2;
    B[1]= -4;

    XY[0] = 0;
    XY[1] = 0;

    det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
    invA[0][0] = (A[1][1]);
    invA[0][1] = -(A[0][1]);
    invA[1][0] = -(A[1][0]);
    invA[1][1] = (A[0][0]);

    for (g=0; g<2; g= g+1)
    {
        for (i=0; i<2; i= i+1)
        {
             XY[g] = XY[g]+(invA[g][i]* B[i]/det);
        }
    }

    printf("%d \n", XY[0]);
    printf("%d \n", XY[1]);
    
}