#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Randoms(int lower, int upper);

int main(void){
    int A[10][10], B[10][10];
    int temp;

    FILE *fp;
    fp = fopen("temp/quiz8.txt", "w");

    // Ganti A-C, B -D

    for (int i = 0; i < 10; i++)
    {
        /* code */
        for (int j = 0; j < 10; j++)
        {
            /* code */
            temp = Randoms(-10,10);
            A[i][j] = temp;
            fprintf(fp, ";%d", temp);
        }
        fprintf(fp, "\n");
    }

    fprintf(fp, "\n \n");
    for (int i = 0; i < 10; i++)
    {
        /* code */
        for (int j = 0; j < 10; j++)
        {
            /* code */
            if (i == j || i == (9 - j))
            {
                /* code */
                B[i][j] = A[i][j];
            }
            else
            {
                /* code */
                if (i < j && i < (9-j))
                {
                    /* code daerah B*/
                    B[i][j] = A[9-i][j];
                    B[9-i][j] = A[i][j];
                }
                else if (i < 9-j && i>j)
                {
                    /* code */
                    B[i][j] = A[i][9-j];
                    B[i][9-j] = A[i][j];
                }
            }
            
        }
    }

    for (int i = 0; i < 10; i++)
    {
        /* code */
        for (int j = 0; j < 10; j++)
        {
            /* code */
            fprintf(fp, ";%d", B[i][j]);
        }
        fprintf(fp, "\n");
    }
}

// Generates and prints 'count' random
// numbers in range [lower, upper].
int Randoms(int lower, int upper)
{
    int num = (rand() % (upper - lower + 1)) + lower;
    return (num);
}
