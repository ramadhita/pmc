/*NIM/NAMA	: 13218029/ZULFIKAR NIMA ARIFUZZAKI
 * KUIS I : LOOPING
 */

#include <stdio.h>
#include <math.h>

/*Tracking posisi (x,y) setiap 10 ms
 * Hitung jarak terjauh sampai kembali ke tanah
*/ 

int main(void)
{
	//DEKLARASI
	// Konstanta
	const float vo		= 50.0; //kecepatan awal
	const float sin60	= 0.866;
	const float cos60	= 0.5;
	const float g 		= 10; //percepatan gravitasi
	const float inc_time	= 10e-3; //periode sampling posisi
	float x, y; //posisi
	float t, t_max; // waktu sampling dan waktu maksimal

	//PROSES
	//perhitungan waktu maksimal
	t_max = 2.0*vo*sin60/g;
	//posisi dan waktu mulai bergerak (pada titik origin) 
	y = 0.0;
	x = 0.0;
	t = 0.0;
	printf("%f , %f \n", x, y);
	//proses sampling posisi
	while (t <= t_max)
	{
		t = t + inc_time;
		x = vo*cos60*t;
		y = vo*sin60*t-0.5*g*t*t;
		printf("%f , %f \n", x, y);
		}
}
