//sebuah tangki dengan volume 1m^3, diisi dengan 
//air 0.001m^3/detik
//pada dasar tangki terdapat lubang dengan jari2 0.025m 

//Alexandra Handayani 18318026 

#include <stdio.h> 
#include <math.h>

int main () { 
	//Deklarasi variabel 
	int rusuk = 1; //rusuk tangki 1m
	int t=0; //waktu 
	float Qin = 0.001; //debit air yang masuk tangki
	float vol_t = 0; //volume pada waktu tertentu, vol awal = 0  
	float LP_lubang = 3.14159*0.025*0.025; //area lubang di dasar tangki
	float h; //tinggi air pada tangki
	
	FILE *fp = fopen("volume_tangki.csv","w+");
	
	while ((h < rusuk)&&(t<75)) //t karena sudah mencapai steady-state 
	{ 
		h = vol_t / (rusuk*rusuk); //ketinggian adalah volume dibagi luas alas
		vol_t = vol_t + Qin*t - LP_lubang*sqrt(2*9.8*h)*t; //volume satu waktu 
		//adalah vol sebelumnya + volume masuk dari debit in dikurang volume yang keluar (dari hukum Bernoulli) 
		fprintf(fp,"%d; %f\n",t,h); //cetak ke dokumen
		t++; 
	}
	fclose(fp); //menutup file
	return 0; 
	
}
	 
	
