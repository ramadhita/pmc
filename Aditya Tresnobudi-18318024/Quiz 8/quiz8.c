#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int A[10][10];
    int B[10][10];
    int i = 0;
    int j = 0;
    srand(time(0));
    printf("Matrix Awal : \n");
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            A[i][j] = rand() % (10 + 1 + 10) - 10;
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(i <= 3 && j >= i + 1 && j <= 8-i)
            {
                B[9-i][j] = A[i][j];
            }
            else if(i >= 6 && j >= (9-i) + 1 && j <= i-1)
            {
                B[9-i][j] = A[i][j];
            }
            else if(j <= 3 && i >= j + 1 && i <= 8-j)
            {
                B[i][9-j] = A[i][j];
            }
            else if(j >= 6 && i >= (10-j) && i <= j-1)
            {
                B[i][9-j] = A[i][j];
            }
            else
            {
                B[i][j] = A[i][j];
            }
        }
    }
    printf("Matrix Relokasi : \n");
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf("%3d ",B[i][j]);
        }
        printf("\n");
    }
}
