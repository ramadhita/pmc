#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int A[10][10], B[10][10], i, j;
    
    for(i = 1; i <= 10; i++){
        for(j = 1; j <= 10; j++){
            A[i][j] = rand()%21-10;
        }
    }

    for (i = 1; i <= 10 ; i++){
        printf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n", A[i][1], A[i][2], A[i][3], A[i][4], A[i][5], A[i][6], A[i][7], A[i][8], A[i][9], A[i][10]);
    }

    for(i = 1; i <= 10 ; i++){
        for(j = 1; j <= 10 ; j++){
            if (i<=4 && j<=(10-i) && j>=(i+1)){
                B[11-i][j] = A[i][j];
            }
            else if (j<=4 && i<=(10-j) && i>=(j+1)){
                B[i][11-j] = A[i][j];
            }
            else if (i>=7 && j<=(i-1) && j>=(12-i)){
                B[11-i][j] = A[i][j];
            }
            else if (j>=7 && i<=(j-1) && i>=(12-j)){
                B[i][11-j] = A[i][j];
            }
            else{
                B[i][j] = A[i][j];
            }
        }
    }

    printf("\n\n");

    for (i = 1; i <= 10 ; i++){
        printf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n", B[i][1], B[i][2], B[i][3], B[i][4], B[i][5], B[i][6], B[i][7], B[i][8], B[i][9], B[i][10]);
    }

return(0);
}