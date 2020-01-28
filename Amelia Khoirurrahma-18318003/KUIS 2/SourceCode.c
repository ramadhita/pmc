/* PROGRAM MENCARI TITIK POTONG DARI DUA PERSAMAAN LINEAR
 * Nama		: Amelia Khoirurrahma
 * NIM		: 18318003
 * Tanggal	: 23 Januari 2020 */

#include <stdio.h>

// Persamaan 1 : 2x - y = -2
// Persamaan 2 : 4x - y = 4

int main (void)
{
	float matrix1[2][2] = {	//Matriks 1
		{2, -1},
		{4, -1}
	};
	
	float matrix2[2][1] = {	//Matriks 2
		{-2},
		{4}
	};
	
	//Rumus perhitungan determinan, determinan x, dan determinan y
	float det = ((matrix1[0][0])*(matrix1[1][1])) - ((matrix1[1][0])*(matrix1[0][1]));
	float detx = ((matrix2[0][0])*(matrix1[1][1])) - ((matrix2[1][0])*(matrix1[0][1]));
	float dety = ((matrix1[0][0])*(matrix2[1][0])) - ((matrix1[1][0])*(matrix2[0][0]));
	
	float x = detx/det;
	float y = dety/det;
	
	printf ("%f, %f\n", x, y);
	return 0;
}
