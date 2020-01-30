//Nama  : Ignatius Enrico Bramantya
//NIM   : 13218059 
//Kelas : K02
//Topik : Quiz 2
//Date  : Kamis, 23 Januari 2020

#include <stdio.h>	
#include <math.h>

int
main(void)
{
	int x [2][2]; //Deklarasi Variabel
    int y [2][2];
    int z [2][2];
    int f [2][2];
    int i,j,det;


	x[0][0] = -2; //Inisialisasi Matrix x dan y
    x[0][1] = 1;
    x[1][0] = -4;
    x[1][1] = 1;

    y[0][0] = 2; //inisialisasi matrix C dari persamaan y = x + c
    y[1][0] = -4;

    z[0][0] = (x[1][1]); //Proses mencari invers matrix
    z[0][1] = ((-1)*x[0][1]);
    z[1][0] = ((-1)*x[1][0]);
    z[1][1] = (x[0][0]);

    det = (x[0][0]*x[1][1])-(x[1][0]*x[0][1]); //Proses mencari determinan untuk invers matriks

    f[0][0] =((z[0][0]*y[0][0])+(z[0][1]*y[1][0]))/det; //Proses mencari titik potong x dan y dengan matrix
    f[1][0] = ((z[1][0]*y[0][0])+(z[1][1]*y[1][0]))/det;


    printf("%d  ",f[0][0]); //display output
    printf("%d\n",f[1][0]);	
    return (0);
}
