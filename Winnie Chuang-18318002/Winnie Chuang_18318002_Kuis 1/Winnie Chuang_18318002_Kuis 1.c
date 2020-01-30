//Nama		: Winnie Chuang
//NIM		: 18318002
//Deskripsi	: Tugas PMC (parabola)

#include <stdio.h>
#include <math.h>

#define sudut 1.0472 //Inisiasi nilai
#define grv 10
#define selang 0.01
#define kecepatan 50

int
main (void)
{
	double x, y, jarak, waktu, tmaks;
	x = 0; //Deklarasi variabel
	y = 0;  
	waktu = 0.01;
	tmaks = 2 * kecepatan * (sin(sudut) / grv);
	
	printf("Titik koordinat bola setiap 10 ms adalah sebagai berikut:\n");
	while (waktu <= tmaks)
	{
		y = ((kecepatan * sin(sudut) * waktu) - (0.5*grv*(pow(waktu, 2)))); //menghitung koordinat setiap 10 ms
		x = ((kecepatan * waktu)* cos(sudut));
		waktu = waktu + selang;
		printf ("(%f, %f)\n", x, y);
	} 	
	
	jarak = (((kecepatan*kecepatan)*sin(2*sudut))/grv); //menghitung jarak terjauh
	printf("Jarak ketika sampai tanah adalah %f", jarak);
	
	return (0);
}











