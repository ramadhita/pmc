// Menghitung luas lingkaran r = 7 cm

#include <stdio.h>

int main (){
	float phi = 3.14;
	float luasrumus,luasintegral, r;
	float i,deltax,selisih,deltar, j, deltaluas;
	deltar = 0.001;
	deltaluas=0;
	deltax=0.001;
	r = 7;
	luasintegral= 0;
	luasrumus = 3.14 *r*r;
	
	
		
	for(i=0; i<=phi;i+=deltax){
		luasintegral= luasintegral + (deltaluas*deltax);
		deltaluas=0;
		for (j=0;j<=r;j+=deltar){
			deltaluas = deltaluas + (deltar*r);
		}
		
	}
	
	
	printf(" Luas lingkaran dengan pendekatan integral : %f \n", luasintegral);
	printf ("Luas lingkaran dengan perhitungan rumus : %f \n", luasrumus);
	selisih = luasrumus-luasintegral;
	printf ("Selisih dari keduanya adalah : %f \n", selisih);
	printf("%f", deltaluas);
	return (0);
}