//Nama : Salma Majidah
//NIM : 18318010
//KUIS 3 - Luas lingkaran

//Mencari galat perbedaan perhitungan luas lingkaran menggunakan pendekatan
//Riemann dan pendekatan phi(r^2)
//Nilai jari-jari ditentukan r = 7
#include <stdio.h>
#define phi 3.1428
#define jari 7

//Luas lingkaran menggunakan rumus phi(r^2)
// phi = 3.1428
double lingkaran (double r){
	double luas;
	luas = phi * r *r ;
	return luas;
}

//Mencari nilai riemann integral r dr dengan batas dari 0 hingga 'batas'
//nilai dr = 0.00001
double sum1(double batas){
	double integral = 0;
	double r = 0;
	double i;
	for (i=0; i<=(100000*batas); ++i){
		integral += r * (0.00001);
		r += 0.00001;
	}
	return integral;
}

//Mencari nilai riemann integral d(tetha) dengan batas dari 0 hingga 'batas'
//nilai d(tetha) = 0.00001
double sum2(double batas){
	double integral = 0;
	double i;
	for (i=0; i<=(100000*batas); ++i){
		integral += (0.00001);
	}
	return integral;
}

//Main Program
int main (){
	double luas_lingkaran = lingkaran (jari);
	double luas_riemann = sum1(jari)* sum2(2*phi);
	double galat = luas_riemann - luas_lingkaran;
	printf("Dengan nilai r = 7 \n");
	
	//Luas menggunakan rumus phi(r^2)
	printf("Luas menggunakan rumus phi(r^2) = %f \n", luas_lingkaran);
	
	//Luas menggunakan pendekatan Riemann 
	printf("Luas menggunakan pendekatan Riemann = %f\n", luas_riemann);
	
	//Galat
	printf ("Galat kedua rumus adalah : %f \n", galat);
	
	return 0;
}
