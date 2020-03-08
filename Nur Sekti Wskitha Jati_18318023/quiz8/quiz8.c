#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[10][10];
    int i, j;
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            A[i][j]=(rand()%20)-10;
        }
    }
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i=0; i<4; i++){
        for (j=(1+i); j<(9-i); j++){
            int temp1 = A[i][j];
            A[i][j] = A[9-i][j];
            A[9-i][j] = temp1;
            int temp2 = A[j][i];
            A[j][i] = A[j][9-i];
            A[j][9-i] = temp2;
        }
    }

    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}
