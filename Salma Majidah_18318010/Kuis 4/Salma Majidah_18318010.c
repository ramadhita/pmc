//Nama: Salma Majidah
//NIM : 18318010

//KUIS 4
//Membuat grafik step response rangkaian integrator RC dengan
//Vi=5 v, R = 10 kOhm, C = 10 uF.

#include <stdio.h>
//Inisiasi nilai R,C, dan Vi
#define R 10000
#define c 0.000001
#define vi 5

int main (){
	//Pointer File
	FILE *fp; 
	fp = fopen("kuis4.txt", "w");
	
	//Deklarasi koefisien T = RC, dan nilai dt = T
	double koef = (c*R);
	double dt;	
	dt = koef;
	
	//Deklarasi awal nilai v dan waktu t
	double t = 0, vs = 0, v=0;
	
	//Melakukan penulisan pada file untuk nilai awal v dan t
	fprintf(fp, "%.3lf	%.2lf \n", v, t);
	
	//Menyimpan nilai awal v pada vs
	vs = v;
	
	//Menghitung nilai v selanjutnya
	v = (vi/koef + vs/dt)/((1/koef)+(1/dt));
	
	//Melakukan perlakuan yang sama hingga diperoleh steady state (dv = 0)
	while ((v-vs) > 0){
		t += dt;
		fprintf(fp, "%.3lf	%.2lf \n", v, t);
		vs = v;
		v = (vi/koef + vs/dt)/((1/koef)+(1/dt));
	}
	//Menutup file	
	fclose(fp);
	return 0;
}
