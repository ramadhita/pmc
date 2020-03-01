#include <stdio.h>
#include <math.h>

#define g 10
#define pi 3.14
#define dt 0.001

int main(){
	double h=0;
	double hmax=1;
	double t=0;
	double vol_tumpah, v , vol;
	double A = 0.05 * 0.05 * pi;
	
	FILE * fp;
	fp = fopen ("quiz8.txt","w+");
	
	while (h<hmax ){
		printf("waktu %lf\n", t);
		printf("ketinggian air = %lf\n", h);
		printf("vol tumpah = %lf\n", vol_tumpah);
		
		printf("\n\n");
		
		fprintf(fp , "%lf \t%lf \n",t, h );
		
		// input air
//		h+=0.001;
		vol+= dt ;
		//////////////
		
		h= vol/1;
		
		v=sqrt(2*g*h);
		vol_tumpah=A*v*t;
		
		h-=vol_tumpah;
		
		t+=dt;
		
	}
	printf("waktu yang dibutuhkan : %lf\n", t);
	
	fclose (fp);
}
