//Nama : Matthew Terrence Amadeus Hosannah
//NIM  : 13218038
//Date : Kamis, 23 Januari 2020

#include <stdio.h>	

int
main(void)
{
	int matrix_A[2][2];
	int matrix_C[2][1];
	int x[1][1]; 
	int y[2][1]; 
    int Kon[2][2]; 
    int z[2][2];
    int f[2][2];
    int determinan;
//deklarasi matrix C
    matrix_C[0][0] = 2; 
    matrix_C[1][0] = -4;

//deklarari matrix A
	matrix_A[0][0] = -2; 
    matrix_A[0][1] = 1;
    matrix_A[1][0] = -4;
    matrix_A[1][1] = 1;


    determinan = ((matrix_A[0][0]*matrix_A[1][1])-(matrix_A[1][0]*matrix_A[0][1]));
   
    Kon[0][0] = (matrix_A[1][1]); 
    Kon[0][1] = (matrix_A[0][1]*-1);
    Kon[1][0] = (matrix_A[1][0]*-1);
    Kon[1][1] = (matrix_A[0][0]);

    x[0][0] =((Kon[0][0]*matrix_C[0][0])+(Kon[0][1]*matrix_C[1][0]))/determinan; 
    y[1][0] = ((Kon[1][0]*matrix_C[0][0])+(Kon[1][1]*matrix_C[1][0]))/determinan;

    printf("x = %d",x[0][0]); //display output
    printf(" y = %d\n",y[1][0]);	
    return (0);
}