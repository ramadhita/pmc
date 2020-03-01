/* PROGRAM MENCARI RATA-RATA DAN SORTING NILAI
 * Nama		: Amelia Khoirurrahma
 * NIM		: 18318003
 * Tanggal	: 25 Februari 2020 */

/*
Menghitung waktu agar bak penuh
*/

#include<stdio.h>
#include<math.h>

int main()
{
	float g = 10, phi = 3.14, r = 0.025, Q_masuk = 0.001;
	float h, t, dt = 1, v_lubang, vol_masuk, vol_keluar, volume;
	
	h = 0;
	t = 0;
	
	FILE *air;
	air = fopen("Data Air.csv", "w");
	
	while(h<=1)
	{
		vol_masuk = Q_masuk*dt;
		
		v_lubang = sqrt(2*g*h);
		vol_keluar = phi*r*r*v_lubang*dt;
		
		volume = volume + vol_masuk - vol_keluar;
		h = volume/1;
		
		fprintf(air, "%f;%f\n", h, t);
		t += dt;
	}
	
	fclose(air);
	return 0;
}
