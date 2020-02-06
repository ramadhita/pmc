/* PROGRAM MENCARI MLUAS LINGKARAN
 * Nama		: Amelia Khoirurrahma
 * NIM		: 18318003
 * Tanggal	: 4 Februari 2020 */

/*
Cari luas lingkaran dengan rumus biasa dan rumus integral
*/

#include <stdio.h>
#include <math.h>
#define phi 3.14

float luling_biasa (float a)
{
	float hasil = phi*a*a;
	return (hasil);
}

float luling_integral (float a)
{
	float i,n;
	float sum1, sum2, delta_x, delta_y;
	sum1 = 0;
	n = 600;
	delta_x = a/n;
	delta_y = 2*phi/n;
	
	for (i=0; i<=a; i+=delta_x) {
		sum1 = sum1+(i*delta_x);
	}
	
	for (i=0; i<=2*phi; i+=delta_y) {
		sum2 = sum2+(sum1*delta_y);
	}
	return (sum2);
}

int main()
{
	printf("Luas lingkaran cara normal: %f\n", luling_biasa(7));
	printf("Luas lingkaran cara integral: %f", luling_integral(7));
	return (0);
}
