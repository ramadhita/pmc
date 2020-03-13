#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int A[10][10];
    int i, j, temp;
    srand(time(0));
    for (i=0 ; i<10; i++){
        for (j=0; j<10; j++){
            A[i][j] = rand() % (20)-10;
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i=0; i<5; i++){
        for (j=i+1; j<10-i-1; j++){
                temp = A[i][j];
                A[i][j] = A[10-i-1][j];
                 A[10-i-1][j] = temp;
            }
        }    
    for (j = 0; j<5; j++){
        for (i = j+1; i<10-j-1; i++){
            temp = A[i][j];
            A[i][j] = A[i][10-j-1];
            A[i][10-j-1] = temp;
        }
    }
    printf("\n");
    for (i=0 ; i<10; i++){
        for (j=0; j<10; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}