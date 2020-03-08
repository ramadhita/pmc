#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j, matrix[10][10], temp;

    for(i = 0;i < 10;i++)
    {
        for(j = 0; j< 10;j++)
        {
            matrix[i][j] = rand() % (10 - (-10)+1) + (-10);
        }
    }
    for(i = 0;i < 10;i++)
    {
        for(j = 0; j< 10;j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    for(i = 1;i < 5;i++)
    {
        for(j = 0; j< i;j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[i][9-j];
            matrix[i][9-j] = temp;

        }
    }

     for(i = 8;i > 4;i--)
    {
        for(j = 0; j < 9-i;j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[i][9-j];
            matrix[i][9-j] = temp;

        }
    }

        for(i = 0;i < 4;i++)
    {
        for(j = i+1; j< 10-(i+1);j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[9-i][j];
            matrix[9-i][j] = temp;
        }
        printf("\n");
    }

    printf("\n");
    for(i = 0;i < 10;i++)
    {
        for(j = 0; j< 10;j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
return 0;
}
