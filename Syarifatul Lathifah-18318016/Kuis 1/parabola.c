#include<stdio.h>
#include<math.h>

int main(void)
{   
	double x, y, Voy, Vox, t, xmax;    

	t = 0;
	x = 0;
	y = 0;
	Vox = 50*0.5;
	Voy = 50*0.866;
	xmax = (2*Vox*Voy)/10;
	
	while (y>=0)
{
	printf("Bola berada pada posisi %lf, %lf\n", x, y);
	t = t+0.01;
	y = (Voy*t) - (0.5*10*t*t);
	x = Vox*t;
}
	printf("Jarak terjauh yang ditempuh bola adalah %lf meter", xmax);
	
	return(0);
}