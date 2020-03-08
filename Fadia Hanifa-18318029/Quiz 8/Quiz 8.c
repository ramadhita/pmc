// Fadia Hanifa (18318029)

#include <stdio.h>
#include <stdlib.h>

// Deklarasi Variabel
int A[10][10];                                  // Variabel matriks 10 x 10
int i, j, temp;                                 // variabel i sebagai row, j sebagai column, temp untuk menukar

// Program Utama
int main (){
    // Pengisian Matriks
    for (i = 0; i < 10; i ++){
        for (j = 0; j < 10; j ++){
            A[i][j] = (rand() %21 - 10);        // mengassign integer random -10 hingga 10 kedalam matriks
        }
    }

    // Print matriks awal
    printf("Matriks awal:\n");
    for (i = 0; i < 10; i ++){
        for (j = 0; j < 10; j ++){
            printf("%d  ", A[i][j]);            // mengeluarkan nilai matriks pada row i column j
        }
        printf("\n");                           // new line setiap berganti row
    }

    // Penukaran bagian atas dan bagian bawah
    for (i = 0; i < 5; i ++){                   // dari row 0 sampai 4
        for (j = i + 1; j < (9 - i); j ++) {    // dari column i + 1 sampai 8 - i
            temp = A[9-i][j];                   // nilai row i dengan row 9 - i ditukar
            A[9-i][j] = A[i][j];
            A[i][j] = temp;
        }
    }

    // Penukaran bagian kanan dan bagian kiri
    for (j = 0; j < 5; j ++){                   // dari column 0 sampai column 4              
        for (i = j + 1; i < (9 - j); i ++) {    // dari row j + 1 sampai 8 - j
            temp = A[i][9-j];                   // nilai pada column j dan column 9-j ditukar
            A[i][9-j] = A[i][j];
            A[i][j] = temp;
        }
    }

    // Print matriks hasil penukaran
    printf("Matriks akhir:\n");
    for (i = 0; i < 10; i ++){
        for (j = 0; j < 10; j ++){
            printf("%d  ", A[i][j]);            // mengeluarkan nilai matriks pada row i column j
        }
        printf("\n");                           // new line setiap berganti row
    }
    return 0;
}
