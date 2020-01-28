/*Nama: I Gede Indrayana Yogaputra
 * NIM: 13218074 
 * Program mencari titik potong dua persamaan aljabar linear*/

#include <stdio.h>
#include <math.h>

/*Fungsi mencari determinan*/
int det (int a, int b, int c, int d)
{
	int determinan;
	determinan = a*d - b*c;
	return (determinan);
}
	

int main(void)
{ 
	/*Inisialisasi*/
	int X [2][1];
	double Y [2][1];
	int A [2][2];
	int det1;
	
	A [0][0] = 2;
	A [0][1] = -1;
	A [1][0] = 4;
	A [1][1] = -1;
	
	X [0][0] = -2;
	X [1][0] = 4 ;

	/*Mencari titik potong menggunakan Aturan Crammer*/
	det1 = det(A[0][0], A[0][1], A[1][0], A[1][1]);
	Y[0][0] = det(X[0][0], A[0][1], X[1][0], A[1][1])/det1;
	Y[1][0] = det(A[0][0], X[0][0], A[1][0], X[1][0])/det1;
	
	/*Output*/
	printf("Koordinat titik potong ialah (%.0f,", Y[0][0]);
	printf("%.0f) \n", Y[1][0]);

	return(0);
}

