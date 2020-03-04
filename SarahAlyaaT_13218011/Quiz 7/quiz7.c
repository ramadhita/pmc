#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	// Inisialisasi
	float h=0.00001, ho=0, t=0, dt = 0.01, r = 0.025;
	int count=0;
	FILE *fp;
	fp = fopen("test7.csv", "w"); // Membuka file
	while (h<1 && count<4){ //Kondisi bak belum penuh dan ketinggian air belum konstan
		h = h + (0.001-M_PI*r*r*sqrt(20*ho))*dt; 
		if (h == ho){ //Ketinggian air sudah konstan
			count = count + 1;
		}
		t = t + dt;
		ho = h;
		fprintf(fp, "%.10f,%.10f\n",t,h); //Input data ke file
	}
	fclose(fp); //Menutup file
}
	
