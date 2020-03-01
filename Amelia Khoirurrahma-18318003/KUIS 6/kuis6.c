/* PROGRAM MENCARI RATA-RATA DAN SORTING NILAI
 * Nama		: Amelia Khoirurrahma
 * NIM		: 18318003
 * Tanggal	: 20 Februari 2020 */

/*
Cari hasil konvolusi
*/

#include <stdio.h>
#include <string.h>

double fungsi_1 (double x)
//fungsi_1(t) = 0.5t-0.5 untuk 1<=t<=3
{
	if ((x>= 1) && (x<=3))
		return ((0.5*x)-0.5);
	else
		return 0;
}

double fungsi_2 (double nilaix, int t)
//fungsi_2(t) = t+1 untuk -1<=t<=0
//			  = 1-t untuk 0<t<=1
{
	if ((nilaix-t)<= 0 && (nilaix-t)>=-1)
		return(nilaix-t+1);
	else if ((nilaix-t)> 0 && (nilaix-t)<=1)
		return(1-nilaix+t);
	else
		return 0;
}

int main()
{
	int timee;
	double fungsi_3, x;
	FILE *konvol;
	konvol = fopen("Hasil Konvolusi.csv", "w");
	for (x=0; x<=5; x+=0.2)
	{
		fungsi_3 = 0;
		for (timee=0; timee<=10; timee++)
		{
			fungsi_3 += fungsi_1(timee)*(fungsi_2(x,timee));
		}
		fprintf(konvol, "%.1lf; %.2lf\n", x, fungsi_3);
	}
	fclose(konvol);
	return 0;
}
