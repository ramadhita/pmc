//Nama  : Ignatius Enrico Bramantya
//NIM   : 13218059 
//Kelas : K02
//Topik : Quiz 1
//Date  : Selasa, 21 Januari 2020

#include <stdio.h>		/* printf, scanf defitions */
#include <math.h>
#define awal 50

#define VosumbuX 25.0  //berhasil didapatkan dengan hasil perhitungan menggunakan VoX = Vo . cos(60)
#define VosumbuY 43.30127 //berhasil didapatkan dengan hasil perhitungan menggunakan VoY = Vo . sin(60)
#define gravper2 5.0

int
main(void)
{
	double x, y, xhasil, yhasil;	//Mendefinisikan Variabel
    double i;

	x = 0; //deklarasi awal nilai variabel
    y = 0;
    i = 0;

    while (y>=0) //Iterasi setiap milisekon
    {
        i = i + 10;
        x = ((VosumbuX / 1000.0) * i);    //Posisi X setiap 10 ms, dalam satuan meter
        y = ((VosumbuY /1000.0* i) - (gravper2 /1000000.0 * i * i )); // Posisi Y setiap 10 ms, dalam satuan meter

       
        printf("Posisi X saat %.1f ms :  %.2f meter \n",i, x); //output nilai akhir
        printf("Posisi Y saat %.1f ms :  %.2f meter \n",i, y); 
    }

    printf("");
    printf("Jarak terjauh Setelah Menyentuh Tanah :  %.2f meter \n", x); //output jarak terjauh dari posisi awal, mengambil nilai terakhir dari increment diatas.
	
    return (0);
}
