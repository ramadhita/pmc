#include <stdio.h>
#include <math.h>

int main()
{
	FILE *filestep;
	filestep = fopen("stepresponse.txt","w");
	float dt, r, c, tmax, dv, vc, t;
	
	dt = 0.00001;
	vc = 0;
	r = 10000;
	c = 0.000001;
	tmax = 16*r*c;
	t = 0;
	vc = 0;
	

	for (t = 0; t<=tmax; t+=dt)
	{dv = dt*(5-vc)/(r*c);
	 vc += dv;
	 t += dt;
	 fprintf(filestep, "%f;%f\n", t, vc);}

	fclose(filestep);
}
