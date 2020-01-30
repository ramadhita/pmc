#include <stdio.h>

int main()
{
	int Vo = 50;
	float costeta = 0.5;
	float sinteta = 0.87;
	float g = 9.8;
	float x,y,t,tmax;
	
	t = 0;
	x = (Vo*costeta*t);
	y = (Vo*sinteta*t)-(0.5*g*t*t);
	tmax = ((2*Vo*sinteta)/g);
	while (t<=tmax);{
		printf ("posisi benda(%f,%f)\n",x,y);
			t = t+0.01;
		}
		getchar();
		return 0;
}
	
