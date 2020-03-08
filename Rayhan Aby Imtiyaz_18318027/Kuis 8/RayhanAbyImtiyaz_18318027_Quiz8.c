#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int A[10][10];
    int i,j,temp;
    srand(time(0));
    // Pengisian array secara random dan mengeprint array
    for (i=0; i <= 9; i++) {
        for (j=0; j <= 9; j++) {
            A[i][j] = rand()%21 - 10;
            if (j==9) {
                printf("%4d\t\n", A[i][j]);
            }
            else {
                printf("%4d\t", A[i][j]);
            } 
        }
    }
    // Prosedur menukar elemen array bagian kanan-kiri diagonal
    for (i=0; i <= 4; i++) {
        for (j=0; j < 9-i; j++) {
            if (i!=j) {
            temp = A[i][j];
            A[i][j] = A[i][9-j];
            A[i][9-j] = temp;
            }
        }
    }
    // Prosedur menukar elemen array bagian atas-bawah diagonal
    for (j=0; j <= 4; j++) {
        for (i=0; i < 9-j; i++) {
            if (i!=j) {
            temp = A[i][j];
            A[i][j] = A[9-i][j];
            A[9-i][j] = temp;
            }
        }
    }
    // Mengeprint array yang telah ditukar elemennya
    printf("\n\n");
    for (i=0; i <= 9; i++) {
        for (j=0; j <= 9; j++) {
            printf("%4d\t", A[i][j]);
        }
        printf("\n");
    }

    return 0;

}