/*  Matriks A[10][10]:
    A -> Random dr -10 s/d 10, integer
    Bagi diagonal (4 bagian A B C D)
    Pindahkan value A ke C, B ke D
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    
    // LIBRARY

    int A[10][10];
    int B[10][10];

    // ALGORITHM

    srand(time(NULL));

    // create matrix A with content: random int -10 to 10
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            A[i][j] = (rand() % (10 + 1 - (-10)) + (-10));
        }
    }


    // insert matrix B
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            // If not diagonal; swap
            if ((i != j) && (i + j != 9)){
                // If in quadrant A, swap with C
                if(((i < 5) && (j < 4) && (j < i)) || ((i > 4) && (j < 4) && (j < (9-i)))){
                    B[i][j] = A[i][(9-j)];
                    B[i][(9-j)] = A[i][j];
                }
                // If in quadrant B, swap with D
                else if (((j < 5) && (i < 4) && (i < j)) || ((j > 4) && (i < 4) && (i < (9-j)))){
                    B[i][j] = A[(9-i)][j];
                    B[(9-i)][j] = A[i][j];
                }
            } else {
                // If diagonal, the same
                B[i][j] = A[i][j];
            }
        }
    }

    //print matrix A
    printf("Matriks A:\n");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            // If end of line, enter
            if(j == 9){
                printf("| %3d |\n", A[i][j]);
                printf("-------------------------------------------------------------\n");
            } else{
                printf("| %3d ", A[i][j]);
            }
        }
    }

    //print matrix B
    printf("\nMatriks B:\n");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            // If end of line, enter
            if(j == 9){
                printf("| %3d |\n", B[i][j]);
                printf("-------------------------------------------------------------\n");
            } else{
                printf("| %3d ", B[i][j]);
            }
        }
    }
}