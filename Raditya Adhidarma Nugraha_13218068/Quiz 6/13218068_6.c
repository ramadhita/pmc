#include <stdio.h>
#include <math.h>

/* dV/dt in = 0.001 m^3/s
 * dV/dt out = sqrt (2*g*h) * Aout
 * V = A*h
 * dh/dt in = dV/Adt = 0.001/A
 * A = 1 m^2
 * Aout = pi*d*d/4 = 19.635 / 10000 m^2
 * dh/dt out = sqrt (2*g*h) * Aout/A
 * Total : dh/dt = Q/A - sqrt (2*g*h) * Aout/A
 */

const double A = 10000;
const double d = 5;
const double Q = 1000;
const double g = 1000;
const double dt = 0.01;

double Aout;
double h0;
double h;
double t;
double dh;

FILE* fi;

int main (){
	fi = fopen ("13218068_6.csv", "a+");
	Aout = 3.1416 * d * d / 4;
	h0 = 0;
	t = 0;
	dh = 1;
	
	while ((h < 100) && (dh > 0.0000001)){
		fprintf (fi, "%lf,%lf\n", t, h);
		printf ("%lf, %lf, %lf\n", t, h, dh);
		
		h0 = h;
		dh = (Q - (sqrt (2 * g * h0) * Aout)) * dt / A;
		h = h0 + dh;
		t = t + dt;
	}
	
	fclose (fi);
	return 0;
}
