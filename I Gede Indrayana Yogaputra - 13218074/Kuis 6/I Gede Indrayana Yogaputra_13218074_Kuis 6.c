/*Nama: I Gede Indrayana Yogaputra
 * NIM: 13218074 */

#include <stdio.h>
#include <math.h>

//Fungsi u(x)(fungsi step), f1(t), f2(x, t)
double u (double x){
	double y=0;
	if (x>0){
		y=1;}
	return y;}

double f1 (double t){
	double y = ((t-1)/2)*(u(t-1)-u(t-3));
return (y);}

double f2 (double t, double x){
	double y =(-x + t + 1)*(u(x-t)-u(x-t-1)) + (x - t + 1)*(u(x-t+1)-u(x-t));
	return(y);}
				
int main (void){
	FILE* fp;
	double k, t, x;
	fp = fopen("data4.csv", "w+");
	//Pendekatan integral konvolusi dengan nilai delta t = 0.01
	for (x = 0;x<=4;x+= 0.01){
		k = 0;
		for (t=0; t<=x; t+=0.01){
			k = k+0.01*(f1(t)*f2(t,x));}
		fprintf(fp, "%f\n", k);}
	fclose(fp);
return(0);
}		
