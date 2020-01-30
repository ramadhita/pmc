#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (void)
{
	//Inisialisasi
	int A[2][2] = {{-2,1},{-4,1}};
	int B[2] = {2,-4};
	int x,y,det,detx,dety;

	//Metode Cramer
	det = (A[0][0]*A[1][1]) - (A[0][1]*A[1][0]);
	detx = (A[1][1]*B[0]) - (A[0][1]*B[1]);
	dety = (A[0][0]*B[1]) - (A[1][0]*B[0]);
	x = detx/det;
	y = dety/det;
	
	printf("Titik Potong: (%d,%d)\n", x,y);
	return(0);

}

