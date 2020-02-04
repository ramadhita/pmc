#include "rumusluaslingkaran.h"
double r,LuasRumus,LuasDeretRiemann,Error;
int main(void){
	printf("Masukkan besar jari-jari lingkaran = ");
	scanf("%lf",&r);
	LuasDeretRiemann = integral2(integral1(r));
	printf("Luas lingkaran adalah = %.10f\n",LuasDeretRiemann);
	LuasRumus = r*r*pi;
	printf("Luas lingkaran dengan rumus jadi = %.10f\n",LuasRumus);
	Error = ((LuasRumus - LuasDeretRiemann)/LuasRumus)*100;
	printf("error = %f%%",Error);
return(0);
};
