// Nama         : Ian Azarya Aryanto
// NIM          : 13218055
// Kelas        : K02 EL2008

#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

// Menggunakan pendekatan secara polar

// Deklarasi Fungsi 
double f(double l);

int main () {
 double manual_value ,error,r,N;
 double area = 0;
 double dr = 0;
 
 printf ("Enter the partition : ");
 scanf("%lf", &N);
 // N berupa partisi dimana semakin besar N, semakin presisi output luas lingkaran
 printf("Enter the radius: ");
 scanf("%lf", &r);
 // Jari-jari atau radius dari lingkaran
 printf("\n");
 dr = r/N;
 //Partisi lebar pita
 manual_value = (PI*r*r);
 
for ( double i = 0; i <= 7; i += dr) {
	area += f(i)*dr;
	// Luas dari lingkaran berupa penjumlahan dari luas semua pita-pita 
	// yang berupa keliling*dr 
}
 
 error = ((manual_value - area)/manual_value)*100;

if (error <0) {
	error = error*-1;
	// Dimultakkan
	}
	
printf ("The area of the circle with radius %.0f is = %f \n", r, area);
printf ("Persentase error adalah = %lf%%", error);

// Output berupa luas area dari lingkaran dan persentase error atau 
// penyimpangan dari perhitungan manual (PI*r*r)
return (0);
}

double f(double l){
	// Fungsi untuk mencari keliling pada jari-jari tertentu
	return (2*PI*l);
}
