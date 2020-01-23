/* 
NAMA    :   ACHMAD RIFQY PRATAMA
NIM     :   13218069
*/

#include <stdio.h>
#include <math.h>

/* Cari titik (x,y) yang berpotongan dari f1 : y1 = 2x2+2 ; f2 : y2 = 4x2-4*/

int main (void)
{
    float f1[2][2], f1inv[2][2], f2[2][1], f3[2][1], detf1;
    int i,j;

    f1[0][0] = 2;
    f1[0][1] = -1;
    f1[1][0] = 4;
    f1[1][1] = -1;
    f3[0][0] = -2;
    f3[1][0] = 4;

    /*determinan matriks f1*/
    detf1 = (f1[0][0]*f1[1][1])-(f1[0][1]*f1[1][0]);

    /*Inverse matriks f1*/
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            if (i+j == 1)
            {
                f1inv[i][j] = ((-1)*(f1[i][j]))/detf1;
            }
            else if (i+j == 0)
            {
                f1inv[i][j] = (f1[i+1][j+1])/detf1;
            }
            else
            {
                f1inv[i][j] = (f1[i-1][j-1])/detf1;
            }
        }
    }

    /*Hasil matriks f2*/
    f2[0][0] = (f1inv[0][0]*f3[0][0]) + (f1inv[0][1]*f3[1][0]);
    f2[1][0] = (f1inv[1][0]*f3[0][0]) + (f1inv[1][1]*f3[1][0]);

    printf("Titik potong kedua fungsi adalah (%.1f,%.1f)\n", f2[0][0], f2[1][0]);
    
    return(0);
}