/* Quiz 3 Pemecahan Masalah dengan C
 * Nama (NIM)	: Dzaky Fachrezi (18318040)
 * Deskripsi	: Program menentukan luas lingkaran berjari-jari 7
				  dengan rumus umum serta integral lipat, serta
				  menentukan galatnya
 */

#include <stdio.h>
#include <math.h>
#define pi 3.14

double integral (int r); // Deklarasi fungsi integral variabel r

int main (void)
{
	int r = 7; // Deklarasi nilai jari-jari lingkaran
	printf("Diketahui lingkaran berjari-jari 7\n"); // Menampilkan jari-jari lingkaran
	double L = (pi*r*r); // Menghitung nilai luas lingkaran dengan rumus umum
	printf("Luas lingkaran dengan perhitungan rumus umum = %f\n", L); // Menampilkan luas lingkaran dari perhitungan rumus
	printf("Luas lingkaran dengan perhitungan integral = %f\n", integral(r)); // Menampilkan luas lingkaran dari perhitungan integral
	printf("Galat perhitungan keduanya ialah %f", fabs(integral(r) - L)); // Menampilkan besar galat perhitungan luas lingkaran
}

double integral (int r) // Mendefinisikan fungsi intgeral
{
	// Integral pertama (dr)
	double a = 0; // Batas bawah integral pertama
	double b = r; // Batas atas integral pertama
	double dx = 0.001; // Interval partisi
	double n = ((b-a)/dx); // Jumlah partisi integral pertama
	double I1 = 0; // Inisiasi nilai integral pertama
	int i;
	
	for (i = 0; i < n; ++i) // Looping sebanyak partisi
	{
		double h1 = (a+(a+dx))/2; // Menghitung nilai f(x) dengan metoda riemann tengah
		I1 = I1 + (dx*h1); // Menghitung nilai integral riemann tengah
		a = a + dx; // Increment nilai a
	}
	
	// Integral kedua (dteta)
	double c = 0; // Batas bawah integral kedua
	double d = 2*pi; // Batas atas integral kedua
	double m = ((d-c)/dx); // Jumlah partisi integral kedua
	double I2 = 0; // Inisiasi nilai integral kedua
	int j;
	
	for (j = 0; j < m; ++j) // Looping sebanyak partisi
	{
		I2 = I2 + (dx*I1); // Menghitung nilai integral riemann tengah
	}
	return(I2); // Mereturn nilai integral kedua sebagai hasil dari fungsi
}	