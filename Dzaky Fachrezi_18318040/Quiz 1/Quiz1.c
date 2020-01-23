//Dzaky Fachrezi
//18318040
//Program menentukan posisi setiap 10 ms serta jarak maksimum
//bola yang dilemparkan dengan kecepatan awal 50 m/s dan sudut 60

#include <stdio.h>
#define vo 50
int main (void)
{
	double x, y, t, tmax, xmax;
	x, y, t, xmax = 0;
	tmax = (2*vo*0.866)/10;
	while (t < tmax)
	{
		x = (vo*0.5*t);
		y = (vo*0.866*t)-(0.5*10*t*t);
		printf("Posisi bola saat t = %f sekon adalah (%f,%f) \n", t, x, y);
		t = t+0.01;
		xmax = x;
	}
	printf("Jarak maks bola ialah %f meter \n", xmax);
	return(0);
}