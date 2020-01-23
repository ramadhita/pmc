/******************************************************************************

Mencari TiPot Garis dengan Matriks
2x1 - y1 = -2
4x2 - y2 = 4

K. Clement Teja
13218079

*******************************************************************************/

#include <stdio.h>

int main(void)
{
	int i, j;
	float A[2][2]; // matriks A
	float B[2][2]; // matriks A invers
	float C[2];    // matriks C
	float D[2];    // matriks x, y
	int determinant, temp;

/* deklarasi */
	A[0][0] = 2;
	A[0][1] = -1;
	A[1][0] = 4;
	A[1][1] = -1;
    
    C[0] = -2;
    C[1] = 4;
    
    determinant = 0;

/* Operasi */

    /* Menghitung determinan */
        determinant += (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]) ;

    /* Menghitung invers A */
        for (i = 0; i < 2; i++){
            for (j = 0; j < 2; j++){
                if (i != j) {
                    B[i][j] = - A[i][j] / determinant;
                }
                else{
                    B[i][j] = A[i][j] / determinant;
                }  
            }		
        }

        temp = B[0][0];
        B[0][0] = B[1][1];
        B[1][1] = temp;

    /* Menghitung x, y */
        for (i = 0; i < 2; i++){
            D[i] = 0;
            for (j = 0; j < 2; j++){
                D[i]+=B[i][j]*C[j];
            }
        }

/* Display */
    printf("x, y = (%.f, %.f)", D[0], D[1]);
	return (0);
}