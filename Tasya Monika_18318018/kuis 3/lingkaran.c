/* luas lingkaran : bandingin pake pi r kuadrat sama pake integral
*/

#include <stdio.h>
#include <math.h>

int main()
{
	float r, i, j, pi;
	double luas_1, luas_2, intdlm, dteta, dr, error;
	
	r = 7;
	pi = 3.1416;
	luas_1 = pi*r*r;
	
	luas_2 = 0;
	intdlm = 0;
	i = 0;
	j = 0;
	dteta = pi/20000;
	dr = r/20000;
	
	while (i < r){
		intdlm = intdlm + (r*dr);
		i = i + dr;
	}
	
	while (j < pi){
		luas_2 = luas_2 + (intdlm*dteta);
		j = j + dteta;
	}
	
	error = luas_2 - luas_1;

printf("Luas rumus = %f \n", luas_1);
printf("Luas integral = %f \n", luas_2);
printf("Error = %f \n", error);

return(0);
}