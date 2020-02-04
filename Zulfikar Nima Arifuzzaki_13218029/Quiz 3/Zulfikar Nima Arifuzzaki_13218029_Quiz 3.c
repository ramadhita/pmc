/* NIM/NAMA	: 13218029 / ZULFIKAR NIMA ARIFUZZAKI
 * KUIS : LUAS LINGKARAN MENGGUNAKAN INTEGRAL
 */

#include <stdio.h>
#include <math.h>

int main()
{
	double i;
	double r;
	double luas_i;
	double luas_r;
	double dx;
	double galat;
	
	//MEMINTA INPUT r
	printf("Masukkan nilai R: ");
	scanf("%lf", &r);
	
	// MENGITUNG LUAS DENGAN RUMUS
	luas_r = 3.14*r*r;
	printf("Luas lingkaran dengan rumus : %lf \n", luas_r);
	
	//MENGITUNG LUAS DENGAN INTEGRAL
	//inisiasi luas dan dx
	luas_i = 0;
	dx = 0.0000001;
	i = -r;
	//menghitung luas secara parsial
	while (i < r)
	{
		luas_i += dx*sqrt(r*r-i*i);
		i += dx;
		}
	//mengitung luas akhir menggunakan integral dan galat
	luas_i *= 2;
	galat = fabs(luas_i - luas_r);
	
	//menampilkan luas lingkaran dan galat dari perhitungan menggunakan integral
	printf("Luas lingkaran dengan integral : %lf \n", luas_i);
	printf("Galat perhitungan : %lf \n", galat);
	
	return(0);
	}
