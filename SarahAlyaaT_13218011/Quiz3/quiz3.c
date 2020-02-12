#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"luas.h"

int main(void)
{
	//Deklarasi tipe variabel
	double luas_int, r, error = 0;
	
	//Penginputan nilai jari-jari
	printf("Input r: ");
	scanf("%lf",&r);
	
	//Penghitungan
	luas_int = integral_r(0,r)*integral_ang(0,2*M_PI);
	error = luas(r) - luas_int;

	//Hasil
	printf("Luas dengan rumus: %lf\n", luas(r));
	printf("Luas dengan integral: %lf\n", luas_int);
	printf("Error: %lf\n", error);
}

