#include <stdio.h>
#include <math.h>

const double r = 7;
const double pi = 3.14159265359;

double integralxdx (double a, double b){
	long int n = 100000000;
	long int i;
	double Sum = 0;
	double dx = (b - a) / n;
	double x = 0;
	for (i = 0; i <= n; i = i + 1){
		x = x + dx;
		Sum = Sum + x * dx;
	}
	return Sum;
}

double integral1dx (double a, double b){
	long int n = 100000000;
	long int i;
	double Sum = 0;
	double dx = (b - a) / n;
	for (i = 0; i <= n; i = i + 1){
		Sum = Sum + dx;
	}
	return Sum;
}

int main (){
	double ar = 0; double br = 7;
	double ap = 0; double bp = 2 * pi;
	double A0; double A1;
	A0 = pi * r * r;
	printf ("Luas (rumus) = %lf\n", A0);
	A1 = integral1dx (ap, bp) * integralxdx (ar, br);
	printf ("Luas (integral) = %lf\n", A1);
	return 0;
}
