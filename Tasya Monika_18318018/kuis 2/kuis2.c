/* y1 = 2x + 2
   y2 = 4x - 4
cari titik potongnya pake matriks (cramer's rule)
*/


#include <stdio.h>

int main()
{
	int detx, dety, det;
	float x, y;
	
	int matriks1 [2][2];
	int matriks2 [2][2];
	int matriks3 [2][2];
	
	matriks1[0][0] = -2;
	matriks1[0][1] = -1;
	matriks1[1][0] = 4;
	matriks1[1][1] = -1;
	
	matriks2[0][0] = 2;
	matriks2[0][1] = -2;
	matriks2[1][0] = 4;
	matriks2[1][1] = 4;
	
	matriks3[0][0] = 2;
	matriks3[0][1] = -1;
	matriks3[1][0] = 4;
	matriks3[1][1] = -1;
	
	detx = (matriks1[0][0]*matriks1[1][1]) - (matriks1[0][1]*matriks1[1][0]);
	dety = (matriks2[0][0]*matriks2[1][1]) - (matriks2[0][1]*matriks2[1][0]);
	det = (matriks3[0][0]*matriks3[1][1]) - (matriks3[0][1]*matriks3[1][0]);
	
	x = detx/det;
	y = dety/det;
	
	printf("x = %f \n", x);
	printf("y = %f \n", y);
	
return (0);
}

