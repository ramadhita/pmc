/* Nama     :   Muhammad Ali Novandhika
*  NIM      :   13218067
*  Tanggal  :   23 Januari 2020
*  Kuis 2

    Menyelesaikan persamaan linear
    y1 = 2x+2
    y2 = 4x-4

*/


#include <stdio.h>
#include <math.h>

int main() {
    int k[2][2]={{2,4},{-1,-1}},
        m[2][1]={{-2},{4}},
        determinanD,determinanDx,determinanDy,x,y;                     /* deklarasi variabel */

    determinanD=((k[0][0])*(k[1][1]))-((k[1][0])*(k[0][1]));            // determinan dari variabel k
    determinanDx=((m[0][0])*(k[1][1]))-((m[1][0])*(k[1][0]));
    determinanDy=((k[0][0])*(m[1][0]))-((k[0][1])*(m[0][0]));
    x=determinanDx/determinanD;                                         // Menggunakan cara Cramer
    y=determinanDy/determinanD;
    printf("%d\n",x);
    printf("%d",y);

    return 0;
}

