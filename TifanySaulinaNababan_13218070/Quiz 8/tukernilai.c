#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int A[10][10], temp;

    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            A[i][j] = (rand() % 21) -10;
            //A[i][j] = rand()%21-10;
        }
    }

    printf("\n");
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            printf("%d   ", A[i][j]);
        }
        printf("\n");
    }
    
    
    for(int i=1; i<=4; i++){
        for(int j=i+1; j<=10-i; j++){
            temp = A[i][j];
            A[i][j] = A[11-i][j];
            A[11-i][j] = temp;
        }
    }

    for(int j=1; j<=4; j++){
        for(int i=j+1; i<=10-j; i++){
            temp = A[i][j];
            A[i][j] = A[i][11-j];
            A[i][11-j] = temp;
        }
    }

    printf("\n");
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            printf("%d   ", A[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}