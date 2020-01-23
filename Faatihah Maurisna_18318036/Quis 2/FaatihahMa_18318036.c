//Nama : Faatihah Maurisna A.
//NIM  : 18318036

#include<stdio.h>
#include<math.h>

int det, detx, dety, a[10][10];             //Tpe data
int x, y, m, n;

int x= 2;                                   //Inisialisasi baris matriks yang digunakan
int y= 2;

int main()
{   a[0][0] = 2;                            //Set nilai matriks dari persamaan 2x-y=-2 dan 4x-y=4
    a[0][1] = -1;
    a[1][0] = 4;
    a[1][1] = -1;

    detx= ((a[1][1])*-2 )-((a[0][1])*4);                //Mencari nilai determinan x, determinan y, dan determinan matriks
    dety = ((a[0][0])*4) - ((a[1][0])*-2);              //dengan cara cramer
    det= ((a[1][1])*(a[0][0]))-((a[1][0])*(a[0][1]));

    m=detx/det;                                         // m adalah nilai titik perpotongan x dengan rumus
    n=dety/det;                                         // n adalah titik perpotongan y dengan rumus
    printf("Titik perpotongan untuk x = %d\n", m);      //Display output untuk x
    printf("Titik perpotongan untuk y= %d", n);         //Display output untuk y
}
