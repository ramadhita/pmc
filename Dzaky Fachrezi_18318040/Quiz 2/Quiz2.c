//Dzaky Fachrezi
//18318040
//Program menentukan titik potong dari fungsi y=2x+2
//dan y=4x-4 dengan menggunakan invers matriks
#include <stdio.h>

int main (void)
{
	printf("Tentukan titik potong dari y=2x+2 dan y=4x-4\n");
	double a[2][2] = {{2,-1},{4,-1}}; //Mengisikan array a : matriks koefisien variabel fungsi
	double b[2] = {-2,4}; //Mengisikan array b : matriks konstanta
	double det_a = (a[0][0]*a[1][1])-(a[0][1]*a[1][0]); //Menentukan nilai determinan matriks a
	double x = ((a[1][1]*b[0])-(a[0][1]*b[1]))/det_a; //Menentukan nilai x dari operasi invers a dikali b
	double y = ((a[0][0]*b[1])-(a[1][0]*b[0]))/det_a; //Menentukan nilai y dari operasi invers a dikali b
	printf("Titik potong kedua fungsi tersebut ialah (%lf,%lf)", x, y); //Mendisplay hasil x dan y
	return(0);
}