//Nama :Masrina Vivianna Simanjuntak
// NIM :18318028

//Sebuah bola dilempar dengan kecepatan 50 m/s dengan sudut 60 derajat . Buatlah tracking posisi (x,y) setiap 10 ms
//Hitung jarak terjauh sampai ke tanah

#include <stdio.h>
#include <math.h>
int main (){
	int Vo;
	float x,y,Vox,Voy,tmax,xmax,t;
	Vo=50;
	Vox=Vo*0.5;
	Voy=Vo*0.5*sqrt(3);
	t=0.01;
	tmax=2*Voy/10;
	xmax=Vox*tmax;
	x=Vox*t;
	y=(Voy*t)-(0.5*10*t*t);
	while(t<=tmax){
		printf("Posisi bola adalah:(%.2f,%.2f)\n",x,y);
		t=t+0.01;
		x=Vox*t;
		y=(Voy*t)-(0.5*10*t*t);
	
	}
	printf("Jarak x terjauh yang ditempuh bola adalah : %.2f\n", xmax);
	
return(0);

}
