/* PROGRAM MENGHITUNG KOORDINAT DAN JARAK TEMPUH BOLA
 * Nama		: Amelia Khoirurrahma
 * NIM		: 18318003
 * Tanggal	: 21 Januari 2020 */

#include <stdio.h>

/* bola dilempar dengan sudut 60 derajat dan kecepatan awal 50 m/s
 * 1. Tracking posisi(x,y) setiap 10 ms
 * 2. Hitung jarak ke tanah lagi */

int main(void)
{
	double vox, voy, xmax, tmax, txy, x, y;
	vox = 50*0.5;
	voy = 50*0.866;
	xmax = vox*((2*voy)/10);
	tmax = 2*voy/10;
	
	txy = 0.01;
	while (txy <= tmax)
	{ 
		x = vox*txy;
		y = (voy*txy)-(5*txy*txy);
		
		printf("Koordinat bola pada saat %lf", txy);
		printf(" sekon adalah (%lf, %lf", x, y);
		printf(")\n");
		txy = txy + 0.01;		
	}
	printf("\nJarak bola ketika mendarat adalah %lf", xmax);
	printf(" meter\n");
}
