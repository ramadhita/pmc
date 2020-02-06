#include <stdio.h>
#include <math.h>

#define PI 3.14159265359
#define R 7.0

void main()
{
	double luasintegral, luasrumus;
	double i;
	double integralr = 0.0, integralt = 0.0;
	double dr = 0.00001, dt = 0.00001;
	//dr
	for (i = 0.0; i < R; i += dr)
	{
		integralr += i * dr;
	}
	
	//dteta
	for (i = 0.0; i < 2 * PI; i += dt)
	{
		integralt += integralr * dt;
	}

	luasintegral = integralt;
	luasrumus = PI * R * R;

	//display
	printf("%f \n", luasintegral);
	printf("%f \n", luasrumus);
	printf("%f", (luasrumus - luasintegral));
}

