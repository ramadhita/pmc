/*titik potong dua fungsi
ada fungsi 1 y = 2x +2			2x - y = -2			a b		d  -b
	fungsi 2 y = 4x -4 			4x - y = 4			c d      -c a*/
	
	
#include <stdio.h>                                     
int													   
main (void)
{
	int a[2][2], x[2][2], y[2][2]; //deklarasi variabel, array, dan nilai
	a[0][0] = y[0][0] = 2;
	a[0][1] = x[0][1] = -1;
	a[1][0] = x[1][0] = y[1][0] = 4;
	a[1][1] = x[1][1] = -1;
	y[0][1] = x[0][0] = -2;
	y[1][1] = 4;
	double det, detx, dety, nilaix, nilaiy;
	
	
	//mencari nilai x dan y dengan menggunakan Crammer's Rule
	det = ((a[0][0]*a[1][1])-(a[0][1]*a[1][0])); //determinan pertama
	detx = ((x[0][0]*x[1][1])-(x[0][1]*x[1][0])); //determinan kedua
	dety = ((y[0][0]*y[1][1])-(y[0][1]*y[1][0])); //determinan ketiga
	
	nilaix = detx/det;
	nilaiy = dety/det;
	
	printf ("Nilai x adalah %f \n", nilaix); // hasil perhitungan x
	printf ("Nilai y adalah %f \n", nilaiy); // hasil perhitungan y
	return (0);
}

					
				
	
