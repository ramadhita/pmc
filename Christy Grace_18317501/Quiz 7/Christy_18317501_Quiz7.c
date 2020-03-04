/*	Hari dan Tanggal	: 25 Februari 2020
	Nama (NIM)			: Christy Grace Siagian (18317501)
	Deskripsi			: Mencari waktu tangki agar terisi full ketika ada kebocoran di dasarnya
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double Q_keran,  A_lubang, H_air, g,A_bak;
	double dv,volume_bak,volume_terisi,dt,volume_terbuang,Q_lubang;
	double t,kecepatan;
	FILE *file;
	
	t=0;volume_terisi = 0;		
	Q_keran = 1000;					// debit keran dalam cm kubik per sekon
	dt = 1;
	A_bak =10000;					// volume bak dalam cm kubik
	volume_bak = 100*100*100;		// luas alas bak
	A_lubang = 3.14*2.5*2.5;		// luas lubang dalam cm kuadrat
	
	
	file = fopen("Air_Bocor.csv","w");
	
	while((H_air<100)&&(Q_keran-Q_lubang>0.0001)){ // sampai q yang masuk sama dengan q keluar atau konstan
		H_air = volume_terisi/A_bak;
		volume_terisi = volume_terisi + (Q_keran*dt);
		kecepatan = sqrt(2*1000*H_air);
		Q_lubang = A_lubang*kecepatan;
		volume_terbuang = Q_lubang*dt;
		volume_terisi = volume_terisi - volume_terbuang;	
		H_air = volume_terisi/A_bak;
		fprintf(file,"%lf;%lf\n",t,H_air);
		t=t+dt;
		
	}
	
	fclose(file);
	
	return 0;
}