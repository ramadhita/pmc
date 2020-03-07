#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int A[10][10]; // matriks utama (baik sebelum dan sesudah diubah)
    int i, j;
    int temp[10][10]; // matriks penyimpanan sementara untuk merubah

    // mengisi matriks dengan angka random dari -10 sampai 10
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            A[i][j] = rand() % 21 - 10;
        }
    }

    // mengeprint matriks awal
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // menukar posisi matriks kiri kanan secara diagonal
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (i != j && (i+j) < 9){
                temp[i][j] = A[i][j];
                A[i][j] = A[i][9-j];
                A[i][9-j] = temp[i][j];
            }
        }
    }    

    // menukar posisi matriks atas bawah secara diagonal
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if(i != j && (i+j) < 9){
                temp[i][j] = A[i][j];
                A[i][j] = A[9-i][j];
                A[9-i][j] = temp[i][j];   
            }
        }
    }

    // mengeprint kembali matriks yang telah dirubah
    printf("\n");
    printf("Matriks baru: \n");
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
