/* bola dilempar dg sudut 60deg dan Vo 50m/s

Track posisinya tiap 10ms
Hitung Xmax
*/

#include <stdio.h>
#include <math.h>

//constants
#define g 10
#define vo 50


int main () //cari tmax aja dulu woi gausah nyusahin diri
{
	float t, tmax;
	double xmax;
	double xt, yt;
	float vox, voy;
	
	t = 0.0;
	
	vox = 0.5*50;
	voy = 0.87*50;

	tmax = (2*vo*0.87)/g;
	xmax = vox*tmax;

	while (t < tmax)
	{
		xt = vox*t;
		yt = (voy*t)-(0.5*g*t*t);
		
		t = t+0.01;
		
		printf("Posisi bola sekarang pada (%lf,", xt);
		printf("%lf) m \n", yt);
	}
	
	xmax = vox*tmax;
	printf("Bola kembali menyentuh tanah pada jarak %lf m \n", xmax);
}
		
		