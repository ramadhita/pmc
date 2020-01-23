#include <stdio.h>

int main()
{
	//deklarasi
	int A[2][2];
	int B[2][1];
	int e[2][2];
	int x,y;
	
	// input bilangan
	A[0][0] = -2;
	A[0][1] = 1;
	A[1][0] = -4;
	A[1][1] = 1;
	B[0][0] = 2;
	B[1][0] = -4;
	
	// mencari adjoint, dengan e sebagai matriks adjoint
	e[0][0] = A[1][1] ;
	e[0][1] = -A[0][1] ;
	e[1][0] = -A[1][0] ;
	e[1][1] = A[0][0] ;
	
	// mencari determinan
	int det = ((A[0][0]*A[1][1])-(A[0][1] *A[1][0]) );
	
	// mencari nilai x dan y
	x = (((e[0][0]) * B[0][0] ) + ((e[0][1]) * B[1][0]))/det;
	y = (((e[1][0]) * B[0][0] )+ ((e[1][1]) * B[1][0]))/ det;
	
	//  tampilkan nilai x dan y
	//printf("det = %d \n", det);
	printf("Nilai x yang memenuhi adalah %d \n", x);
	printf("Nilai y yang memenuhi adalah = %d \n", y);
}
