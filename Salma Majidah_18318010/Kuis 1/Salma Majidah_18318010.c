//Nama 		: Salma Majidah
//NIM		: 18318010
//Tanggal	: Selasa, 21 Januari 2020

//KUIS 1
#include <stdio.h>
#include <math.h>

int main (void)
{
	//Benda bergerak parabola dengan kecepatan 50 m/s dan sudut 60 derajat terhadap permukaan
	double x, y, t, g, kecepatan, tmaks;
	kecepatan = 50;
	x = 0; 
	y = 0;
	t = 0;
	g = 10;
	
	//tmaks merupakan waktu maksimal bagi benda bergerak parabola (hingga benda sampai di tanah kembali)
	tmaks = 2 * kecepatan * (sqrt(3)) / 2 /g;	

	//Ditampilkan posisi benda setiap 10ms hingga benda mencapai tanah
	while ( t <= tmaks ) {
		printf ("posisi: (%lf", x);
		printf(", %lf) m\n", y);
		t = t + 0.01;
		x = (kecepatan * (0.5) * t);
		y = ((kecepatan *(sqrt(3)/2)* t) - ((0.5)*g*t*t));
	}
	
	//Ditampilkan pula jarak maksimum yang ditempuh benda dari titik awal
	x = (kecepatan * (0.5) * tmaks);
	printf("Jarak dari titik awal: %lf m\n", x);
	
	return (0);
}
