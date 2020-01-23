// Nama 		: Azka Zharfan Hafizh
// NIM			: 13218051
// Mata Kuliah 	: EL2008 Pemecahan Masalah dengan C
// Tanggal		: 21 Januari 2019


// QUIZ 1
// Mencari posisi setiap 10ms dari bola yang dilempar
// dengan sudut 60 dengan kecepatan awal


#include <stdio.h>
int main()

#define  g 10				// konstanta
#define  Vox 25
#define  Voy 43.30127
{

float x, y, t, tmaks;

t = 0;							//mencari waktu maksimum
tmaks = (float)((2*Voy)/g);		//dari awal sampai jatuh kembali ke tanah
printf("POSISI SETIAP 10ms\n");

for (t==0; t<=tmaks; t+=0.01)	//loop dari waktu awal sampai maksimum
{	
	printf("waktu : ");
	printf("%.2f\n",t);

	x = (Vox *t);				//mencari besarnya jarak sumbu horizontal
	y = (Voy * t)-(0.5*g*t*t);	//mencari besarnya ketinggian

	printf("posisi x : ");
	printf("%.1f\n",x);
	printf("posisi y : ");
	printf("%.1f\n",y);
	printf("--------------------\n");

}
printf("jarak maksimum : ");	
printf("%.1f\n",x);				//jarak maksimum bola dari titik awal pelemparan
} 
