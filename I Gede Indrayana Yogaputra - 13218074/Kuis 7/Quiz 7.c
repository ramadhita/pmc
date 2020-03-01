/*Nama: I Gede Indrayana Yogaputra
 * NIM: 13218074 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double t; //waktu
	double dt = 0.01;
	double h = 0; //tinggi
	double dh;
	double LB = M_PI * 2.5 * 2.5 * 0.01 * 0.01; //luas kebocoran
	double DM = 0.001; //debit masuk (disingkat dm)
	double V = 0; //volume baru
	double Vlama; //volume lama
	
	//buka file
	FILE *fp = fopen("kuis7.txt", "w+");
	
	//selama V belum sama dengan Vlama (steady state), diset waktu maksimum 300 s
	while (V != Vlama && t < 300){
		Vlama = V;
		dh = DM * dt - LB * sqrt(2*9.8*h)*dt; //pertambahan tinggi ialah nilai debit masuk dikali dt dibagi luas penampang (karena 1 tidak ditulis)
		//lalu dikurangi dengan akar 2.g.h (rumus kecepatan keluar air) dikali dt dibagi 1 (luas penampang)
		t = t+dt; h=h+dh; V = V + 1*dh;
		//output
		printf("%.6lf\n", V);
		fprintf(fp, "%.6lf, %.6lf \n", V, t);
	}
	fclose(fp);
	return(0);
}
		
	
	
	
