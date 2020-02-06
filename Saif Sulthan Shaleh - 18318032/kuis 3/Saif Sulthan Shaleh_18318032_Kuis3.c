#include <stdio.h>
#include <math.h>
int main()
{
	float r,t,ri,deltar,deltaa,deltat,area,dr,dt,j,i, lingkaran,error;
	r=7;
	t=2*22/7;
	dr= 0.01;
	dt= 0.01;
	for (j=0;j<=t;j+=dt)
	{
	for (i=0;i<=r;i+=dr)
	{
		ri = (0.5 * (i+i+dr));
		deltar = ((i+dr)-i);
		deltat = ((j+dt)-j);
		deltaa = (ri*deltar*deltat);
		area += deltaa;
	}
	}
	lingkaran = 22/7 * r * r;
	printf("area = %f\n", lingkaran);
	printf("area = %f\n", area);
	error = (area-lingkaran)/lingkaran * 100;
	printf("error = %f", error);
	
}