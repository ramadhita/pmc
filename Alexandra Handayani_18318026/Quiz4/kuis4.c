//Alexandra Handayani 18318026
#include <stdio.h> 
#define delta 0.0001 //perubahan waktu
#define resistor 10000 
#define vinput 5 
#define kapasitor 0.000001
	
double t; 
double b = 1/(resistor*kapasitor); //koefisien 2 persamaan (1/RC) 
double c = ((-vinput)/(resistor*kapasitor)); //koefisien 3 persamaan (-Vs/RC) 

//fungsi dari tegangan tiap waktu (rekursif) 
double tegangan (double t) {
	double hasil;
	//ketika t=0 atau kurang, maka tegangan saat itu adalah 0 (short)  
	if (t<=0) {
		hasil = 0; 
	} 
	//ketika t>0, maka tegangan akan naik secara eksponensial hingga steady state
	//rumus dari penurunan rumus diferensial orde 1 
	else {
		hasil = (tegangan(t-delta) - (c*delta))/(1+b*delta); 
	}
	return hasil; 

}

int main () { 
	//membuka file baru bernama vt sebagai tempat penulisan program
	FILE *fp;
	fp = fopen("vt.csv","w"); 
	
	//penulisan berulang hingga t=0.08 (adalah t ketika pasti sudah steady state)
	for (t=0; t<0.09; t=t+delta) { 
		fprintf (fp, "%lf; %lf\n", t,tegangan(t)); 
	}
	//menutup file 
	fclose(fp); 
}


 

	

