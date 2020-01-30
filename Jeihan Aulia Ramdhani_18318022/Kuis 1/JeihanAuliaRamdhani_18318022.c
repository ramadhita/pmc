#include <stdio.h>
#include <math.h>
#define sudut 60
#define Vo 50
#define gravitasi 10

int main (void)
{
	float x, y, jarakmax,Vox,Voy, t,tmax;
	t= 0;
	Vox= Vo*0.5;
	Voy= Vo*0.5*sqrt(3);
	jarakmax= (Vo*Vo*0.5*sqrt (3))/(gravitasi);
	tmax= jarakmax/Vox;
	while (t<tmax)
	{	x= Vox*t;
		y= (Voy*t)-(0.5*gravitasi*t*t);
		printf("\n posisi bola berada pada x %f" , x);
		printf(" meter dengan y %f", y);
		printf(" meter");
		t+=0.01;
	}
	printf( " x maksimum adalah  %f", jarakmax);
	return(0);
}
		
	
	
	
	
	
	
	
	
