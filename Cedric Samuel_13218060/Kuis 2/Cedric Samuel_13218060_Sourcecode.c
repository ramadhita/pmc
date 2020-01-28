/*Nama  : Cedric Samuel
  Nim   : 13218060*/  

#include <stdio.h>

int main(void)
{
    double  c[2][1];
    double  a[2][2];
    double  det_a;
    double  inv[2][2]; /*inverse*/	
    int     x;
    int     y; 
    
 /* -----------------------------------*/  
	  a[0][0] = -2;
    a[0][1] = 1;
    a[1][0] = -4;
    a[1][1] = 1;

    c[0][0] = 2;
    c[1][0] = -4;

    det_a = (a[0][0]*a[1][1])-(a[0][1]*a[1][0]);

    inv[0][0] = a[1][1]/det_a;
    inv[0][1] = ((-1)*a[0][1]/det_a);
    inv[1][0] = ((-1)*a[1][0]/det_a);
    inv[1][1] = (a[0][0]/det_a);

    x = (inv[0][0]*c[0][0])+(inv[0][1]*c[1][0]);
    y = (inv[1][0]*c[0][0])+(inv[1][1]*c[1][0]);

    printf("Nilai x: %d\n", x);
    printf("Nilai y: %d", y);

	return (0);
}