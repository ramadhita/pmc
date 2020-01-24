#include <stdio.h>
int main(void){
	double waktu, counter;
	double jarak_x, jarak_y;
	
	waktu =(2*(50*0.866)/10) ;
	counter = 0;
	while (counter<=(waktu))
	{
		jarak_x = (25*counter);
		jarak_y = (50*0.866*counter)-(5*counter*counter);
		counter = counter + 0.01;
		printf ("saat t = %.2f s bola berada pada", counter);
		printf("(%.2f,", jarak_x);
		printf("%.3f)\n", jarak_y);
	}
	jarak_x = 25*waktu;
	printf ("jarak terjauh bola adalah %.2f m\n", jarak_x);
	return(0);
}