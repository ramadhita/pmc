#include <stdio.h>
#include <math.h>
#include <string.h>

/*
	Nama : Christy Grace Siagian
	NIM : 18317501
	Tanggal : 21 Januari 2020
	Tentang : Program Gerak Parabola
*/
int main(){
	int Vo;
	float Vox,Voy,x,y,t,tmax,xmax;
	Vo = 50;
	t = 0;
	Vox = Vo*0.5;
	Voy = Vo*0.5*(sqrt(3));
	tmax = 2*Voy/10;
	xmax = Vox*tmax;
	while(t<= tmax){
		x = Vox*t;
		y = (Voy*t) - (5*t*t);
		printf("Posisi bola adalah (%.3f,%.3f)\n", x,y);
		t = t+0.01;
	}
	
	printf("Jarak x sewaktu jatuh adalah : %.3f",xmax);
	
	


	return 0;
}