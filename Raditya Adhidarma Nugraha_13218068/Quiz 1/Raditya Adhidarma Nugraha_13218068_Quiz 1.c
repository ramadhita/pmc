#include <stdio.h>
#include <math.h>

//Raditya Adhidarma Nugraha 13218068
//Program Gerak Parabola

//Inputs
const double v0 = 50;
const double theta = 1.047197551;
const int g = 10;

//Variables
double vx;
double vy0;
double t;

//Outputs
double x, y;

int main (){
	//Posisi setiap 10 ms
	vx = v0 * cos (theta);
	vy0 = v0 * sin (theta);
	printf ("vx = %f\n", vx);
	printf ("vy0 = %f\n", vy0);
	printf ("\n");
	
	x = 0; //in meter
	y = 0; //in meter
	t = 0; //in second
	
	while (y >= 0) {
		printf ("t = %f\n", t);
		printf ("x = %f\n", x);
		printf ("y = %f\n", y);
		printf ("\n");
		t = t + 0.01;
		x = (vx * t);
		y = (vy0 * t) - (0.5 * g * t * t);
	}
	
	printf ("Jarak Terjauh = %f\n", x);
	
}
