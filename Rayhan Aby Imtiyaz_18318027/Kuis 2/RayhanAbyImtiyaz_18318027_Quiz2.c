#include <stdio.h>
/*
Tentukan titik potong/penyelesaian dari dua persamaan garis berikut:
f1 : y = 2x + 2 <==> -2x + y = 2
f2 : y = 4x - 4 <==> -4x + y = -4

Disajikan dalam bentuk matriks :
(-2 1 )(x)|(2)
(-4 1 )(y)|(-4)
A       x   B

Ax = B <==> x = A^(-1) 
*/
float main(void) {
/*Deklarasi Matriks A*/
float A[2][2];      
    A[0][0] = -2;
    A[0][1] = 1;
    A[1][0] = -4;
    A[1][1] = 1;
/*Deklarasi Matriks B*/    
float B[2][1];
    B[0][0] = 2;
    B[1][0] = -4;
/*Deklarasi variabel lain yang diperlukan*/
int r, /*row index*/
    c; /*column index*/
    
float   det, /*Determinan*/
        temp; /*Variabel sementara untuk menukar*/

/*Menentukan determinan*/
det = ((A[0][0])*(A[1][1])) - ((A[0][1])*(A[1][0]));

/*Inverse Matriks A*/
float invA[2][2];
    temp = A[0][0];
    invA[0][0] = A[1][1];
    invA[0][1] = -(A[0][1]);
    invA[1][0] = -(A[1][0]);
    invA[1][1] = temp;
    for (r = 0; r <= 1; r++) 
    { 
        for (c = 0; c <= 1; c++) 
            {   
                invA[r][c] = (invA[r][c])/det;
            } 
    }

/*Matriks penyelesaian*/
float intercept[2][1];
    intercept[0][0] = (invA[0][0])*(B[0][0]) + (invA[0][1])*(B[1][0]);
    intercept[1][0] = (invA[1][0])*(B[0][0]) + (invA[1][1])*(B[1][0]);

/*Output*/
printf("Titik potong kedua persamaan garis adalah :\n");
printf("x           y\n");
for (r = 0; r <=1; r++) {
    printf("%f ", intercept[r][0]);
    }
}

