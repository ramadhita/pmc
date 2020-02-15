// Nama			: Winnie Chuang
// NIM			: 18318002
// Deskripsi 	: sistem transien

#include <stdio.h>

#define V  5   //mendefinisikan variabel
#define C  0.000001  
#define R  10000
#define b  100 // (1/(R*C))
#define c  500 // (V/ (R*C))
#define deltat 0.0001 //perubahan nilai t

double rekursif ( float t)//mendefinisikan fungsi rekursif untuk menghitung Vc setiap waktu
{
	double Vc; //deklarasi Vc
	if (t <= 0)
		{
			Vc = 0; //jika t = 0, maka Vc = 0 (kapasitor pada awal masih dalam keadaan kosong)
		}
	else
		{
			Vc = (rekursif (t-deltat)+ c*deltat)/(1+(b*deltat)); //jika t >0, maka kapasitor mulai terisi sampai mencapai sebuah steady state
		}														 //hasil penurunan rumus dari tegangan C dari rangkaian RC
	return Vc;
}

int 
main (void)
{	
	FILE *filecsv; //menginisialisasi file
	filecsv = fopen("filehasil.csv", "w+"); //membuka file
	float Vc; 
	for (float t = 0; t <0.1; t= t +deltat) //looping waktu
	{ 
		Vc = rekursif (t); //Vc adalah nilai dari fungsi rekursif
		fprintf (filecsv, "%lf, ", Vc); //memprint nilai Vc dan t ke csv
		fprintf (filecsv, "%lf \n", t);
	}
	fclose (filecsv); //menutup file csv
}
