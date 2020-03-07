#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int n = 10; // ukuran matriks
    int mat_A [n] [n];
    int i, j = 0;
    int temp;
    printf("Matriks awal :");
    for (i = 0; i < n ; i++){
        printf("\n");
        for (j = 0; j < n; j++){
            mat_A [i] [j] = (rand() % (10 - (-10) + 1)) + (-10);
            if (((mat_A [i] [j]) < 0) && ((mat_A [i] [j]) > -10)){
                printf("%d", mat_A [i] [j]);
                printf("     ");
            }
            else if ((mat_A [i] [j]) == -10){
                 printf("%d", mat_A [i] [j]);
                 printf("    ");
            }
            else if (((mat_A [i] [j]) >= 0) && ((mat_A [i] [j]) < 10)){
                printf(" %d", mat_A [i] [j]);
                printf("     ");
            }
            else {
                printf("%d", mat_A [i] [j]);
                printf("     ");
            }
        }
    }

    // Tuker
    for (i = 0; i < n; i++){
        for (j = 0; j < n - i; j++){
            if ( i == j) {
                continue;
            }
            else if (i + j == n-1){
               continue;
        }
            else {
                    if (i < j) {
                        temp = mat_A [i][j];
                        mat_A [i][j] = mat_A [n-1-i][j];
                        mat_A [n-1-i][j] = temp;
                    }
                    else {
                        temp = mat_A [i][j];
                        mat_A [i][j] = mat_A [i][n-1-j];
                        mat_A [i][n-1-j] = temp;
                    }
            }
        }
    }
    printf("\n");
    printf("Matriks setelah ditukar :");
    for (i = 0; i < n ; i++){
        printf("\n");
        for (j = 0; j < n; j++){
            if (((mat_A [i] [j]) < 0) && ((mat_A [i] [j]) > -10)){
                printf("%d", mat_A [i] [j]);
                printf("     ");
            }
            else if ((mat_A [i] [j]) == -10){
                 printf("%d", mat_A [i] [j]);
                 printf("    ");
            }
            else if (((mat_A [i] [j]) >= 0) && ((mat_A [i] [j]) < 10)){
                printf(" %d", mat_A [i] [j]);
                printf("     ");
            }
            else {
                printf("%d", mat_A [i] [j]);
                printf("     ");
            }
        }
    }
}
