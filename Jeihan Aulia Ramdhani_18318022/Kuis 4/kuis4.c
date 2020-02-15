//Jeihan Aulia Ramdhani 18318022

#include <stdio.h>
#include <math.h>
#define R 10000
#define C 0.000001
#define Vs 5
#define deltat 0.001

float Vo(float t){ //fungsi untuk tegangan tiap waktu
	float b,c,vt;
	b= 1/(R*C);   //didapatkan dari penurunan rumus
	c= Vs/(R*C);
	
	if (t<=0){ 
		vt=0;
	}
	else {      //nilai tegangan saat t>0
		vt = (Vo(t-deltat)+c*deltat)/(1+b*deltat);
	}
	return(vt);
}

int main(){
	float i,tmaksimum;
	tmaksimum=5*R*C;
	
	FILE *file1;
	file1= fopen("tegangan.csv","w+"); //menulis file eksternal
	for (i=0;i<=tmaksimum;i+=deltat){  //loop untuk menulis data pada file eksternal
		fprintf(file1, "%f;%f\n",i,Vo(i));
	}
	fclose(file1); //menutup file
	return(0);
}
