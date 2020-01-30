#include <stdio.h>

int main()
{
	int v = 50;
	int d = 60;
	int g = 10;
	float t, tmax, xmax, x,y;
	float sin120 = 0.866; 
	float cos60 = 0.5;
	float sin60 = 0.866;
	
	y=0;
	t=0;
	while(y>=0)
	{
		y = (v*t*sin60)-(0,5*g*t*t);
		if (y<0)
			break;
		x = v*t*cos60;
		
		t=t+0.01;
		printf ( "x = %.1f \n", x);
		printf ( "y = %.1f \n" , y);
	}
	
	printf (" jarak ke tanah lagi = %.3f" , x);
	
}
