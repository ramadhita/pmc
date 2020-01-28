//bola 60 derajat, v=50m/s
//program untuk 
//1.tracking posisi (x,y) setiap 10 ms
//2.Hitung jarak ke tanah lagi 

//Alexandra Handayani 18318026 PMC K-02

#include<stdio.h>
#include<math.h>
#define kecepatan 50.0
#define gravitasi 10  
#define sudut 1.0472

int main (void) 
{ 	
	double t,x,y; //deklarasi variabel 
	t=0; 
	do //proses untuk menunjukkan posisi x dan y tiap 10 ms
	{ 	t = t + 0.01;
		x = (kecepatan * t * sin(sudut)); 
		y = (kecepatan * t * cos(sudut))- (0.5 * gravitasi * t * t); 
		printf("(%lf,%lf)\n",x,y); 
	}	
	while (y > 0); //hingga akhirnya jatuh ke tanah 
	printf("Jarak terjauh = %lf \n",x); 
	return(0);
} 

	
	
