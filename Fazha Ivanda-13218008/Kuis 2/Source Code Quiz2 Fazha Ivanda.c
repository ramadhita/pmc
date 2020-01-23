// Fazha Ivanda/13218008
// Program mencari titik potong dua fungsi dengan metode inverse matriks

#include <stdio.h>


int main(void)
{
	// Variabel yang digunakan array a(2x2) b(2),determinan,x,dan y
	double a[2][2];
	double b[2];
	double det;
	double x;
	double y;
	
	printf("Program Menentukan Titik Potong Dua Fungsi (x,y) .\n");
	printf("Fungsi Pertama = 2X-Y = -2 .\n");
	printf("Fungsi Kedua = 4X-Y = 4 .\n");
	// Mengisi nilai array a
	a[1][1] = 2;
	a[1][2] = -1;
	a[2][1] = 4;
	a[2][2] = -1;
	// Mencari determinan a
	det = (a[1][1]*a[2][2]) - (a[1][2]*a[2][1]);
	// Mengisi nilai array b
	b[1] = -2;
	b[2] = 4;
	
	// Mencari titik potong dengan metode inverse matriks
	
	x = ((b[1]*(a[2][2])/det) + (b[2]*-1*a[1][2]/det));
	y = ((b[1]*-1*a[2][1]/det) + (b[2]*a[1][1]/det));
	printf("Titik Potong Kedua Fungsi Tersebut adalah (%f , %f).\n",x,y);
}
	