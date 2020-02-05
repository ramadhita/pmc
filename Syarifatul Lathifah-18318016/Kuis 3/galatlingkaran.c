#include<stdio.h>
#include<math.h>

int main()
{	
	double pi, r, dx, y, i, luas, luas1, luas2, galat;

	pi = 3.14159265;
	r = 7;
	dx = 0.0000001;
	
	luas1 = pi*r*r;
	
	i = 0-7 ;
		
	luas = 0;
	
	while (i <= r)
	{
	y = sqrt(r*r - i*i);
	luas = luas+(dx*y);
	i = i+dx;
	}
	
	luas2 = 2 * luas;
	
	galat = (luas1-luas2)/luas1 * 100;
	printf("%.10lf \n", galat);
	return(0);
}