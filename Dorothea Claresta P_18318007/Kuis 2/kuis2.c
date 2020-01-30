/* Kuis 2 Kamis 23 Januari 2020
Nama : Dorothea Claresta P
NIM  : 18318007

Program untuk menyelesaikan persamaan:
y = 2x + 2
y = 4x - 4 
*/

#include <stdio.h>

int main()
{
    // Assign nilai matriks A dan B
    float A[2][2] = {{2, -1},{4, -1}};
    float B[2][1] = {{-2},{4}};

    // Menghitung determinan
    float detA;
    detA = A[0][0]*A[1][1] - A[1][0]*A[0][1];

    // Matriks invers A
    float invA[2][2];
    invA[0][0] = 1/detA * A[1][1];
    invA[0][1] = -1/detA * A[0][1];
    invA[1][0] = -1/detA * A[1][0];
    invA[1][1] = 1/detA * A[0][0];


    // Menampilkan matriks invers A
    int i, j;
    printf("Inverse matriks A =\n");
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            printf("%.1f\t", invA[i][j]);
        }
        printf("\n");
    }

    // Mencari nilai x dan y
    float hasil;
    printf("Nilai x dan y =\n");
    for (i=0; i<2; i++){
        hasil = 0;
        for (j=0; j<2; j++){
            hasil += invA[i][j]*B[j][0];
        }
        printf("%.1f\t", hasil);
    }
}
