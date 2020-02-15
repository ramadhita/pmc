// Quiz 4 Pemecahan Masalah dengan C
// Dzaky Fachrezi (18318040)
// Deskripsi : Program menentukan tegangan kapasitor setiap waktu dan membuat grafik dari data tegangan kapasitor.

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	FILE *fp; //Pointer untuk file yang akan diproses
	char *filename = "Vkapasitor_t.txt"; //Pointer untuk nama file yang akan diproses
	int R = 10000; //Nilai resistor
	float C = 0.000001; //Nilai kapasitor 
	float vc,v,dt,i; //Inisiasi tegangan kapasitor, tegangan catu daya, selang waktu, arus
	//Deklarasi variabel-variabel
	dt = 0.00001;
	vc = 0;
	v = 5.00;
	fp = fopen(filename, "w"); //Membuka file untuk diproses (ditulis)
	i = v/R; //Proses menentukan arus awal
	
	while (v >= vc) //Perulangan selama tegangan tegangan kapasitor kecil sama dengan tegangan catu daya
	{
		vc = vc + ((i*dt)/C); //Perhitungan tegangan kapasitor
		i = (v - vc)/R; //Perhitungan arus
		printf("%f\n", vc); //Mendisplay tegangan kapasitor
		fprintf(fp, "%f\n", vc); //Mengisikan nilai tegangan kapasitor ke file
	}
	fclose(fp); //Menutup file yang telah selesai diproses
	return(0);
}