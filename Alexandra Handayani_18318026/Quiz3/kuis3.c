//Alexandra Handayani 18318026 

#include<stdio.h> 
#include<math.h> 

#define pi 3.14 
#define jari 7 
#define N 10000

//rumus luas lingkaran yang sebenarnya
double luas1 (double a) 
{ 
	double hasil; 
	hasil = pi*a*a; 
	return hasil; 
} 

//rumus luas lingkaran yang menggunakan deret Riemann 
double integrasi (double a, double b, double r)
{ 
	
	double i, sum; 
	sum = 0; 
	for (i=a; i<b; i+=(b-a)/N) //iterasi pada pembagian delta x 
	{
	sum = sum + (r*(b-a)/N); //adalah penjumlahan dari partisi y.deltax
	}
	return sum;
}
	
//fungsi utama
int main () { 
	double luas,luas2,luas2akhir, error;
	luas = luas1(jari); 
	luas2 = integrasi(0,7,jari); //integrasi pertama berdasar jari-jari
	luas2akhir= integrasi(0,pi,luas2); //integrasi kedua dengan sudut
	error = (((double)luas2akhir-(double)luas)/(double)luas2akhir)*100; //persen error
	
	//output
	printf("Luas dengan rumus lingkaran = %lf\n", luas); 
	printf("Luas dengan integrasi = %lf\n", luas2akhir);
	printf("Error = %lf persen\n", error);  
	return 0;
} 
