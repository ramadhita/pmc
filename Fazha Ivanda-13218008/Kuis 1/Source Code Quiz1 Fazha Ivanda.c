#include <stdio.h>

/* Fazha Ivanda/13218008
Program menetukan posisi bola yang dilempar dengan Vo 50 m/s dan sudut 60o*/
int main(void)
{
	double 	x, /* variabel x sebagai posisi horizontal,y posisi vertikal,t sbg waktu*/
			y,
			t,
			xmax,
			ymax,
			tmax;
	tmax = 2*(50 * 0.866)/10; /* menghitung waktu maksimal bola diudara dengan rumus gerak parabola */
	/* waktu dan posisi awal bola */
	t = 0;
	xmax = 0;
	ymax = 0;
	printf("Program menentukan posisi bola (x,y) yang dilempar parabola setiap 0.01 s dengan kecepatan lemparan awal 50 m/s dan sudut lemparan 60o ./n");
	printf("\n");
	/* mulai loop */
	while (t <= tmax)
	{
		/* menentukan posisi bola berdasarkan waktu tiap 10ms */
		y = ((50*t*0.866) - (0.5*10*t*t));
		x = 50*0.5*t;
		printf("posisi bola pada t = %f s adalah (%f , %f) .\n",t,x,y);
		t = t + 0.01;
		/* menentukan posisi maksimal bola */
		if (y > ymax) 
			ymax = y;
		if (x > xmax)
			xmax = x;
	}
	printf("\n");
	printf("Ketinggian maksimum adalah : %f m .\n",ymax);
	printf("Jarak maksimum adalah : %f m .\n",xmax);
	return (0);
}	
		
	