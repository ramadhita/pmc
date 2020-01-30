//Nama 	: Joshtein Andrew Widjaja
//NIM 	: 13218018
#include <stdio.h>
#include <math.h>
int main (void){
double y = 0;
double x = 0; 
double t = 0;
double vyo = (50*0.5 *sqrt(3)) - (10*t);
double vx = (50*0.5);
double vy = (50*0.5 *sqrt(3)) - (10*t);
double xmax = 0;
while (vy >= 0){
	printf("x = %f | y = %f\n ",x,y);
	t = t + 0.01;
	x = (vx*t);
	y = (vyo*t) - (0.5*10*t*t);
	vy = (50*0.5 *sqrt(3)) - (10*t);
}
while (y > 0){
	printf("x = %f | y = %f\n ",x,y);
	t = t + 0.01;
	xmax = x;
	x = (vx*t);
	y = (vyo*t) - (0.5*10*t*t);
}
printf("Jarak maksimum horizontal = %f meter dari titik awal \n",xmax);	
return 0;
}
