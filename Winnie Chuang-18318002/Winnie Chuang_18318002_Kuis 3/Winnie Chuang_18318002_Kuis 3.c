//Nama	: Winnie Chuang
//NIM	: 18318002

#include <stdio.h>
#include <math.h>


#define pi 3.14 //mendefinisikan nilai pi
#define r 7 // mendefinisikan nilai jari-jari
#define N 1000000 //mendefinisikan partisi
double f(double x) //mendefinisikan fungsi rieman
{
	return (x);
}


int
main (void)
{
	double batasr = 0.000007; //mendefinisikan hasil partisi
	double luashitung, error;
	double hasil = 0;
	double integral = 0;
	for (double i = 0; i <N; i++) //mengintegralkan r dulu
	{
		integral = integral + ((batasr* f(batasr*i)));
	}
		
	hasil = integral *(2*pi); //setelah mengintegralkan r, maka integral sudut tinggal dikalikan saja dengan btasanya
	
	luashitung = (pi) * r * r; //menghitung luas lingkaran secara rumus
	
	error = ((luashitung-hasil)/luashitung)*100; //menghitung error
	
	printf ("Luas lingkaran terhitung = %f\n", luashitung);
	printf ("Luas lingkaran dengan integral = %f\n", hasil);
	printf ("error = %f ", error);
}
