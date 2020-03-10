  
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printMatrix(int M[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%-4d", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// menukar dua pointer integer
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n = 10;
    int A[n][n];

    // isi random integer -10 sd 10
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 21 - 10;
        }
        
    printf("sebelum\n");
    printMatrix(A);
    
    for (int i = 0; i < n/2; i++)
        for (int j = i + 1; j < n-i - 1; j++){
            swap(&A[i][j], &A[n-1-i][j]); // vertikal
            swap(&A[j][i], &A[j][n-1-i]); // horizontal
        }

    printf("setelah\n");
    printMatrix(A);

    return 0;
}