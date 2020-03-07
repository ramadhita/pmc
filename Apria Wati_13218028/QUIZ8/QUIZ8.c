/** Apria wati 13218028**/
#include<stdio.h>

int main(){
    int i, j, A[10][10];
    int temp;
    for (i=0; i<10; i++){
        for (j=0; j < 10; j++){
            A[i][j] = rand()% (20)-10;
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    for (i =0; i<5; i++){
        for (j=i+1; j<9-i; j++){
            temp = A[i][j];
            A[i][j] = A[9-i][j];
            A[9-i][j]= temp;
        }
    }
    for (j =0; j < 5; j++){
        for (i=j+1; i<9-j; i++){
            temp = A[i][j];
            A[i][j] = A[i][9-j];
            A[i][9-j]= temp;
        }
    }
    printf("\n");

    for (i=0; i<10; i++){
        for (j=0; j < 10; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}