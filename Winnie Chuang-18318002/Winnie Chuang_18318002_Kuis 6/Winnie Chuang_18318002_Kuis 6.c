//Nama		: Winnie Chuang
//NIM		: 18318002
//Deskripsi	: Konvolusi

#include <stdio.h>

double grafik1 (double t) //membuat fungsi dari grafik 1
{
	double hasil;
		if ((t>=1) && (t<=3))
		{
			hasil = (0.5*t)-0.5;
		}
		else
		{
			hasil = 0;
		}	
	return (hasil);
}

double grafik2 (double t) //membuat fungsi dari grafik 2
{
	double hasil;
		if (t>= -1 && t<=0)
		{
			hasil = t + 1;
		}
		else if (t>0 && t<=1)
		{
			hasil = 1 - t;
		}
		else 
		{
			hasil = 0;
		}
		return (hasil);
}


int
main () //program utama untuk konvolusi
{
	FILE *filecsv; //membuat file csv
	filecsv = fopen ("filekonvolusi.csv", "w+");
	double partisi = 0.01; //inisialisasi partisi
	double final; //inisialisasi variabel yang akan dipakai
	for (double i = 0;  i<= 10; i = i + partisi) // melakukan rumus konvolusi
	{
		final = 0;
		for (double j = -1; j <= i; j = j +partisi)
		{
			final = final + (grafik1(j) * grafik2(i-j)*partisi);
		}
		fprintf (filecsv, "%lf, %lf\n", final, i); //mencetak hasil konvolusi dan waktu ke dalam file
	}

	fclose (filecsv); //menutup file
	return 0;
}
		
