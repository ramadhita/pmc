//Nama: Salma Majidah
//NIM :18318010
//KUIS 6

//Konvolusi
#include <stdio.h>
#include <string.h>

//f2(t) = t+1 untuk -1<t<0 dan 1-t untuk 0<t<1
double f2 (double x, int t){
	if ((x-t)<= 0 && (x-t)>=-1)
		return(x-t+1);
	else if ((x-t)> 0 && (x-t)<=1)
		return(1-x+t);
	else
		return 0;
}

//f1(t) = 0.5t-0.5
double f1(double x){
	if ((x>= 1) && (x<=3))
		return ((0.5*x)-0.5);
	else
		return 0;
}

//Program Utama
int main (){
	int t;
	double f3, x;
	FILE *fp;
	fp = fopen("konvolusi.txt", "w");
	for (x=0.8; x<=4.4; x+=0.2){
		f3 = 0;
		for (t=0; t<=10; t++){
			f3 += f1(t)*(f2(x,t));}
		fprintf(fp, "%.1lf	%.2lf\n", x, f3);
	}
	fclose(fp);
	return 0;
}



