#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int A[10][10],
        B[10][10],
        temp,
    i,j;
    srand((signed) time(0));

printf ("Matriks awal\n");

    for (i=0; i<10; i++){
        for (j=0;j<10;j++){
            A[i][j] = (rand()%20) - 10;
        printf ("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf ("\n");
    printf("Matriks baru");
    printf("\n");

    for (i=0; i<10; i++){
        for (j=0;j<10;j++){
            B[i][j]=A[i][j];
        }
    }

    for (j=0; j<=4; j++)
    {
        for (i=j+1; i<9-j; i++)
        {
            temp = B[i][j];
            B[i][j]=B[i][9-j];
            B[i][9-j]=temp;
        }
    }

    for (i=0; i<=4; i++)
    {
        for (j=i+1; j<9-i; j++)
        {
            temp = B[i][j];
            B[i][j]=B[9-i][j];
            B[9-i][j]=temp;
        }
        
    }

    for (i=0; i<10; i++)
    {
        for (j=0;j<10;j++)
        {
            printf ("%d ", B[i][j]);
        }
        printf("\n");
    }
}