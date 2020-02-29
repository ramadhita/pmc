// Nama           : Ian Azarya Aryanto
// NIM            : 13218055
// Kelas          : K02 EL2008

#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793
#define g 100

int main () {
	double qin = 1; //Debit keluarnya air dari keran 1 liter/s
	double r_hole = 0.25; // Jari-jari lubang dasar tangki dalam dm
	double A2 = PI*(r_hole)*(r_hole); //Luas lobang dasar tangki dalam dm^2
	double ht=0; //Ketinggian tangki 
	double dht=0; //Perubahan tinggi tangki
	double dt = 0.1; //Partisi waktu yang digunakan
	double vout = sqrt(2*g*ht); //Rumus kecepatan air keluar dari lobang 
	double t =0;
	double arr_h[4000]; //Array penampung data ketinggian air
	int index=0;
	FILE* filebaca;
	
	while ((ht>=0)&&(ht<=10)&&(index<4000)) { //Selama tangki berisi,belum penuh, dan index belum mencapai length dari arr_h 
		printf("ketinggian air pada t = %lf s => %lf\n",t,ht);
		arr_h[index]=ht;
		dht = ((qin-(A2*vout))*dt)/100; //Rumus perubahan ketinggian
		ht += dht; //Update ketinggian air dalam tangki
		vout = sqrt(2*g*ht); //Update nilai kecepatan keluar air dari lubang pada ketinggian setelah terjadi perubahan dht
		t+=dt; 
		index++;
		}
	
	filebaca = fopen("IanAzaryaAryanto_13218055_Quiz07_CSV.csv","w");
	t=0;
	fprintf(filebaca, "t(s) , h(t)(dm)\n");
	for (int i =0;i<index;i++){
		fprintf(filebaca, "%lf , %lf\n",t,arr_h[i]); //Memasukkan data ke dalam file csv
		t+=dt;
		}
	fclose(filebaca);
	return (0);
}

