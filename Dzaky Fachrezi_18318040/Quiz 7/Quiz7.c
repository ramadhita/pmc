// Dzaky Fachrezi - 18318040

/* Sebuah tanki bervolume 1 meter kubik diisi air dengan debit 1 liter/detik
   Terdapat sebuah lubang berdiameter 5 cm di dasar tanki
   Hingga volume tanki penuh, berapa waktu yang dibutuhkan dan buat grafik h-t
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define pi 22/7

int main ()
{
	FILE *fp; //Pointer untuk file yang akan diproses
	char *filename = "tankibocor.txt"; //Pointer untuk nama file yang akan diproses
	fp = fopen(filename, "w");
	double dt = 0.01;
	double Qin = 10e-6;
	double V = 0;
	double t = 0;
	double d = 5*0.01;
	double A = (pi*d*d)/4;
	double h = 0;
	double dh;
	double Vb;
	
	while ( V != Vb) // Perulangan selama sistem tidak seimbang
	{
		t += dt;
		dh = Qin - (A*sqrt(2*10*h)*dt);
		h += dh;
		Vb = V;
		V += (dh*1);
		printf("%lf\n", V);
		fprintf(fp, "%lf\n", V);
	}
	fclose(fp);
}