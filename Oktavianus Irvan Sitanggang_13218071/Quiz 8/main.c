/* EL2208 Praktikum Pemecahan Masalah dengan C
*Modul       :
*Percobaan   : 
*Hari/Tanggal: Tuesday/03-03-2020
*Nama/NIM    : Oktavianus Irvan Sitanggang/13218071
*Asisten/NIM : 
*Nama File   : main.c
*Deskripsi   : 
*/


#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int createRand(int a, int b){
    return (int)(a + (rand()*(b-a)/RAND_MAX));
}

void swap(int*a , int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int A[10][10];

void printMatrix(int A[10][10]){
    int i, j, k;
    for (i = 0; i < 10; i++){
        for (k = 0; k < 60; k++){
            printf("_");
        }
        printf("\n");
        for (j = 0; j < 10; j++){
            printf("%-4d |",A[i][j]);
        }
        printf("\n");
    }
    for (k = 0; k < 60; k++){
        printf("_");
    }
    printf("\n");
}

int main(){
    int i,j;
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            A[i][j] = createRand(-10, 10);
        }
    }
    printMatrix(A);
    for(j = 1; j < 5; j++){
        for(i = 0; i < j; i++){
            swap(A[i]+j, A[9-i]+j);
            swap(A[i]+9-j, A[9-i]+9-j);
        }
    }

    for(i = 1; i < 5; i++){
        for(j=0;j<i;j++){
            swap(A[i]+j, A[i]+9-j);
            swap(A[9-i]+9-j, A[9-i]+j);
        }
    }
    printMatrix(A);
    return 0;
}    