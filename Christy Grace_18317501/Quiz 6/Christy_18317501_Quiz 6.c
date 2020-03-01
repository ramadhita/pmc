#include <stdio.h>
#include <stdlib.h>

 /*	EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
	Hari dan Tanggal	: 20 Februari 2020
	Nama (NIM)			: Christy Grace Siagian (18317501)
	Nama File			: konvolusi_1d.c
	Deskripsi			: Menghitung konvolusi sesuai dengan fungsi yang telah ditentukan
*/
float f1(float t){
	if((t>=1)&&(t<=3))
		return ((t-1)/2);
	else
		return 0;
}

float f2(float t){
	if((t<=0)&&(t>=-1))	
		return t+1;
	else if((t>0)&&(t<=1))
		return -t+1;
	else
		return 0;
}
int main(){
	float hasil; //hasil dari konvolusi
	float i,t,t_start,t_end,t2_start,t2_end,dt;
	FILE *data;

	dt = 0.01;
	t_start = 1+(-1); // t_start adalah t minimum dari f1 + t minimum f2
	t_end = 3+1; // t_start adalah t maksimu dari f1 + t maksimum f2
	t2_start = -1; // t minimum f2
	t2_end = 1; //t maksimum f2
	t = t_start;
	data = fopen("konvolusi.csv","w");
	fprintf(data,"time;f3\n");
	while(t<=t_end){
		hasil = 0;
		for(i=1;i<=3;i=i+0.01){
			hasil = hasil + (f1(i)*f2(t-i)*dt);
		}
		fprintf(data,"%.2f;%.2f\n",t,hasil);
		t=t+dt;
	}
	printf("successed compilled\n");
	fclose(data);
	
	
	return 0;
}