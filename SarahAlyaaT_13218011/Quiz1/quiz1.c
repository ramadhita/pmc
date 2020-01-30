#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define vo 50.0  //kecepatan awal
#define s 1.0472 //Sudut awal 60 derajat dalam radian

int main(void)
{
	//deklarasi tipe variabel
	double x, y, jarak, tmax; 
	double t = 0;

	//Menghitung waktu tempuh
	tmax = 2 * vo * sin(s) / 10;

	//Mencantumkan posisi setiap 0.01 s
	while (t <= tmax){
		printf("Koordinat saat t = %.2f s : ", t);
		x = vo * cos(s) * t;
		y = (vo * sin(s) *t) - (0.5*10*t*t);
		printf("(%.4f, %.4f) m\n", x, y);
		t += 0.01;
	}
	//Menghitung jarak tempuh horizontal maksimal
	jarak = 2*vo*vo*sin(s)*cos(s)/10;

	printf ("Jarak tempuh horizontal partikel adalah %f m\n",jarak );
	return(0);

}