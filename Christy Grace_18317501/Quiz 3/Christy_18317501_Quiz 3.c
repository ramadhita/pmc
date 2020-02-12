#include <stdio.h>
#include <math.h>

#define pi 3.14

/*
	Nama : Christy Grace Siagian
	NIM : 18317501
	Tanggal : 04 Februari 2020
	Tentang : Program Menghitung Luas Lingkaran dengan rumus biasa dan Integral
*/

int main(){
	int r;
	float luas_integral,luas_biasa,i,deltat,temp_luas,j,deltar;
	
	printf("Masukkan jari-jari lingkaran : \n");
	scanf("%d",&r);
	
	luas_biasa = pi*r*r;
	luas_integral = 0;
	deltat = 0.0001*pi;
	deltar = 0.0001*r;
	temp_luas=0;
	
	while(i<=2*pi){
		luas_integral = luas_integral + temp_luas*deltat;
		while(j<=r){
			temp_luas = temp_luas + r*deltar*0.5;
			j+=deltar;
		}
		i+=deltat;
	}
	printf("Luas lingkaran tanpa integral : %.4f\n",luas_biasa);
	printf("Luas lingkaran dengan integral : %.4f\n",luas_integral);
	printf("Error : %.4f",luas_biasa-luas_integral);
	return 0;
}