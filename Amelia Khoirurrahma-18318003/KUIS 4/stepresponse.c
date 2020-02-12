/* PROGRAM MENCARI DC STEP RESPONSE
 * Nama		: Amelia Khoirurrahma
 * NIM		: 18318003
 * Tanggal	: 4 Februari 2020 */

#include <stdio.h>
#include <math.h>
#define r 10000 //nilai resistansi
#define c 0.000001 //nilai kapasitor
#define volt 5 //nilai sumber tegangan
#define deltat 0.001 //nilai delta t yang saya ambil

double time, hasil_vt;

//Fungsi untuk menghitung v untuk setiap nilai t
double vt (double nt)
{
	double stepresp;
	if (nt <= 0)	//Jika nilai t <= 0
	{
		stepresp = 0.00;
	}
	else    //Jika nilai t > 0
	{
		//rumus didapatkan dari penurunan rumus step response
		stepresp = (vt(nt - deltat) + ((volt/(r*c))*deltat))/(1+((1/(r*c))*deltat));
	}
	return (stepresp);
}

//program utama
int main ()
{
	FILE *stepresponse;  //Membuat file untuk menyimpan data dalam format csv
	stepresponse = fopen("STEP RESPONSE.csv","w");
	
	for (time=0; time<=0.1; time+=deltat)	//loop untuk menghitung nilai vt untuk setiap t
	{
		hasil_vt = vt(time);
		fprintf(stepresponse, "%lf; %lf\n", time, hasil_vt);	
	}
	fclose(stepresponse);	//menutup file
}
