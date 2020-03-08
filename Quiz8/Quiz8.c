#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int A[10][10];
int temp;
int i,j;

int main(){
    printf("Matriks Awal\n"); //mencetak matriks awal
    for (i=0; i<10; i++){ //mengisi matriks dengan nilai random
        for (j=0; j<10; j++){
        A[i][j] = (rand() % 21) -10;
        printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<5; i++){ //menukar kolom atas dengan bawah
        for(j=i; j<(9-i); j++){ //berehenti saat telah mencapai batas diagonal
            if((i !=j) &&(i+j !=9)){ //kolom  ditengah tidak ikut ditukar
                temp = A[i][j];
                A[i][j] = A[9-i][j];
                A[9-i][j] = temp;
            }
        }
    }

    for(j =0; j<5; j++){ //menukar kolom samping
        for(i =j; i<(9-j); i++){ //berenti saat telah mencapai batas diagonal
            if((j != i) &&(i+j !=9)){ //kolom  ditengah tidak ikut ditukar
                temp = A[i][j];
                A[i][j] = A[i][9-j];
                A[i][9-j] = temp;
            }
        }
    }

    printf("Matriks Akhir\n"); //mencetak matriks hasil penukaran
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
        printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}


