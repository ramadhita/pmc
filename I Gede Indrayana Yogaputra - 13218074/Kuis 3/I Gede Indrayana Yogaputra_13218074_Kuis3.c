/*Nama: I Gede Indrayana Yogaputra
 * NIM: 13218074 
 * Program mencari luas lingkaran*/

#include <stdio.h>
#include <math.h>


int main(void)
{ 
	//Inisialisasi
	double phi, r, i, j, L1, L21, L22, L2;
	r = 7;
	phi = 22.0/7;
	L2 = 0;
	L21 = 0;
	L22 = 0;	
	L1 = phi*r*r;
	
	//Mencari integral pertama (r dr)  menggunakan jumlah riemann
	for (i = 0; i <= r; i+= 0.0000001){
		L21 = L21 + i*0.0000001 ;
	}
	//Mencari integral kedua (perhatikan bahwa hasil integral pertama ialah konstanta)
	while (j<= 2*phi){
		L22 = L22 + 0.0000001;
		j += 0.0000001;
	}
	//Menggabungkan konstanta integral pertama dengan integral sudut dari 0 hingga 2 phi
	L2 = L21*L22;
	
	//Display
	printf("Luas pertama (menggunakan rumus langsung) ialah %.15f \n", L1);
	printf("Luas kedua (menggunakan integral) ialah %.15f \n", L2);
	printf("Error ialah %.15f \n", 1.0*(L1-L2)/(1.0*L1));
	return(0);
}
	
		
	
