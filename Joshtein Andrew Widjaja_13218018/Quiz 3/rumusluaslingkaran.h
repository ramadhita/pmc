#include <stdio.h>
#include <math.h>
const double pi = 3.141592653;
const double increment = 0.000001;
double integral1 (double r){
	double sum = 0;
	double x = 0;
	double i = 0;
	double HasilIntegral1;
	const double dr = 0.000001;
	const double dx = 0.0000005;
	while (i<r){
		if (x <= (r/2)) {
			sum = sum + (2*x*dr);
			x = x + dx;
			i=i+increment;
		}
		else {
			x = x - dx;
			sum = sum + (2*x*dr);
			i=i+increment;
		};
	};
	HasilIntegral1 = sum;
	return(HasilIntegral1);
};
double integral2 (double hasil1){
	double sum = 0;
	double i = 0;
	double HasilIntegral2;
	const double dteta = 0.000001;
	while (i<(2*pi)){
		sum = sum + dteta;
		i=i+increment;
	};
	HasilIntegral2 = hasil1*sum;
	return(HasilIntegral2);
};

	
