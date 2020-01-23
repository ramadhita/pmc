/*Nama: I Gede Indrayana Yogaputra
 * NIM: 13218074
 * Tanggal: 21 Januari 2020
 * Program: Program tracking posisi x dan y setiap 10 ms
 * Program juga mencari jarak terjauh x ketika terjatuh ke tanah lagi*/

#include <stdio.h>
#include <math.h>
#define phi 3.14159265

int main(void)
{
    double Vx, Vy, posX, posY, time;
	Vx = 50*cos(60*phi/180); /*Kecepatan horizontal awal*/
	Vy = 50*sin(60*phi/180); /*Kecepatan vertikal awal*/
	posX = 0; /*Posisi awal x*/
	posY = 0; /*Posisi awal y*/
	time = 0; /*Waktu awal*/
	while (posY >= 0)
		{
		/*Output*/
		printf("Pada t = %.2f sekon \n", time);
		printf("Koordinat (x, y) ialah (%f,", posX);
		printf(" %f) \n", posY);
		printf("\n");
		/*Penambahan tiap looping*/
		time = time + 0.01;
		posX = Vx * time;
		posY = Vy * time - (0.5*10*(time)*(time));
	}
	/*Mencegah posY negatif (PosX melebihi jarak terjauh yang terdeteksi)*/
	if (posY != 0)
		posX = posX - Vx * 0.01;
	printf ("Jarak terjauh yang terdeteksi sebelum menyentuh tanah ialah %f \n", posX);
    return(0);
}
