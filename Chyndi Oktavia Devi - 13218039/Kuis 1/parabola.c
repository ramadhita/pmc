#include<stdio.h>
#include<math.h>

int main()
{
	int g=10, vo=50;
	float posx, posy, tmax, xmax, t,sint, cost;
	t=0;
	

	sint = 0.866025;
	cost = 0.5;	
	xmax = (2*vo*vo*sint*cost)/g;
	tmax = (2*((vo*sint)/g));


	//printf("tmax, %lf", tmax);
	while (t<=tmax)
	{

		posx=vo * cost * t;
		posy=(vo*sint*t)-(0.5*g*t*t);
		printf("Posisi x setiap 10 ms : %f \n", posx);
		printf("Posisi y setiap 10 ms: %f \n", posy);
		t = t+0.01;
	}
	printf("Jarak maksimal bola %.1f meter", xmax);
	return 0;
	
}