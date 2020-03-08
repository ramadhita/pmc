#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[10][10], Output[10][10];
    int i, j;
    srand(time(NULL));

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            A[i][j] = (rand()%21 - 10);
        }
    }
    
    printf("\n\n----------------- AWAL -----------------\n");
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if ((i == j) || (i == 9 - j)) //diagonal
            {
                Output[i][j] = A[i][j];
            }
            else if ((i < 4) && (j < (9-i)) && (j > i)) //atas ke bawah
            {
                Output[9-i][j] = A[i][j];
            }
            else if ((i > 5) && (j > (9-i)) && (i > j)) // bawah ke atas
            {
                Output[9-i][j] = A[i][j];
            }
            else if ((j < 4) && (i < (9-j)) && (i > j)) // kiri ke kanan
            {
                Output[i][9-j] = A[i][j];
            }
            else if ((j > 5) && (i > (9-j)) && (j > i)) // kanan ke kiri
            {
                Output[i][9-j] = A[i][j];
            }
        }
    }
    
    printf("\n\n---------------- AKHIR -----------------\n");
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            printf("%3d ", Output[i][j]);
        }
        printf("\n");
    }

    return 0;
}