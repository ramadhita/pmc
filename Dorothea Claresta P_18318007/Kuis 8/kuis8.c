/* Kuis 8
Hari, tanggal   : Selasa, 3 Maret 2020 
Nama            : Dorothea Claresta P
NIM             : 18318007
Deskripsi       : Membuat matriks 10x10 berisi integer random antara -10 sampai 10,
kemudian menukar segitiga atas dan bawah serta segitiga kanan dan kiri
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat[9][9];
    int i, j, temp1, temp2;

    // Mengisi matriks 10x10 dengan integer random bernilai -10 sampai 10
    printf("Matriks 10x10 :\n");
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            mat[i][j] = (rand () % (10 - (-10) + 1)) - 10 ;
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    // Menukar segitiga atas dan bawah serta segitiga kanan dan kiri
    for (i=0; i<4; i++){
        for (j=i+1; j<9-i; j++){
            temp1 = mat[i][j];
            mat[i][j] = mat[9-i][j];
            mat[9-i][j] = temp1;

            temp2 = mat[j][i];
            mat[j][i] = mat[j][9-i];
            mat[j][9-i] = temp2;
        }
    }

    // Menampilkan matriks setelah pertukaran
    printf("\nMatriks 10x10 setelah pertukaran segitiga atas dan bawah serta segitiga kanan dan kiri :\n");
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
