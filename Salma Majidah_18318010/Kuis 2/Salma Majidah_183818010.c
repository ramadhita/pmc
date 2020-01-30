//Nama: Salma Majidah
//NIM : 18318010
//Tanggal: 23 Januari 2020

//KUIS 2
//Mencari titik singgung dua garis linear dengan persamaan garis ...
// y = 2x + 2 dan y = 4x - 4

//Digunakan metode cremer untuk mencari nilai x,y titik singgung tersebut

#include <stdio.h>
int main (void){
	//Inisialisasi matriks A, yaitu konstanta variabel x dan y
	int A[2][2] = {
		{-2, 1}, 
		{-4,1}
	};
	
	//Inisialisasi matrik B, yaitu konstanta pada persamaan garis lurus
	int B[2] = {2, -4};
	
	//Inisialisasi variabel lainnya
	int det_x, det_y, det, x, y;
	
	// Menghitung determinan variabel matriks A, matriks x, dan matriks y
	det = ((A[0][0])*(A[1][1])) - ((A[0][1])*(A[1][0]));
	det_x = ((B[0]*A[1][1]) - (A[0][1]*B[1]));
	det_y = (A[0][0]*B[1]) - (A[1][0]*B[0]);
	
	//Menghitung nilai titik x dan y, dengan membagi determinan matriks x 
	//atau y dengan determinan matriks A
	x = det_x/det;
	y = det_y/det;
	
	//OUTPUT
	printf("titik singgung : x = %d, y = %d", x, y);
	
	return(0);	
}
