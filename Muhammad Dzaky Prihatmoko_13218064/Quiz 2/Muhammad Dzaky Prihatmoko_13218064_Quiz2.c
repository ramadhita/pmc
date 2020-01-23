#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1 [2][2];
    int m2 [2][2];
    int m3 [2][1];
    int hasil [2];
    int det;
    int det_x;
    int det_y;
    m1[0][0]=2;
    m1[0][1]= -1;
    m1[1][0]= 4;
    m1[1][1]= -1;
    m3[0][0]=-2;
    m3[1][0]=4;
    hasil[0]=0;
    hasil[1]=0;
    det = m1[0][0]*m1[1][1]-m1[1][0]*m1[0][1];
    det_x = m3[0][0]*m1[1][1]-m3[1][0]*m1[0][1];
    det_y = m1[0][0]*m3[1][0]-m1[1][0]*m3[0][0];
    hasil[0]=det_x/det;
    hasil[1]=det_y/det;
    printf("Titik potong x: %d \n",hasil[0]);
    printf("Titik potong y: %d \n",hasil[1]);
    return 0;
}
