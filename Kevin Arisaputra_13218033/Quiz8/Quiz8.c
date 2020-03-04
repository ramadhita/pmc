#include<stdio.h>
#include<math.h>

int main () {    
    int A[10][10];
    int temp;
    int i, j;
    
    for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            A[i][j] = rand() % 20 - 10;
            if (A[i][j] == -10) {
                printf ("%d ", A[i][j]);    
            } else if ((A[i][j] < 0) || (A[i][j] == 10)) {
                printf (" %d ", A[i][j]);
            } else {
                printf ("  %d ", A[i][j]);
            }
        }
        printf ("\n");
    }

    for (i=0; i<4; i++) {
        for (j=i+1; j<9-i; j++) {
            temp = A[i][j];
            A[i][j] = A[9-i][j];
            A[9-i][j] = temp;

            temp = A[j][i];
            A[j][i] = A[j][9-i];
            A[j][9-i] = temp;
        }
    }

    printf ("\n");
    for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            if (A[i][j] == -10) {
                printf ("%d ", A[i][j]);    
            } else if ((A[i][j] < 0) || (A[i][j] == 10)) {
                printf (" %d ", A[i][j]);
            } else {
                printf ("  %d ", A[i][j]);
            }
        }
        printf ("\n");
    }
}