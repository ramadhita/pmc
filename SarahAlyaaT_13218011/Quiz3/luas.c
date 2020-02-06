#include<math.h>
double luas(double r)
{
	double l;
	l = M_PI * r * r;
	return(l);
}

double integral_r(double r0, double r)
{
	//dengan r0 < r
	double dx,xi,a = r0,b = r,res = 0;
	long int n = 999999999;
	int i=1;
	dx = (b-a)/n;
	for (i = 1; i<n; i+=1)
	{
		xi = a + (dx * i);
		res = res + (dx * xi); // f(xi) = xi
	}
	return (res);
}

double integral_ang(double ang0, double ang)
{
	//dengan ang0 < ang
	double dx,a = ang0,b = ang,res = 0;
	long int n = 999999999;
	int i=1;
	dx = (b-a)/n;
	for (i = 1; i<n; i+=1)
	{
		res = res + (dx * 1); // f(x) = 1
	}
	return (res);
}